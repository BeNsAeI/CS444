#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/kernel.h>	/* printk() */
#include <linux/slab.h>		/* kmalloc() */
#include <linux/fs.h>		/* everything... */
#include <linux/errno.h>	/* error codes */
#include <linux/timer.h>
#include <linux/types.h>	/* size_t */
#include <linux/fcntl.h>	/* O_ACCMODE */
#include <linux/hdreg.h>	/* HDIO_GETGEO */
#include <linux/kdev_t.h>
#include <linux/vmalloc.h>
#include <linux/genhd.h>
#include <linux/blkdev.h>
#include <linux/buffer_head.h>	/* invalidate_bdev */
#include <linux/bio.h>
#include <linux/crypto.h>

MODULE_LICENSE("Dual BSD/GPL");

static int ramddd_major = 0;
module_param(ramddd_major, int, 0);
static int hardsect_size = 512;
module_param(hardsect_size, int, 0);
static int nsectors = 1024;	/* How big the drive is */
module_param(nsectors, int, 0);
static int ndevices = 4;
module_param(ndevices, int, 0);

// Setup default encryption key and cipher. Also allow user to specify one
static char *key = "this is our private key";
struct crypto_cipher *cipher;
module_param(key, charp, 0000);


/*
 * The different "request modes" we can use.
 */
enum {
	RM_SIMPLE  = 0,	/* The extra-simple request function */
	RM_FULL    = 1,	/* The full-blown version */
	RM_NOQUEUE = 2,	/* Use make_request */
};
static int request_mode = RM_SIMPLE;
module_param(request_mode, int, 0);

/*
 * Minor number and partition management.
 */
#define CIPHER_ALGORITHM "aes"
#define SBULL_MINORS	16
#define MINOR_SHIFT	4
#define DEVNUM(kdevnum)	(MINOR(kdev_t_to_nr(kdevnum)) >> MINOR_SHIFT

/*
 * We can tweak our hardware sector size, but the kernel talks to us
 * in terms of small sectors, always.
 */
#define KERNEL_SECTOR_SHIFT	9
#define KERNEL_SECTOR_SIZE	(1<<KERNEL_SECTOR_SHIFT)

/*
 * After this much idle time, the driver will simulate a media change.
 */
#define INVALIDATE_DELAY	30*HZ

/*
 * The internal representation of our device.
 */
struct ramddd_dev {
        int size;                       /* Device size in sectors */
        u8 *data;                       /* The data array */
        short users;                    /* How many users */
        short media_change;             /* Flag a media change? */
        spinlock_t lock;                /* For mutual exclusion */
        struct request_queue *queue;    /* The device request queue */
        struct gendisk *gd;             /* The gendisk structure */
        struct timer_list timer;        /* For simulated media changes */
};

static struct ramddd_dev *Devices = NULL;

static int bytes_to_sectors_checked(unsigned long bytes)
{
	if( bytes % KERNEL_SECTOR_SIZE )
	{
		printk("[KERNEL DEBUG] BTSC*\n");
	}
	return bytes / KERNEL_SECTOR_SIZE;
}

/*
 * Handle an I/O request.
 */
static void ramddd_transfer(struct ramddd_dev *dev, unsigned long sector,
		unsigned long nsect, char *buffer, int write)
{
	unsigned long offset;
	unsigned long nbytes;
	int i;
	offset = sector * KERNEL_SECTOR_SIZE;
	nbytes = nsect * KERNEL_SECTOR_SIZE;
	printk (KERN_NOTICE "[KERNEL DEBUG] Transfer called.\n");
	if ((offset + nbytes) > dev->size) {
		printk (KERN_NOTICE "[KERNEL DEBUG] Packet at transfer: offset,nbytes: (%ld %ld)\n", offset, nbytes);
		return;
	}
	
	// Set encryption for write
	crypto_cipher_clear_flags(cipher, ~0);
	crypto_cipher_setkey(cipher, key, strlen(key));
	
	if (write)
		for (i = 0; i < nbytes; i += crypto_cipher_blocksize(cipher)) {
			memset(dev->data + offset + i, 0, crypto_cipher_blocksize(cipher));
			crypto_cipher_encrypt_one(cipher, dev->data + offset + i, buffer + i);
		}
	else
		for (i = 0; i < nbytes; i += crypto_cipher_blocksize(cipher)) {
			crypto_cipher_decrypt_one(cipher, buffer + i, dev->data + offset + i);
		}
		
		memcpy(buffer, dev->data + offset, nbytes);
}

/*
 * The simple form of the request function.
 */
static void ramddd_request(struct request_queue *q)
{
	struct request *req;
	int ret;

	req = blk_fetch_request(q);
	while (req) {
		struct ramddd_dev *dev = req->rq_disk->private_data;
		if (req->cmd_type != REQ_TYPE_FS) {
			printk (KERN_NOTICE "[KERNEL DEBUG] requested\n");
			ret = -EIO;
			goto done;
		}
		printk (KERN_NOTICE "[KERNEL DEBUG] Request LOGGED: %u dir %d sec %ld, nr %d\n",
			(unsigned int)(dev - Devices), (int)rq_data_dir(req),
			(long int)blk_rq_pos(req), (int)blk_rq_cur_sectors(req));
		printk (KERN_NOTICE "[KERNEL DEBUG] Key: %s.\n",key);
		ramddd_transfer(dev, blk_rq_pos(req), blk_rq_cur_sectors(req),
				bio_data(req->bio), rq_data_dir(req));
		ret = 0;
	done:
		if(!__blk_end_request_cur(req, ret)){
			req = blk_fetch_request(q);
		}
	}
}

/*
 * Transfer a single BIO.
 */
static int ramddd_xfer_bio(struct ramddd_dev *dev, struct bio *bio)
{
	struct bio_vec bvec;
	struct bvec_iter iter;
	sector_t sector = bio->bi_iter.bi_sector;

	/* Do each segment independently. */
	bio_for_each_segment(bvec, bio, iter) {
		char *buffer = __bio_kmap_atomic(bio, iter);
		ramddd_transfer(dev, sector,bytes_to_sectors_checked(bio_cur_bytes(bio)),
				buffer, bio_data_dir(bio) == WRITE);
		sector += (bytes_to_sectors_checked(bio_cur_bytes(bio)));
		__bio_kunmap_atomic(bio);
	}
	return 0; /* Always "succeed" */
}


/*
 * Transfer a full request.
 */
static int ramddd_xfer_request(struct ramddd_dev *dev, struct request *req)
{
	struct bio *bio;
	int nsect = 0;
    
	__rq_for_each_bio(bio, req) {
		ramddd_xfer_bio(dev, bio);
		nsect += bio->bi_iter.bi_size/KERNEL_SECTOR_SIZE;
	}
	return nsect;
}



/*
 * Smarter request function that "handles clustering".
 */
static void ramddd_full_request(struct request_queue *q)
{
	struct request *req;
	struct ramddd_dev *dev = q->queuedata;
	int ret;

	while ((req = blk_fetch_request(q)) != NULL) {
		if (req->cmd_type != REQ_TYPE_FS) {
			printk (KERN_NOTICE "[KERNEL DEBUG] Skipping Request\n");
			ret = -EIO;
			goto done;
		}
		ramddd_xfer_request(dev, req);
		ret = 0;
	done:
		__blk_end_request_all(req, ret);
	}
}



/*
 * The direct make request version.
 */
static void ramddd_make_request(struct request_queue *q, struct bio *bio)
{
	struct ramddd_dev *dev = q->queuedata;
	int status;

	status = ramddd_xfer_bio(dev, bio);
	bio_endio(bio, status);
}


/*
 * Open and close.
 */

static int ramddd_open(struct block_device *bdev, fmode_t mode)
{
	struct ramddd_dev *dev = bdev->bd_disk->private_data;

	del_timer_sync(&dev->timer);
	spin_lock(&dev->lock);
	if (! dev->users) 
		check_disk_change(bdev);
	dev->users++;
	spin_unlock(&dev->lock);
	return 0;
}

static void ramddd_release(struct gendisk *disk, fmode_t mode)
{
	struct ramddd_dev *dev = disk->private_data;

	spin_lock(&dev->lock);
	dev->users--;

	if (!dev->users) {
		dev->timer.expires = jiffies + INVALIDATE_DELAY;
		add_timer(&dev->timer);
	}
	spin_unlock(&dev->lock);

}

/*
 * Look for a (simulated) media change.
 */
int ramddd_media_changed(struct gendisk *gd)
{
	struct ramddd_dev *dev = gd->private_data;
	
	return dev->media_change;
}

/*
 * Revalidate.  WE DO NOT TAKE THE LOCK HERE, for fear of deadlocking
 * with open.  That needs to be reevaluated.
 */
int ramddd_revalidate(struct gendisk *gd)
{
	struct ramddd_dev *dev = gd->private_data;
	
	if (dev->media_change) {
		dev->media_change = 0;
		memset (dev->data, 0, dev->size);
	}
	return 0;
}

/*
 * The "invalidate" function runs out of the device timer; it sets
 * a flag to simulate the removal of the media.
 */
void ramddd_invalidate(unsigned long ldev)
{
	struct ramddd_dev *dev = (struct ramddd_dev *) ldev;

	spin_lock(&dev->lock);
	if (dev->users || !dev->data) 
		printk (KERN_WARNING "[KERNEL WARNING] ramddd: timer failure, Users has no Data\n");
	else
		dev->media_change = 1;
	spin_unlock(&dev->lock);
}

/*
 * The ioctl() implementation
 */

int ramddd_ioctl (struct block_device *bdev,
		 fmode_t mode,
                 unsigned int cmd, unsigned long arg)
{
	long size;
	struct hd_geometry geo;
	struct ramddd_dev *dev = bdev->bd_disk->private_data;

	switch(cmd) {
	    case HDIO_GETGEO:
        	/*
		 * Get geometry: since we are a virtual device, we have to make
		 * up something plausible.  So we claim 16 sectors, four heads,
		 * and calculate the corresponding number of cylinders.  We set the
		 * start of data at sector four.
		 */
		size = dev->size*(hardsect_size/KERNEL_SECTOR_SIZE);
		geo.cylinders = (size & ~0x3f) >> 6;
		geo.heads = 4;
		geo.sectors = 16;
		geo.start = 4;
		if (copy_to_user((void __user *) arg, &geo, sizeof(geo)))
			return -EFAULT;
		return 0;
	}

	return -ENOTTY; /* unknown command */
}



/*
 * The device operations structure.
 */
static struct block_device_operations ramddd_ops = {
	.owner           = THIS_MODULE,
	.open 	         = ramddd_open,
	.release 	 = ramddd_release,
	.media_changed   = ramddd_media_changed,
	.revalidate_disk = ramddd_revalidate,
	.ioctl	         = ramddd_ioctl
};


/*
 * Set up our internal device.
 */
static void setup_device(struct ramddd_dev *dev, int which)
{
	/*
	 * Get some memory.
	 */
	memset (dev, 0, sizeof (struct ramddd_dev));
	dev->size = nsectors*hardsect_size;
	dev->data = vmalloc(dev->size);
	if (dev->data == NULL) {
		printk (KERN_NOTICE "[KERNEL DEBUG] vmalloc failured\n");
		return;
	}
	spin_lock_init(&dev->lock);
	
	/*
	 * The timer which "invalidates" the device.
	 */
	init_timer(&dev->timer);
	dev->timer.data = (unsigned long) dev;
	dev->timer.function = ramddd_invalidate;
	
	/*
	 * The I/O queue, depending on whether we are using our own
	 * make_request function or not.
	 */
	switch (request_mode) {
	    case RM_NOQUEUE:
		dev->queue = blk_alloc_queue(GFP_KERNEL);
		if (dev->queue == NULL)
			goto out_vfree;
		blk_queue_make_request(dev->queue, ramddd_make_request);
		break;

	    case RM_FULL:
		dev->queue = blk_init_queue(ramddd_full_request, &dev->lock);
		if (dev->queue == NULL)
			goto out_vfree;
		break;

	    default:
		printk(KERN_NOTICE "[KERNEL DEBUG] Bad request mode %d, using simple\n", request_mode);
        	/* fall into.. */
	
	    case RM_SIMPLE:
		dev->queue = blk_init_queue(ramddd_request, &dev->lock);
		if (dev->queue == NULL)
			goto out_vfree;
		break;
	}
	blk_queue_logical_block_size(dev->queue, hardsect_size);
	dev->queue->queuedata = dev;
	/*
	 * And the gendisk structure.
	 */
	dev->gd = alloc_disk(SBULL_MINORS);
	if (! dev->gd) {
		printk (KERN_NOTICE "[KERNEL DEBUG] alloc_disk failure\n");
		goto out_vfree;
	}
	dev->gd->major = ramddd_major;
	dev->gd->first_minor = which*SBULL_MINORS;
	dev->gd->fops = &ramddd_ops;
	dev->gd->queue = dev->queue;
	dev->gd->private_data = dev;
	snprintf (dev->gd->disk_name, 32, "ramddd%c", which + 'a');
	set_capacity(dev->gd, nsectors*(hardsect_size/KERNEL_SECTOR_SIZE));
	add_disk(dev->gd);
	return;

  out_vfree:
	if (dev->data)
		vfree(dev->data);
}



static int __init ramddd_init(void)
{
	int i;
	
	cipher = crypto_alloc_cipher(CIPHER_ALGORITHM, 0, 0);
	if(IS_ERR(cipher)) {
		printk(KERN_ERR "[KERNEL ERROR] Cypher allocation failed - FATAL");
		return PTR_ERR(cipher);
	}
	
	/*
	 * Get registered.
	 */
	ramddd_major = register_blkdev(ramddd_major, "ramddd");
	if (ramddd_major <= 0) {
		printk(KERN_WARNING "[KERNEL WARNING] ramddd: unable to get major number\n");
		return -EBUSY;
	}
	/*
	 * Allocate the device array, and initialize each one.
	 */
	Devices = kmalloc(ndevices*sizeof (struct ramddd_dev), GFP_KERNEL);
	if (Devices == NULL)
		goto out_unregister;
	for (i = 0; i < ndevices; i++) 
		setup_device(Devices + i, i);
    
	return 0;

  out_unregister:
	unregister_blkdev(ramddd_major, "sbd");
	return -ENOMEM;
}

static void ramddd_exit(void)
{
	int i;

	for (i = 0; i < ndevices; i++) {
		struct ramddd_dev *dev = Devices + i;

		del_timer_sync(&dev->timer);
		if (dev->gd) {
			del_gendisk(dev->gd);
			put_disk(dev->gd);
		}
		if (dev->queue) {
			if (request_mode == RM_NOQUEUE)
				blk_put_queue(dev->queue);
			else
				blk_cleanup_queue(dev->queue);
		}
		if (dev->data)
			vfree(dev->data);
	}
	// Free the cipher and unregister the device
	crypto_free_cipher(cipher);
	unregister_blkdev(ramddd_major, "ramddd");
	kfree(Devices);
}
	
module_init(ramddd_init);
module_exit(ramddd_exit);

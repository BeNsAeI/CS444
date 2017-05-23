#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/init.h>

#include <linux/kernel.h> /* printk() */
#include <linux/fs.h>     /* everything... */
#include <linux/errno.h>  /* error codes */
#include <linux/types.h>  /* size_t */
#include <linux/vmalloc.h>
#include <linux/genhd.h>
#include <linux/blkdev.h>
#include <linux/hdreg.h>

#include <linux/crypto.h> /* Encryption library */

MODULE_LICENSE("Dual BSD/GPL");
static char *Version = "1.4";


/* GLOBALS */

/* Crypto struct with general naming scheme */
static struct crypto_cipher *tfm;

static int major_num = 0;
module_param(major_num, int, 0);
static int logical_block_size = 512;
module_param(logical_block_size, int, 0);
static int nsectors = 1024; /* How big the drive is */
module_param(nsectors, int, 0);

#define KEY_SZ 8
static char* key = "Password123";
module_param(key, charp, 0);
/* END GLOBALS */

/*
 * We can tweak our hardware sector size, but the kernel talks to us
 * in terms of small sectors, always.
 */
#define KERNEL_SECTOR_SIZE 512

/*
 * Our request queue.
 */
static struct request_queue *Queue;

/*
 * The internal representation of our device.
 */
static struct sbd_enc_device {
        unsigned long size;
        spinlock_t lock; /* prevents drivers from fighting over device. */
        u8 *data; /* similar to unit8_t or unsigned int */
	struct gendisk *gd; /* ??? */
} Device;

/**
 * prints hex data at a address
 * this is exactly the same as ref[4] dump function.
 */
static void hex_dump(u8 *ptr, unsigned int length) {
        int i;

        for (i = 0 ; i < length ; i++){
                printk("%02x ", ptr[i]);
        }
        printk("\n");
}


/*
 * Handle an I/O request.
 */
static void sbd_enc_transfer(struct sbd_enc_device *dev, sector_t sector,
	unsigned long nsect, char *buffer, int write) {

	unsigned long offset = sector * logical_block_size;
	unsigned long nbytes = nsect * logical_block_size;

	u8 *hex_str, *hex_buf, *hex_disk;
	unsigned int i;
 
	hex_disk = dev->data + offset;
	hex_buf = buffer;
	printk("sbd_enc: enc_key > %s\n",key);

	if ((offset + nbytes) > dev->size) {
		printk (KERN_NOTICE "sbd_enc: Beyond-end write (%ld %ld)\n", offset, nbytes);
		return;
	}
	if (write) {
		printk("sbd_enc: Begin write/encryption\n");

		/*
		 * encrypts only one block at a time to new data size
		 * Mcgrath hint during 5/18/17 lecture for block encryption was helpful.
		 */

		for(i = 0; i < nbytes; i += crypto_cipher_blocksize(tfm)){
			crypto_cipher_encrypt_one(tfm, hex_disk + i, hex_buf + i);
		}

		printk("sbd_enc: printing original hex data\n");
		hex_str = buffer;
		hex_dump(hex_str,15);

		printk("sbd_enc: printing encrypted hex data\n");
		hex_str = dev->data + offset;
		hex_str = dev->data + offset;
		hex_dump(hex_str,15);

	} else {
		printk("sbd_enc: Begin read/decryption\n");

		/* decrypts only one block at a time to full read data size */
		for(i = 0; i < nbytes; i += crypto_cipher_blocksize(tfm)){
			crypto_cipher_decrypt_one(tfm, hex_buf + i,hex_disk + i);
		}

		printk("sbd_enc: printing original hex data\n");
		hex_str = dev->data + offset;
		hex_dump(hex_str,15);

		printk("sbd_enc: printing decrypted hex data\n");
		hex_str = buffer;
		hex_dump(hex_str,15);
	}
}

static void sbd_enc_request(struct request_queue *q) {
	struct request *req;

	req = blk_fetch_request(q);
	while (req != NULL) {
		// blk_fs_request() was removed in 2.6.36 - many thanks to
		// Christian Paro for the heads up and fix...
		//if (!blk_fs_request(req)) {
		if (req == NULL || (req->cmd_type != REQ_TYPE_FS)) {
			printk (KERN_NOTICE "Skip non-CMD request\n");
			__blk_end_request_all(req, -EIO);
			continue;
		}

		/** 
		 * ref[4] (Sarge comment) makes code usuable for older Linux 3.14
		 */
		sbd_enc_transfer(&Device, blk_rq_pos(req), blk_rq_cur_sectors(req),
			bio_data(req->bio), rq_data_dir(req));

		if ( ! __blk_end_request_cur(req, 0) ) {
			req = blk_fetch_request(q);
		}
	}
}

/*
 * The HDIO_GETGEO ioctl is handled in blkdev_ioctl(), which
 * calls this. We need to implement getgeo, since we can't
 * use tools such as fdisk to partition the drive otherwise.
 */
int sbd_enc_getgeo(struct block_device * block_device, struct hd_geometry * geo) {
	long size;

	/* We have no real geometry, of course, so make something up. */
	size = Device.size * (logical_block_size / KERNEL_SECTOR_SIZE);
	geo->cylinders = (size & ~0x3f) >> 6;
	geo->heads = 4;
	geo->sectors = 16;
	geo->start = 0;
	return 0;
}

/*
 * The device operations structure.
 */
static struct block_device_operations sbd_enc_ops = {
		.owner  = THIS_MODULE,
		.getgeo = sbd_enc_getgeo
};

static int __init sbd_enc_init(void) {

	printk("sbd_enc: block device initializing.\n");

	/*
	 * Set up our internal device.
	 */
	Device.size = nsectors * logical_block_size;
	spin_lock_init(&Device.lock);
	Device.data = vmalloc(Device.size);
	if (Device.data == NULL)
		return -ENOMEM;
	/*
	 * Get a request queue.
	 */
	Queue = blk_init_queue(sbd_enc_request, &Device.lock);
	if (Queue == NULL)
		goto out;
	blk_queue_logical_block_size(Queue, logical_block_size);
	/*
	 * Get registered.
	 */
	major_num = register_blkdev(major_num, "sbd_enc");
	if (major_num < 0) {
		printk(KERN_WARNING "sbd_enc: unable to get major number\n");
		goto out;
	}

	/* allocing cipher */
	tfm = crypto_alloc_cipher("aes",0,0);
	if(!tfm){
		printk(KERN_WARNING "sbd_enc: unable to alloc crypto.\n");
		goto out;
	}

	printk("sbd_enc: enc_key > %s\n",key);
	crypto_cipher_setkey(tfm,key,strlen(key));

	/*
	 * And the gendisk structure.
	 */
	Device.gd = alloc_disk(16);
	if (!Device.gd)
		goto out_unregister;
	Device.gd->major = major_num;
	Device.gd->first_minor = 0;
	Device.gd->fops = &sbd_enc_ops;
	Device.gd->private_data = &Device;
	strcpy(Device.gd->disk_name, "sbd_enc0");
	set_capacity(Device.gd, nsectors);
	Device.gd->queue = Queue;
	add_disk(Device.gd);

	printk("sbd_enc: block device initialized.\n");

	return 0;

out_unregister:
	unregister_blkdev(major_num, "sbd_enc");
out:
	vfree(Device.data);
	return -ENOMEM;
}

static void __exit sbd_enc_exit(void)
{
	printk("sbd_enc: freeing block device.\n");

	/* Freeing crypto */
	crypto_free_cipher(tfm);

	del_gendisk(Device.gd);
	put_disk(Device.gd);
	unregister_blkdev(major_num, "sbd_enc");
	blk_cleanup_queue(Queue);

	printk("sbd_enc: freed block device.\n");
}

module_init(sbd_enc_init);
module_exit(sbd_enc_exit);

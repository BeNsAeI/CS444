#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/init.h>

#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/errno.h>
#include <linux/types.h>
#include <linux/vmalloc.h>
#include <linux/genhd.h>
#include <linux/blkdev.h>
#include <linux/hdreg.h>

#include <linux/crypto.h>

MODULE_LICENSE("Dual BSD/GPL");
static char *Version = "1.4";


static struct crypto_cipher *cipher;

static int major_num = 0;
module_param(major_num, int, 0);
static int logical_block_size = 512;
module_param(logical_block_size, int, 0);
static int nsectors = 1024;
module_param(nsectors, int, 0);

#define KEY_SZ 8
static char* key = "privateKey";
module_param(key, charp, 0);
#define KERNEL_SECTOR_SIZE 512

static struct request_queue *Queue;

static struct rd2_device {
        unsigned long size;
        spinlock_t lock;
        u8 *data;
	struct gendisk *gd;
} Device;

static void rd2_transfer(struct rd2_device *dev, sector_t sector,
	unsigned long nsect, char *buffer, int write) {
	unsigned long offset = sector * logical_block_size;
	unsigned long nbytes = nsect * logical_block_size;
	unsigned int i;
 
	//printk("[KERNEL DEBUG] rd2: transfer_key > %s\n",key);
	
	if ((offset + nbytes) > dev->size) {
		printk (KERN_NOTICE "[KERNEL DEBUG] rd2(%s): Beyond-end write (%ld %ld)\n", Version, offset, nbytes);
		return;
	}
	
	crypto_cipher_clear_flags(cipher, ~0);
	crypto_cipher_setkey(cipher, key, strlen(key));

	if(write) {
		for(i = 0; i < nbytes; i += crypto_cipher_blocksize(cipher)) {
			memset(dev->data + offset + i, 0, crypto_cipher_blocksize(cipher));
			crypto_cipher_encrypt_one(cipher, dev->data + offset + i, buffer + i);
		}
	} else {
		for(i = 0; i < nbytes; i += crypto_cipher_blocksize(cipher)) {
			crypto_cipher_decrypt_one(cipher, buffer + i, dev->data + offset + i);
		}
	}
}

static void rd2_request(struct request_queue *q) {
	struct request *req;

	req = blk_fetch_request(q);
	while (req != NULL) {
		if (req == NULL || (req->cmd_type != REQ_TYPE_FS)) {
			__blk_end_request_all(req, -EIO);
			continue;
		}
		rd2_transfer(&Device, blk_rq_pos(req), blk_rq_cur_sectors(req),
			bio_data(req->bio), rq_data_dir(req));

		if ( ! __blk_end_request_cur(req, 0) ) {
			req = blk_fetch_request(q);
		}
	}
}

int rd2_getgeo(struct block_device * block_device, struct hd_geometry * geo) {
	long size;

	size = Device.size * (logical_block_size / KERNEL_SECTOR_SIZE);
	geo->cylinders = (size & ~0x3f) >> 6;
	geo->heads = 4;
	geo->sectors = 16;
	geo->start = 0;
	return 0;
}

static struct block_device_operations rd2_ops = {
		.owner  = THIS_MODULE,
		.getgeo = rd2_getgeo
};

static int __init rd2_init(void) {
	Device.size = nsectors * logical_block_size;
	spin_lock_init(&Device.lock);
	Device.data = vmalloc(Device.size);
	if (Device.data == NULL)
		return -ENOMEM;
	/*
	 * Get a request queue.
	 */
	Queue = blk_init_queue(rd2_request, &Device.lock);
	if (Queue == NULL)
		goto out;
	blk_queue_logical_block_size(Queue, logical_block_size);
	/*
	 * Get registered.
	 */
	major_num = register_blkdev(major_num, "rd2");
	if (major_num < 0) {
		goto out;
	}

	/* allocing cipher */
	cipher = crypto_alloc_cipher("aes",0,0);
	if(!cipher){
		goto out;
	}

	printk("[KERNEL DEBUG] rd2: enc_key > %s\n",key);
	crypto_cipher_setkey(cipher,key,strlen(key));

	/*
	 * And the gendisk structure.
	 */
	Device.gd = alloc_disk(16);
	if (!Device.gd)
		goto out_unregister;
	Device.gd->major = major_num;
	Device.gd->first_minor = 0;
	Device.gd->fops = &rd2_ops;
	Device.gd->private_data = &Device;
	strcpy(Device.gd->disk_name, "rd20");
	set_capacity(Device.gd, nsectors);
	Device.gd->queue = Queue;
	add_disk(Device.gd);
	return 0;

out_unregister:
	unregister_blkdev(major_num, "rd2");
out:
	vfree(Device.data);
	return -ENOMEM;
}

static void __exit rd2_exit(void){

	crypto_free_cipher(cipher);

	del_gendisk(Device.gd);
	put_disk(Device.gd);
	unregister_blkdev(major_num, "rd2");
	blk_cleanup_queue(Queue);
}

module_init(rd2_init);
module_exit(rd2_exit);

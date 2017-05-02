#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x43804739, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe7665d89, __VMLINUX_SYMBOL_STR(blk_mq_free_single_hw_queue) },
	{ 0xfe32e790, __VMLINUX_SYMBOL_STR(blk_mq_alloc_single_hw_queue) },
	{ 0xdcb95300, __VMLINUX_SYMBOL_STR(blk_mq_map_queue) },
	{ 0xb495fd54, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xf5b4a06, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xa21c7908, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x3575a173, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x6bd10e20, __VMLINUX_SYMBOL_STR(blk_queue_alignment_offset) },
	{ 0x3a725ec4, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0xd3cf9783, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xb31e52e0, __VMLINUX_SYMBOL_STR(set_disk_ro) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xed0d3520, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xade5819a, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x73880ed, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0xdab92ff0, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xc077e3b6, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x1562fb7a, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0xc45da63e, __VMLINUX_SYMBOL_STR(blk_mq_init_commands) },
	{ 0x83deecb7, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0x4b719758, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x44e6ecc8, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0x5087c92a, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5635853d, __VMLINUX_SYMBOL_STR(scsi_cmd_blk_ioctl) },
	{ 0x23153566, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x5f60907b, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x711a28c0, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0xaa192a57, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0xd2c4552e, __VMLINUX_SYMBOL_STR(blk_make_request) },
	{ 0xd370ced5, __VMLINUX_SYMBOL_STR(bio_map_kern) },
	{ 0xa2ba4b0, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x304e69d1, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x8e1d0b39, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x3c9d1211, __VMLINUX_SYMBOL_STR(string_get_size) },
	{ 0x7fec6204, __VMLINUX_SYMBOL_STR(blk_mq_stop_hw_queue) },
	{ 0x6cd6cdaf, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x16e47a24, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0x2812d0bc, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xf30c33eb, __VMLINUX_SYMBOL_STR(blk_mq_end_io_partial) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xa9d8f55e, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xba0dccd0, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xc1cbf392, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x720442f4, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4b3004b3, __VMLINUX_SYMBOL_STR(blk_mq_stop_hw_queues) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7cea28c7, __VMLINUX_SYMBOL_STR(blk_mq_start_stopped_hw_queues) },
	{ 0x6eff5567, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0xf764ac1c, __VMLINUX_SYMBOL_STR(virtqueue_is_broken) },
	{ 0x80db3c00, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0xda9ebaef, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0x69a159ca, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000002v*");

MODULE_INFO(srcversion, "88515C5E2DD74FE7F5CF36A");

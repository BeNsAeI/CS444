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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x45c92723, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x2a07479c, __VMLINUX_SYMBOL_STR(memstick_unregister_driver) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xf57085dc, __VMLINUX_SYMBOL_STR(memstick_register_driver) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xade5819a, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xd3cf9783, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x73880ed, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0x1562fb7a, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0xdab92ff0, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xc077e3b6, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x4ae04c08, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0x602b88ce, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x4b719758, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x4fd5cfb9, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xab30892f, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb2d4e0ab, __VMLINUX_SYMBOL_STR(memstick_set_rw_addr) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xbb0e6cdb, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x51b9a7be, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xc1cbf392, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x720442f4, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xa1dcfab0, __VMLINUX_SYMBOL_STR(blk_dump_rq_flags) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x5d820a02, __VMLINUX_SYMBOL_STR(memstick_init_req_sg) },
	{ 0x84cb22e9, __VMLINUX_SYMBOL_STR(__blk_end_request) },
	{ 0x40256835, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x72ef49e9, __VMLINUX_SYMBOL_STR(__blk_end_request_cur) },
	{ 0x16e47a24, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0x73926539, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xe322d9f, __VMLINUX_SYMBOL_STR(memstick_new_req) },
	{ 0xdc07e67e, __VMLINUX_SYMBOL_STR(memstick_init_req) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xba0dccd0, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xcaef1b77, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcd4b1ea0, __VMLINUX_SYMBOL_STR(blk_stop_queue) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc66f4fbf, __VMLINUX_SYMBOL_STR(blk_start_queue) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=memstick";


MODULE_INFO(srcversion, "82F854708258B6CD99FBE03");

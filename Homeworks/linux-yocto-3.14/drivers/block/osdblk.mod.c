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
	{ 0x5bc3cb08, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xc34ba211, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xade5819a, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x5087c92a, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0x4ae04c08, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0xaec95e01, __VMLINUX_SYMBOL_STR(blk_queue_start_tag) },
	{ 0xdf7a878e, __VMLINUX_SYMBOL_STR(blk_queue_stack_limits) },
	{ 0xeac791d4, __VMLINUX_SYMBOL_STR(blk_queue_init_tags) },
	{ 0x602b88ce, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x4b719758, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xdd7b9fa, __VMLINUX_SYMBOL_STR(osd_req_decode_get_attr_list) },
	{ 0xf5929a0d, __VMLINUX_SYMBOL_STR(osd_execute_request) },
	{ 0x681760b1, __VMLINUX_SYMBOL_STR(osd_req_add_get_attr_list) },
	{ 0x84bb3a21, __VMLINUX_SYMBOL_STR(osd_req_get_attributes) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xc17edb1, __VMLINUX_SYMBOL_STR(osd_sec_init_nosec_doall_caps) },
	{ 0x54709b1, __VMLINUX_SYMBOL_STR(osduld_path_lookup) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xbb47f84c, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd89b8807, __VMLINUX_SYMBOL_STR(osd_req_read) },
	{ 0xe24b6ff3, __VMLINUX_SYMBOL_STR(osd_execute_request_async) },
	{ 0x564e248, __VMLINUX_SYMBOL_STR(blk_requeue_request) },
	{ 0x94f80df0, __VMLINUX_SYMBOL_STR(osd_finalize_request) },
	{ 0x653fbfcd, __VMLINUX_SYMBOL_STR(osd_req_flush_object) },
	{ 0x5f60907b, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xbd567ad6, __VMLINUX_SYMBOL_STR(osd_req_write) },
	{ 0xed3c100c, __VMLINUX_SYMBOL_STR(osd_start_request) },
	{ 0xff0582f8, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0xc16c3873, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0x73926539, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x720442f4, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x725c9955, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xb8d25732, __VMLINUX_SYMBOL_STR(osduld_put_device) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xba0dccd0, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xc1cbf392, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xbb0e6cdb, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0xef497a5d, __VMLINUX_SYMBOL_STR(osd_end_request) },
	{ 0x8b60a8a6, __VMLINUX_SYMBOL_STR(osd_req_decode_sense_full) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd,osd";


MODULE_INFO(srcversion, "CBF1DFF9C61C7A8C5A73439");

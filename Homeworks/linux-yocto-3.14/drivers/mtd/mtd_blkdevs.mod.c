#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x602b88ce, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x4b719758, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xc1cbf392, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xc0f76e2e, __VMLINUX_SYMBOL_STR(mtd_table_mutex) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x181ec782, __VMLINUX_SYMBOL_STR(__put_mtd_device) },
	{ 0xc66f4fbf, __VMLINUX_SYMBOL_STR(blk_start_queue) },
	{ 0x1fbe0ba6, __VMLINUX_SYMBOL_STR(__get_mtd_device) },
	{ 0x51b9a7be, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xbecbf4d3, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xab30892f, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x720442f4, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xf8a13e82, __VMLINUX_SYMBOL_STR(register_mtd_user) },
	{ 0xa9999cf4, __VMLINUX_SYMBOL_STR(__mtd_next_device) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xb6f2ba3e, __VMLINUX_SYMBOL_STR(unregister_mtd_user) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x725c9955, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xba0dccd0, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x72ef49e9, __VMLINUX_SYMBOL_STR(__blk_end_request_cur) },
	{ 0x73926539, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xbb0e6cdb, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2bd41caa, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xade5819a, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd3cf9783, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xb31e52e0, __VMLINUX_SYMBOL_STR(set_disk_ro) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D2D900621F4ABB26D096B9B");

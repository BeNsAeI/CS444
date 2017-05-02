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
	{ 0x11265579, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0x16acb3b5, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x312ca88d, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xa34186c2, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf004dc6, __VMLINUX_SYMBOL_STR(md_run) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{        0, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xc16506fa, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0xc2dcccf7, __VMLINUX_SYMBOL_STR(raid5_set_cache_size) },
	{ 0xcb735e6f, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x9a330154, __VMLINUX_SYMBOL_STR(md_rdev_init) },
	{ 0x1c7b100f, __VMLINUX_SYMBOL_STR(mddev_init) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0xc14655ad, __VMLINUX_SYMBOL_STR(md_raid1_congested) },
	{ 0x481ce73d, __VMLINUX_SYMBOL_STR(md_raid10_congested) },
	{ 0xf2d5959e, __VMLINUX_SYMBOL_STR(md_raid5_congested) },
	{ 0x982519e2, __VMLINUX_SYMBOL_STR(md_stop) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa5799436, __VMLINUX_SYMBOL_STR(md_rdev_clear) },
	{ 0x9e01ca2d, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x36207c3c, __VMLINUX_SYMBOL_STR(md_stop_writes) },
	{ 0x62ee0268, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x9a488182, __VMLINUX_SYMBOL_STR(bitmap_load) },
	{ 0x819d44eb, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x2fc19de2, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2061eb0a, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x367109d2, __VMLINUX_SYMBOL_STR(md_reap_sync_thread) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x221e9a04, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0x59aafbcb, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,raid456,raid1,raid10";


MODULE_INFO(srcversion, "3C6378BDAEE297BF292E071");

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
	{ 0x3eb0f7b5, __VMLINUX_SYMBOL_STR(fuse_file_poll) },
	{ 0x79fb0082, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x1c520f39, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x5bc3cb08, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x827716a7, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x2bb672f0, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xcd57f25f, __VMLINUX_SYMBOL_STR(fuse_dev_operations) },
	{ 0xce3d4fc7, __VMLINUX_SYMBOL_STR(fuse_put_request) },
	{ 0x4be05c16, __VMLINUX_SYMBOL_STR(fuse_request_send_background) },
	{        0, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x4984a5fe, __VMLINUX_SYMBOL_STR(fuse_get_req_for_background) },
	{ 0xf7932696, __VMLINUX_SYMBOL_STR(fuse_conn_init) },
	{ 0xbcf9c9e1, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xc448ec4f, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x8b60ab57, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4aff7de5, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x95bb7165, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xbaaea7eb, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xca4e992c, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xea248cef, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb81481de, __VMLINUX_SYMBOL_STR(fuse_conn_kill) },
	{ 0x3cf2e246, __VMLINUX_SYMBOL_STR(fuse_direct_io) },
	{ 0x550e6003, __VMLINUX_SYMBOL_STR(fuse_do_ioctl) },
	{ 0xf31c0f86, __VMLINUX_SYMBOL_STR(fuse_do_open) },
	{ 0xb167c92c, __VMLINUX_SYMBOL_STR(fuse_conn_get) },
	{ 0x67b741f4, __VMLINUX_SYMBOL_STR(fuse_conn_put) },
	{ 0x3e5c5705, __VMLINUX_SYMBOL_STR(fuse_sync_release) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xc341fcd2, __VMLINUX_SYMBOL_STR(fuse_dev_release) },
	{ 0xfebe26c4, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xcdbd6a0f, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x326ad2ae, __VMLINUX_SYMBOL_STR(fuse_abort_conn) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fuse";


MODULE_INFO(srcversion, "C65F425B9B4B7AFF9188541");

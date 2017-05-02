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
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7da4fa69, __VMLINUX_SYMBOL_STR(usb_stor_set_xfer_buf) },
	{ 0x40012c09, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_buf) },
	{ 0x189976d7, __VMLINUX_SYMBOL_STR(usb_stor_access_xfer_buf) },
	{ 0x142d14ac, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0xcbc97b6, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0xc7b36047, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xcffdaa02, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0xb34b40db, __VMLINUX_SYMBOL_STR(fill_inquiry_response) },
	{ 0x6a41fcd8, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0xa0824de4, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0x68751ec3, __VMLINUX_SYMBOL_STR(usb_stor_ctrl_transfer) },
	{ 0xe5aa7624, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0x2e600c10, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc1cc978c, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0x457c7335, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xa1828548, __VMLINUX_SYMBOL_STR(usb_stor_Bulk_reset) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage";

MODULE_ALIAS("usb:v05DCp0001d000[0-1]dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F30FFACFC72F2F5E4136BA1");

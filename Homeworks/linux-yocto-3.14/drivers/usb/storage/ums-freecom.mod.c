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
	{ 0x40012c09, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_buf) },
	{ 0x142d14ac, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0x58382619, __VMLINUX_SYMBOL_STR(usb_stor_control_msg) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xcbc97b6, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0xc7b36047, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcffdaa02, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0x6a41fcd8, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0xa0824de4, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0xe5aa7624, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0x2e600c10, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc1cc978c, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0x457c7335, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xb41373e6, __VMLINUX_SYMBOL_STR(usb_stor_bulk_srb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage";

MODULE_ALIAS("usb:v07ABpFC01d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B29F1BB20C3EBD002A92940");

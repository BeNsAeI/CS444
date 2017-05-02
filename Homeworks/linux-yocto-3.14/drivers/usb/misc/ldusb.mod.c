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
	{ 0x2606504f, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xc7b36047, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x457c7335, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x9cf60c6a, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x7dcb1e08, __VMLINUX_SYMBOL_STR(usb_register_dev) },
	{ 0x1343983f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x80c3c5f, __VMLINUX_SYMBOL_STR(usb_deregister_dev) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfed40a7c, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x6e860b79, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xa48a41f5, __VMLINUX_SYMBOL_STR(usb_find_interface) },
	{ 0xc35f03f9, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd139f368, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xfa2aa703, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x11e519bc, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0F11p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p1011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p1021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p1031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p1032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p1033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p1035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p1038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p1081d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p1090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p10A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p10B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p1100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p1101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p1210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p2010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p2020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p2030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p2040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p2050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p2051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p2060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p2070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p2080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p2090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F11p20A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F7p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F7p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F7p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F7p0006d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A9A93F77ADB9FAC11EA84EA");

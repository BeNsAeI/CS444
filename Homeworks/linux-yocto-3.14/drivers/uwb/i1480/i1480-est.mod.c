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
	{ 0xfc02440, __VMLINUX_SYMBOL_STR(uwb_est_unregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x816b9e92, __VMLINUX_SYMBOL_STR(uwb_est_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uwb";

MODULE_ALIAS("usb:v8086pDF3Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0C3Bd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E005F1CC12FB28EA9FFDE11");

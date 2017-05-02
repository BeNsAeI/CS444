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
	{ 0x5301e2a5, __VMLINUX_SYMBOL_STR(usb_serial_generic_unthrottle) },
	{ 0x8ae05583, __VMLINUX_SYMBOL_STR(usb_serial_generic_throttle) },
	{ 0x8554eddb, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0xa1d1c8eb, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa06f494d, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0x8d5b6832, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v084Fp0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B415093243306BD2562E8B4");

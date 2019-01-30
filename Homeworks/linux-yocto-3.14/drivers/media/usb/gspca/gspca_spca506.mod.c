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

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main,videodev";

MODULE_ALIAS("usb:v06E1pA190d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0734p043Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v99FAp8988d*dc*dsc*dp*ic*isc*ip*in*");

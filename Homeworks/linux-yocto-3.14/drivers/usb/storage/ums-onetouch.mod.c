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
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x142d14ac, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0x6e860b79, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xcbc97b6, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0x81b10bc2, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc7b36047, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xcffdaa02, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0x57d542cf, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x11e519bc, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xe8ffc674, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x6a41fcd8, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0xa0824de4, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0xe5aa7624, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0xc00d2030, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x2e600c10, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc1cc978c, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0xb4a806ac, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x457c7335, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xeb63674c, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xfed40a7c, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1343983f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x7c0c0c6b, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage";

MODULE_ALIAS("usb:v0D49p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D49p7010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2DE65CF27872D8B33291D07");

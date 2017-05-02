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
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x9bc8057e, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0xde294740, __VMLINUX_SYMBOL_STR(fb_find_mode) },
	{ 0x7a890c8, __VMLINUX_SYMBOL_STR(fb_alloc_cmap) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x2e69f650, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x2b49dcd4, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7a21c0a8, __VMLINUX_SYMBOL_STR(cfb_copyarea) },
	{ 0x72d412be, __VMLINUX_SYMBOL_STR(cfb_fillrect) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x16a6b92e, __VMLINUX_SYMBOL_STR(cfb_imageblit) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x735a0bd5, __VMLINUX_SYMBOL_STR(native_io_delay) },
	{ 0x70c53eca, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x9d6e60b0, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x98b71c6, __VMLINUX_SYMBOL_STR(fb_dealloc_cmap) },
	{ 0xa7a9615b, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001013d000000ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d00001202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d00000038sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000D6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5AE1BCC4831D59DC0E5158D");

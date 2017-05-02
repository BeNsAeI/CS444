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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9d6e60b0, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x72bf2140, __VMLINUX_SYMBOL_STR(mtrr_add) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x70c53eca, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x72d412be, __VMLINUX_SYMBOL_STR(cfb_fillrect) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6248b0fa, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x16a6b92e, __VMLINUX_SYMBOL_STR(cfb_imageblit) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7a890c8, __VMLINUX_SYMBOL_STR(fb_alloc_cmap) },
	{ 0x9bc8057e, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6b72277b, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0x686de290, __VMLINUX_SYMBOL_STR(restore_vga) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x1bdc381d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xe7a2620e, __VMLINUX_SYMBOL_STR(save_vga) },
	{ 0xfcfa03ff, __VMLINUX_SYMBOL_STR(fb_videomode_to_modelist) },
	{ 0x10674cfb, __VMLINUX_SYMBOL_STR(fb_get_mode) },
	{ 0xff9ca065, __VMLINUX_SYMBOL_STR(fb_edid_to_monspecs) },
	{ 0x1dc36131, __VMLINUX_SYMBOL_STR(fb_destroy_modedb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb1cf44df, __VMLINUX_SYMBOL_STR(fb_find_best_mode) },
	{ 0x2b49dcd4, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e69f650, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x272d394e, __VMLINUX_SYMBOL_STR(mtrr_del) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x89d5538d, __VMLINUX_SYMBOL_STR(fb_pad_aligned_buffer) },
	{ 0x7a21c0a8, __VMLINUX_SYMBOL_STR(cfb_copyarea) },
	{ 0x117c823b, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xadba87ec, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x4b91a93d, __VMLINUX_SYMBOL_STR(fb_validate_mode) },
	{ 0xa7a9615b, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vgastate";

MODULE_ALIAS("pci:v000012D2d00000018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000002Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000002Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000110sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000113sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000151sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000152sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000153sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000171sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000172sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000174sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000175sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000176sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000178sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000179sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000017Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000017Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000017Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000251sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000253sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000258sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000259sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000025Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000329sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0AE2A0046F679DCB27046C5");

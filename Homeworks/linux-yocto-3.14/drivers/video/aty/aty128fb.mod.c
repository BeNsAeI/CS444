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
	{ 0x16a6b92e, __VMLINUX_SYMBOL_STR(cfb_imageblit) },
	{ 0x7a21c0a8, __VMLINUX_SYMBOL_STR(cfb_copyarea) },
	{ 0x72d412be, __VMLINUX_SYMBOL_STR(cfb_fillrect) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x5a5536c2, __VMLINUX_SYMBOL_STR(param_ops_invbool) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x8b1d234a, __VMLINUX_SYMBOL_STR(fb_set_suspend) },
	{ 0x70b2b66, __VMLINUX_SYMBOL_STR(fb_set_cmap) },
	{ 0xa22ee6a6, __VMLINUX_SYMBOL_STR(fb_pan_display) },
	{ 0xc631580a, __VMLINUX_SYMBOL_STR(console_unlock) },
	{ 0xfbaaf01e, __VMLINUX_SYMBOL_STR(console_lock) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x72bf2140, __VMLINUX_SYMBOL_STR(mtrr_add) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x5a1c4daa, __VMLINUX_SYMBOL_STR(pci_unmap_rom) },
	{ 0xc1c7063e, __VMLINUX_SYMBOL_STR(pci_map_rom) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x1aca5c53, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x2b49dcd4, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x9bc8057e, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x7a890c8, __VMLINUX_SYMBOL_STR(fb_alloc_cmap) },
	{ 0xde294740, __VMLINUX_SYMBOL_STR(fb_find_mode) },
	{ 0x272d394e, __VMLINUX_SYMBOL_STR(mtrr_del) },
	{ 0x9d6e60b0, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xadba87ec, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0xa7a9615b, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001002d00004C45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004D46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004D4Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005045sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005046sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005047sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005048sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005049sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000504Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000504Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000504Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000504Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000504Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000504Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005053sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005057sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005245sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005246sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005247sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000524Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000524Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005345sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005346sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005347sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005348sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000534Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000534Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000534Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000534Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005446sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000544Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005452sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005453sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005454sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005455sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8C0D6684B69041254B4AD43");

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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9d6e60b0, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x487f831, __VMLINUX_SYMBOL_STR(fb_find_best_display) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x72bf2140, __VMLINUX_SYMBOL_STR(mtrr_add) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x70c53eca, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7ef148ae, __VMLINUX_SYMBOL_STR(fb_firmware_edid) },
	{ 0x8b1d234a, __VMLINUX_SYMBOL_STR(fb_set_suspend) },
	{ 0xe3d6f284, __VMLINUX_SYMBOL_STR(fb_find_mode_cvt) },
	{ 0xc631580a, __VMLINUX_SYMBOL_STR(console_unlock) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xa34a77f7, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x16a6b92e, __VMLINUX_SYMBOL_STR(cfb_imageblit) },
	{ 0xab781570, __VMLINUX_SYMBOL_STR(fb_get_options) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7a890c8, __VMLINUX_SYMBOL_STR(fb_alloc_cmap) },
	{ 0x9bc8057e, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0xfbaaf01e, __VMLINUX_SYMBOL_STR(console_lock) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x686de290, __VMLINUX_SYMBOL_STR(restore_vga) },
	{ 0x83faafd6, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xde294740, __VMLINUX_SYMBOL_STR(fb_find_mode) },
	{ 0xe7a2620e, __VMLINUX_SYMBOL_STR(save_vga) },
	{ 0xfcfa03ff, __VMLINUX_SYMBOL_STR(fb_videomode_to_modelist) },
	{ 0x10674cfb, __VMLINUX_SYMBOL_STR(fb_get_mode) },
	{ 0xff9ca065, __VMLINUX_SYMBOL_STR(fb_edid_to_monspecs) },
	{ 0x1dc36131, __VMLINUX_SYMBOL_STR(fb_destroy_modedb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb1cf44df, __VMLINUX_SYMBOL_STR(fb_find_best_mode) },
	{ 0x5fe1e065, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x2b49dcd4, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e69f650, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x70b2b66, __VMLINUX_SYMBOL_STR(fb_set_cmap) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x272d394e, __VMLINUX_SYMBOL_STR(mtrr_del) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1537dea5, __VMLINUX_SYMBOL_STR(i2c_bit_add_bus) },
	{ 0xff099500, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x6e258f3b, __VMLINUX_SYMBOL_STR(fb_ddc_read) },
	{ 0x4b91a93d, __VMLINUX_SYMBOL_STR(fb_validate_mode) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xa7a9615b, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vgastate,i2c-core,i2c-algo-bit,fb_ddc";

MODULE_ALIAS("pci:v00005333d00008C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00009102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C13sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D02sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D04sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2629FD917D135FAB0978F30");

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
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xaea976a8, __VMLINUX_SYMBOL_STR(acpi_check_resource_conflict) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xca7b7a8, __VMLINUX_SYMBOL_STR(acpi_check_region) },
	{ 0x8e1d0b39, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x892ed698, __VMLINUX_SYMBOL_STR(mfd_add_devices) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x25ca2fcf, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x22c2beda, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xad84b14f, __VMLINUX_SYMBOL_STR(mfd_remove_devices) },
	{ 0xa67f004b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mfd-core";

MODULE_ALIAS("pci:v00008086d00002410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000244Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002480sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000248Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002450sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002641sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002642sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002670sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002671sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002672sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002673sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002674sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002675sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002676sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002677sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002678sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002679sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002810sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002812sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002814sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002815sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002811sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002918sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002916sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002912sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002914sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002919sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002917sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A16sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A1Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B02sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B07sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B0Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B0Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B16sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005031sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C49sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C4Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C4Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C4Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C4Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C4Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C4Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C56sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C57sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C59sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C5Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C5Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C5Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C5Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C5Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C5Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E49sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E4Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E4Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E4Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E4Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E4Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E4Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E56sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E57sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E59sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E5Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E5Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E5Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E5Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E5Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E5Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C49sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C4Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C4Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C4Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C4Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C4Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C4Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C56sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C57sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C59sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C5Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C5Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C5Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C5Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C5Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C5Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D49sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D4Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D4Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D4Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D4Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D4Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D4Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D56sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D57sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D59sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D5Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D5Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D5Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D5Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D5Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D5Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F39sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F3Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CC1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CC3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CC5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CC7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CC9sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A3314C8588F6410EA0DCE55");

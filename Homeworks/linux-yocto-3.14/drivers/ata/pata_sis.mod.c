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
	{ 0x22c2beda, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xfe8f2038, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xa0c7926c, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x16331fb5, __VMLINUX_SYMBOL_STR(pci_get_slot) },
	{ 0x63205de1, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0x94a68723, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0xc2143bab, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x6248b0fa, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0xafc483fa, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0x69e9a2cb, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x66c20635, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_init_one) },
	{ 0xae61b618, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xc33ee883, __VMLINUX_SYMBOL_STR(ata_sff_prereset) },
	{ 0xe8cc7217, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xd946e67e, __VMLINUX_SYMBOL_STR(ata_cable_40wire) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1bdc381d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x9368afc2, __VMLINUX_SYMBOL_STR(pci_test_config_bits) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xd038e29a, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa67f004b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x5f60c44f, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x343cbd66, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xd657d13, __VMLINUX_SYMBOL_STR(ata_bmdma_port_ops) },
	{ 0x117c823b, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x448e63c5, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0xb734248b, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xd6d7ccf8, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001039d00005513sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00005518sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00001180sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "18326C16BE0811078F116B2");

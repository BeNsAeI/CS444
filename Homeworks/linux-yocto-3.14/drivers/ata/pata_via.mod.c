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
	{ 0x448e63c5, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0x63205de1, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0xb734248b, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0x94a68723, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x69e9a2cb, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0xc2143bab, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0xd6d7ccf8, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0xd657d13, __VMLINUX_SYMBOL_STR(ata_bmdma_port_ops) },
	{ 0x800613b1, __VMLINUX_SYMBOL_STR(ata_sff_data_xfer_noirq) },
	{ 0xe8cc7217, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xa0c7926c, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0xf6e874f5, __VMLINUX_SYMBOL_STR(ata_timing_merge) },
	{ 0x2267f1a8, __VMLINUX_SYMBOL_STR(ata_timing_compute) },
	{ 0x19739738, __VMLINUX_SYMBOL_STR(ata_dev_pair) },
	{ 0xd75e4c4b, __VMLINUX_SYMBOL_STR(ata_acpi_cbl_80wire) },
	{ 0xb6aeb661, __VMLINUX_SYMBOL_STR(ata_id_c_string) },
	{ 0x9d2948f, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0xc33ee883, __VMLINUX_SYMBOL_STR(ata_sff_prereset) },
	{ 0x9368afc2, __VMLINUX_SYMBOL_STR(pci_test_config_bits) },
	{ 0x25ca2fcf, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x16c66ed7, __VMLINUX_SYMBOL_STR(ata_bmdma_port_start) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x343cbd66, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0x6d74fb80, __VMLINUX_SYMBOL_STR(ata_dummy_port_info) },
	{ 0x66c20635, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_init_one) },
	{ 0x117c823b, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x5f60c44f, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xfe8f2038, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xafc483fa, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xd038e29a, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xa67f004b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xae61b618, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x22c2beda, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001106d00000415sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000571sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000581sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00001571sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003164sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d0000C409sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5AF226B367E4CDDE8469BEF");

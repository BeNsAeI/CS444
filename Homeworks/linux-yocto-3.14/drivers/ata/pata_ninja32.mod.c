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
	{ 0x419c0c73, __VMLINUX_SYMBOL_STR(ata_sff_data_xfer32) },
	{ 0xd946e67e, __VMLINUX_SYMBOL_STR(ata_cable_40wire) },
	{ 0xe8cc7217, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xa0c7926c, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x2cccfc8c, __VMLINUX_SYMBOL_STR(pcim_pin_device) },
	{ 0xbecf72aa, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0xe818b32b, __VMLINUX_SYMBOL_STR(ata_bmdma_interrupt) },
	{ 0x73a48b4a, __VMLINUX_SYMBOL_STR(ata_sff_std_ports) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x63988ee5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xae49d36f, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0xe2796f6d, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xfe8f2038, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x25c0b9db, __VMLINUX_SYMBOL_STR(ata_host_alloc) },
	{ 0xacb92391, __VMLINUX_SYMBOL_STR(ata_sff_dev_select) },
	{ 0xafc483fa, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xd038e29a, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010FCd00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001145d00008008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001145d0000F008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001145d0000F021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001145d0000F024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001145d0000F02Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "73637917CC8FF1CD607879B");

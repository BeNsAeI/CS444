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
	{ 0x739d9e3f, __VMLINUX_SYMBOL_STR(ata_cable_unknown) },
	{ 0x44480a22, __VMLINUX_SYMBOL_STR(ata_pci_device_resume) },
	{ 0xe8cc7217, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xa0c7926c, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x40af0dec, __VMLINUX_SYMBOL_STR(ata_xfer_mode2mask) },
	{ 0x43f56e82, __VMLINUX_SYMBOL_STR(ata_xfer_mode2shift) },
	{ 0x707ff1bb, __VMLINUX_SYMBOL_STR(ata_xfer_mask2mode) },
	{ 0x9d2948f, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0xc48b7ccf, __VMLINUX_SYMBOL_STR(ata_mode_string) },
	{ 0xf9ca3160, __VMLINUX_SYMBOL_STR(ata_id_xfermask) },
	{ 0xbd1257d4, __VMLINUX_SYMBOL_STR(ata_dev_next) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x6248b0fa, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0xc0179c79, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_clear_simplex) },
	{ 0x2cccfc8c, __VMLINUX_SYMBOL_STR(pcim_pin_device) },
	{ 0xfe8f2038, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x66c20635, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_init_one) },
	{ 0x1bdc381d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001042d00003020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009412d00006565sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001060d00000101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001060d0000886Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001060d0000673Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00003388d00008013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000561sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001045d0000C558sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016CAd00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001179d00000101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001179d00000102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001179d00000103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001179d00000105sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d*sv*sd*bc01sc01i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc01sc01i*");

MODULE_INFO(srcversion, "4FB9FBC56707DAEC19ABED0");

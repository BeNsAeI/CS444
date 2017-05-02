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
	{ 0xa0c7926c, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x8b4b3253, __VMLINUX_SYMBOL_STR(ata_sff_check_status) },
	{ 0xa67f004b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x5a42de64, __VMLINUX_SYMBOL_STR(pci_intx) },
	{ 0x2cccfc8c, __VMLINUX_SYMBOL_STR(pcim_pin_device) },
	{ 0xbecf72aa, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xae61b618, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xef724dd, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0x22c2beda, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x63988ee5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x343cbd66, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x38f69647, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0xae49d36f, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0xe2796f6d, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xfe8f2038, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xce393f4b, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x725ee0e3, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0x7e21b6f8, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0xe887d398, __VMLINUX_SYMBOL_STR(ata_bmdma_port_intr) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001725d00007174sv*sd*bc01sc06i00*");
MODULE_ALIAS("pci:v00008086d00003200sv*sd*bc01sc06i00*");

MODULE_INFO(srcversion, "002C9C366840834CB264E1B");

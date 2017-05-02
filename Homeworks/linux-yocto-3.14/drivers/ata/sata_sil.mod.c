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
	{ 0xe8cc7217, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xa0c7926c, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x448e63c5, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0x63205de1, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0xb734248b, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0x94a68723, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x69e9a2cb, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0xc2143bab, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0xd6d7ccf8, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0x7cf8b56, __VMLINUX_SYMBOL_STR(ata_bmdma32_port_ops) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x2cccfc8c, __VMLINUX_SYMBOL_STR(pcim_pin_device) },
	{ 0x343cbd66, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xbecf72aa, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x38f69647, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0x73a48b4a, __VMLINUX_SYMBOL_STR(ata_sff_std_ports) },
	{ 0x63988ee5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xae49d36f, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0xe2796f6d, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xfe8f2038, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xce393f4b, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0x50877b9, __VMLINUX_SYMBOL_STR(dmi_first_match) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xbd1257d4, __VMLINUX_SYMBOL_STR(ata_dev_next) },
	{ 0x27189890, __VMLINUX_SYMBOL_STR(ata_do_set_mode) },
	{ 0x9d2948f, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb6aeb661, __VMLINUX_SYMBOL_STR(ata_id_c_string) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x5bb300a3, __VMLINUX_SYMBOL_STR(ata_sff_dma_pause) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0xefc52507, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0x73f29d67, __VMLINUX_SYMBOL_STR(ata_sff_hsm_move) },
	{ 0x725ee0e3, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x46be546f, __VMLINUX_SYMBOL_STR(ata_bmdma_irq_clear) },
	{ 0xafc483fa, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xd038e29a, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x22c2beda, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001095d00003112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000240sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003512sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003114sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000436Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004379sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000437Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DDB38D35CE54BB118B8FB75");

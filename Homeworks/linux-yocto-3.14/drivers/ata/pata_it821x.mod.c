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
	{ 0x1f1d6894, __VMLINUX_SYMBOL_STR(ata_cable_80wire) },
	{ 0x739d9e3f, __VMLINUX_SYMBOL_STR(ata_cable_unknown) },
	{ 0xd657d13, __VMLINUX_SYMBOL_STR(ata_bmdma_port_ops) },
	{ 0xe8cc7217, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xa0c7926c, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5857b225, __VMLINUX_SYMBOL_STR(ioread16_rep) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x25ca2fcf, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x16c66ed7, __VMLINUX_SYMBOL_STR(ata_bmdma_port_start) },
	{ 0xbd923c43, __VMLINUX_SYMBOL_STR(ata_do_dev_read_id) },
	{ 0x66c20635, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_init_one) },
	{ 0xfe8f2038, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xafc483fa, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xd038e29a, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xae61b618, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x6248b0fa, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x1bdc381d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x22c2beda, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x19739738, __VMLINUX_SYMBOL_STR(ata_dev_pair) },
	{ 0xacb92391, __VMLINUX_SYMBOL_STR(ata_sff_dev_select) },
	{ 0xab3c717a, __VMLINUX_SYMBOL_STR(ata_bmdma_start) },
	{ 0x3f3618b6, __VMLINUX_SYMBOL_STR(ata_bmdma_stop) },
	{ 0x3fe18bc4, __VMLINUX_SYMBOL_STR(ata_bmdma_qc_issue) },
	{ 0xbd1257d4, __VMLINUX_SYMBOL_STR(ata_dev_next) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9d2948f, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xb6aeb661, __VMLINUX_SYMBOL_STR(ata_id_c_string) },
	{ 0xa67f004b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001283d00008211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001283d00008212sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017F3d00001010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A0F7DB955BA233AFB9B440F");

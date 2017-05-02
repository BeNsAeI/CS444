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
	{ 0x2638178, __VMLINUX_SYMBOL_STR(sata_port_ops) },
	{ 0xe8cc7217, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xa0c7926c, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x343cbd66, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xbecf72aa, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x26880dcd, __VMLINUX_SYMBOL_STR(pci_set_dma_max_seg_size) },
	{ 0x63988ee5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x38f69647, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0xae49d36f, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0xe2796f6d, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xfe8f2038, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xce393f4b, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0x4011cda5, __VMLINUX_SYMBOL_STR(dev_alert) },
	{ 0x8b736bab, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x25ca2fcf, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xea418e0f, __VMLINUX_SYMBOL_STR(atapi_cmd_type) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x3afa4910, __VMLINUX_SYMBOL_STR(ata_link_printk) },
	{ 0x73c832f2, __VMLINUX_SYMBOL_STR(ata_dev_classify) },
	{ 0x8769d09, __VMLINUX_SYMBOL_STR(ata_wait_after_reset) },
	{ 0x87970d1c, __VMLINUX_SYMBOL_STR(ata_link_online) },
	{ 0x674c4d17, __VMLINUX_SYMBOL_STR(sata_link_resume) },
	{ 0x62020492, __VMLINUX_SYMBOL_STR(ata_msleep) },
	{ 0x4fdc945d, __VMLINUX_SYMBOL_STR(sata_deb_timing_normal) },
	{ 0xcccfb2fa, __VMLINUX_SYMBOL_STR(sata_deb_timing_hotplug) },
	{ 0x20fc41b2, __VMLINUX_SYMBOL_STR(ata_std_error_handler) },
	{ 0x725ee0e3, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0x88247b56, __VMLINUX_SYMBOL_STR(__ata_ehi_push_desc) },
	{ 0x7cb9579b, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0x7e21b6f8, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0xefc52507, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0xf311e908, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0x6de0cc5c, __VMLINUX_SYMBOL_STR(ata_qc_complete) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xafc483fa, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xd038e29a, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001101d00001622sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D57B805CE40E1CFB00E00F8");

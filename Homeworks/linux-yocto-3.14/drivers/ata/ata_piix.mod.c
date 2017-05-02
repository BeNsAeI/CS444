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
	{ 0x7cf8b56, __VMLINUX_SYMBOL_STR(ata_bmdma32_port_ops) },
	{ 0xd946e67e, __VMLINUX_SYMBOL_STR(ata_cable_40wire) },
	{ 0xd6e56ada, __VMLINUX_SYMBOL_STR(dev_attr_link_power_management_policy) },
	{ 0x448e63c5, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0x63205de1, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0xb734248b, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0x94a68723, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x69e9a2cb, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0xc2143bab, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0xd6d7ccf8, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0x74fcb48, __VMLINUX_SYMBOL_STR(sata_std_hardreset) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x240f65fd, __VMLINUX_SYMBOL_STR(ata_slave_link_init) },
	{ 0xae49d36f, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x5a42de64, __VMLINUX_SYMBOL_STR(pci_intx) },
	{ 0x684a1cc5, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0xa061864a, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xf6942fd3, __VMLINUX_SYMBOL_STR(ata_pci_sff_activate_host) },
	{ 0xe818b32b, __VMLINUX_SYMBOL_STR(ata_bmdma_interrupt) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x5f60c44f, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe2796f6d, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x343cbd66, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xcc053a54, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_prepare_host) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x25ca2fcf, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xfe8f2038, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x50877b9, __VMLINUX_SYMBOL_STR(dmi_first_match) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xc33ee883, __VMLINUX_SYMBOL_STR(ata_sff_prereset) },
	{ 0x9368afc2, __VMLINUX_SYMBOL_STR(pci_test_config_bits) },
	{ 0xa67f004b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x22c2beda, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x6248b0fa, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x1bdc381d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x1fd3fa6b, __VMLINUX_SYMBOL_STR(ata_pio_need_iordy) },
	{ 0xeae9a1a0, __VMLINUX_SYMBOL_STR(ata_bmdma_status) },
	{ 0x673e3b88, __VMLINUX_SYMBOL_STR(sata_link_scr_lpm) },
	{ 0x16c66ed7, __VMLINUX_SYMBOL_STR(ata_bmdma_port_start) },
	{ 0xa0c7926c, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0xae61b618, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xd566175a, __VMLINUX_SYMBOL_STR(ata_pci_device_do_suspend) },
	{ 0xf9765833, __VMLINUX_SYMBOL_STR(dmi_match) },
	{ 0x6add5c9a, __VMLINUX_SYMBOL_STR(dmi_find_device) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0xb608b83b, __VMLINUX_SYMBOL_STR(ata_host_suspend) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd038e29a, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xafc483fa, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0x25eb7f3b, __VMLINUX_SYMBOL_STR(pci_reenable_device) },
	{ 0xa34a77f7, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x5fe1e065, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00007010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007111sv000015ADsd00001976bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007199sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000084CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002411sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002421sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000244Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000244Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000248Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000248Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000245Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000266Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000269Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002850sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002651sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002652sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002653sv*sd*bc01sc01i*");
MODULE_ALIAS("pci:v00008086d000027C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002825sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002828sv0000106Bsd000000A0bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002828sv0000106Bsd000000A1bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002828sv0000106Bsd000000A3bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002828sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002920sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002921sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002926sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002928sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000292Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000292Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B2Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002326sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F31sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000023A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C88sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C89sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C81sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C4C859B9D534F7CB2E71DEA");

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
	{ 0x35a39edc, __VMLINUX_SYMBOL_STR(sas_change_queue_depth) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xe88a2324, __VMLINUX_SYMBOL_STR(sas_release_transport) },
	{ 0x2cfcbbdd, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xfe8f2038, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x189f2756, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xae49d36f, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0xbc111b80, __VMLINUX_SYMBOL_STR(sas_drain_work) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x8ac56eef, __VMLINUX_SYMBOL_STR(sas_ssp_task_response) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xc4541d1f, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0xf35805f3, __VMLINUX_SYMBOL_STR(sas_suspend_ha) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xa5825d8d, __VMLINUX_SYMBOL_STR(sas_task_abort) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x4065a4c1, __VMLINUX_SYMBOL_STR(pci_biosrom_size) },
	{ 0xcef67836, __VMLINUX_SYMBOL_STR(sas_phy_reset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x64b62658, __VMLINUX_SYMBOL_STR(sas_get_local_phy) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x8a87e724, __VMLINUX_SYMBOL_STR(try_test_sas_gpio_gp_bit) },
	{ 0x2b137529, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xd6b3bd78, __VMLINUX_SYMBOL_STR(sas_target_alloc) },
	{ 0xf0d23fcd, __VMLINUX_SYMBOL_STR(pci_enable_msix) },
	{ 0xa34a77f7, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf795fc61, __VMLINUX_SYMBOL_STR(sas_eh_bus_reset_handler) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x70310cfb, __VMLINUX_SYMBOL_STR(sas_ioctl) },
	{ 0x1daba2a1, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x6ee5b4df, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x9f9e20c4, __VMLINUX_SYMBOL_STR(efi) },
	{ 0x8ec03faf, __VMLINUX_SYMBOL_STR(sas_unregister_ha) },
	{ 0xe2796f6d, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x3378de47, __VMLINUX_SYMBOL_STR(sas_register_ha) },
	{ 0x336e7937, __VMLINUX_SYMBOL_STR(pci_map_biosrom) },
	{ 0x8be65208, __VMLINUX_SYMBOL_STR(sas_eh_abort_handler) },
	{ 0xd24a6b12, __VMLINUX_SYMBOL_STR(sas_resume_ha) },
	{ 0x43f4155a, __VMLINUX_SYMBOL_STR(devm_free_irq) },
	{ 0x4aff7de5, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xf2220f27, __VMLINUX_SYMBOL_STR(sas_target_destroy) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x1b020776, __VMLINUX_SYMBOL_STR(sas_eh_device_reset_handler) },
	{ 0xef6596e8, __VMLINUX_SYMBOL_STR(sas_queuecommand) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x525e5846, __VMLINUX_SYMBOL_STR(sas_ata_schedule_reset) },
	{ 0x2e28d26d, __VMLINUX_SYMBOL_STR(sas_remove_host) },
	{ 0x8779a34f, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5fe1e065, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x6f342370, __VMLINUX_SYMBOL_STR(sas_bios_param) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xa98a7030, __VMLINUX_SYMBOL_STR(sas_change_queue_type) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x992780d, __VMLINUX_SYMBOL_STR(efi_enabled) },
	{ 0x63988ee5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x882ec3a0, __VMLINUX_SYMBOL_STR(sas_prep_resume_ha) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x3e017515, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x326425ca, __VMLINUX_SYMBOL_STR(pci_unmap_biosrom) },
	{ 0x5e7211dd, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xafad493b, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0xbd0a1132, __VMLINUX_SYMBOL_STR(sas_slave_configure) },
	{ 0x25ca2fcf, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xd3e82ae5, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf82fecbd, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x4565ecba, __VMLINUX_SYMBOL_STR(sas_domain_attach_transport) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x8b736bab, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libsas,scsi_transport_sas";

MODULE_ALIAS("pci:v00008086d00001D61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D67sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D69sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D6Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D66sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D6Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "56E40890ACB17DFED2ACB80");

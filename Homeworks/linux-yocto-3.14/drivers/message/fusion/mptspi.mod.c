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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x260890ab, __VMLINUX_SYMBOL_STR(mptscsih_host_attrs) },
	{ 0xb1c98796, __VMLINUX_SYMBOL_STR(mptscsih_show_info) },
	{ 0xc851375b, __VMLINUX_SYMBOL_STR(mptscsih_bios_param) },
	{ 0x4013228, __VMLINUX_SYMBOL_STR(mptscsih_change_queue_depth) },
	{ 0x3d54ad2e, __VMLINUX_SYMBOL_STR(mptscsih_host_reset) },
	{ 0xf53ffde7, __VMLINUX_SYMBOL_STR(mptscsih_bus_reset) },
	{ 0x5d444478, __VMLINUX_SYMBOL_STR(mptscsih_dev_reset) },
	{ 0x36931542, __VMLINUX_SYMBOL_STR(mptscsih_abort) },
	{ 0x29c8660b, __VMLINUX_SYMBOL_STR(mptscsih_info) },
	{ 0x41a1cd1b, __VMLINUX_SYMBOL_STR(mptscsih_shutdown) },
	{ 0x10fa6722, __VMLINUX_SYMBOL_STR(mptscsih_suspend) },
	{ 0xc47c22e8, __VMLINUX_SYMBOL_STR(mpt_deregister) },
	{ 0x4526289b, __VMLINUX_SYMBOL_STR(mpt_event_deregister) },
	{ 0xd9a92a75, __VMLINUX_SYMBOL_STR(mpt_reset_deregister) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xc5c21fa9, __VMLINUX_SYMBOL_STR(spi_release_transport) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x45f4df96, __VMLINUX_SYMBOL_STR(mpt_reset_register) },
	{ 0x1693c577, __VMLINUX_SYMBOL_STR(mpt_event_register) },
	{ 0x5bbc2214, __VMLINUX_SYMBOL_STR(mptscsih_scandv_complete) },
	{ 0xc96411e8, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_complete) },
	{ 0xe7d8b4f2, __VMLINUX_SYMBOL_STR(mpt_register) },
	{ 0x678244f5, __VMLINUX_SYMBOL_STR(mptscsih_io_done) },
	{ 0x41586142, __VMLINUX_SYMBOL_STR(spi_attach_transport) },
	{ 0xa859ad85, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0xdb1c9c58, __VMLINUX_SYMBOL_STR(mpt_findImVolumes) },
	{ 0xbbac5286, __VMLINUX_SYMBOL_STR(mptscsih_slave_configure) },
	{ 0xe1c498de, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x68e62d3b, __VMLINUX_SYMBOL_STR(spi_display_xfer_agreement) },
	{ 0x9ccd10d9, __VMLINUX_SYMBOL_STR(spi_dv_device) },
	{ 0xb6d6656b, __VMLINUX_SYMBOL_STR(mpt_free_msg_frame) },
	{ 0xe4459fd9, __VMLINUX_SYMBOL_STR(mpt_HardResetHandler) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf6b4f265, __VMLINUX_SYMBOL_STR(mptscsih_raid_id_to_num) },
	{ 0xd1977c9f, __VMLINUX_SYMBOL_STR(mptscsih_remove) },
	{ 0x1daba2a1, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0xc3023b2, __VMLINUX_SYMBOL_STR(mptscsih_IssueTaskMgmt) },
	{ 0x189f2756, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2cfcbbdd, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xa638cf6e, __VMLINUX_SYMBOL_STR(mpt_attach) },
	{ 0x7768e464, __VMLINUX_SYMBOL_STR(mptscsih_slave_destroy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd7edd9, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0xe0ebd0fe, __VMLINUX_SYMBOL_STR(scsi_device_lookup_by_target) },
	{ 0x8aaef8dd, __VMLINUX_SYMBOL_STR(mpt_config) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x2b137529, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x1932f55c, __VMLINUX_SYMBOL_STR(mptscsih_ioc_reset) },
	{ 0x28c17900, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x3ccb66ab, __VMLINUX_SYMBOL_STR(mptscsih_event_process) },
	{ 0x4eb1436d, __VMLINUX_SYMBOL_STR(mptscsih_is_phys_disk) },
	{ 0x15c98a5d, __VMLINUX_SYMBOL_STR(scsi_print_command) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xa81ca94d, __VMLINUX_SYMBOL_STR(mptscsih_qcmd) },
	{ 0x353f77f2, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8d005d18, __VMLINUX_SYMBOL_STR(mptscsih_resume) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfbec6a91, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame) },
	{ 0x3e459415, __VMLINUX_SYMBOL_STR(mpt_get_msg_frame) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptscsih,mptbase,scsi_transport_spi";

MODULE_ALIAS("pci:v00001000d00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BDA6EA8137D586EBFEAB699");

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
	{ 0x7768e464, __VMLINUX_SYMBOL_STR(mptscsih_slave_destroy) },
	{ 0x3d54ad2e, __VMLINUX_SYMBOL_STR(mptscsih_host_reset) },
	{ 0x5d444478, __VMLINUX_SYMBOL_STR(mptscsih_dev_reset) },
	{ 0x36931542, __VMLINUX_SYMBOL_STR(mptscsih_abort) },
	{ 0x29c8660b, __VMLINUX_SYMBOL_STR(mptscsih_info) },
	{ 0x8d005d18, __VMLINUX_SYMBOL_STR(mptscsih_resume) },
	{ 0x10fa6722, __VMLINUX_SYMBOL_STR(mptscsih_suspend) },
	{ 0xc47c22e8, __VMLINUX_SYMBOL_STR(mpt_deregister) },
	{ 0x4526289b, __VMLINUX_SYMBOL_STR(mpt_event_deregister) },
	{ 0xd9a92a75, __VMLINUX_SYMBOL_STR(mpt_reset_deregister) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe88a2324, __VMLINUX_SYMBOL_STR(sas_release_transport) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x45f4df96, __VMLINUX_SYMBOL_STR(mpt_reset_register) },
	{ 0x1693c577, __VMLINUX_SYMBOL_STR(mpt_event_register) },
	{ 0x5bbc2214, __VMLINUX_SYMBOL_STR(mptscsih_scandv_complete) },
	{ 0xc96411e8, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_complete) },
	{ 0xe7d8b4f2, __VMLINUX_SYMBOL_STR(mpt_register) },
	{ 0x678244f5, __VMLINUX_SYMBOL_STR(mptscsih_io_done) },
	{ 0x78598cd6, __VMLINUX_SYMBOL_STR(sas_attach_transport) },
	{ 0x36938bd6, __VMLINUX_SYMBOL_STR(scsi_track_queue_full) },
	{ 0xde7b5a8c, __VMLINUX_SYMBOL_STR(mptscsih_get_scsi_lookup) },
	{ 0x2ed60c8b, __VMLINUX_SYMBOL_STR(mpt_GetIocState) },
	{ 0x7b084173, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_pg1) },
	{ 0xe0e5101f, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_get_num_paths) },
	{ 0x66a1f14c, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0xdb1c9c58, __VMLINUX_SYMBOL_STR(mpt_findImVolumes) },
	{ 0x2ae3a791, __VMLINUX_SYMBOL_STR(mptbase_sas_persist_operation) },
	{ 0x189f2756, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x2cfcbbdd, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x4c03f3ec, __VMLINUX_SYMBOL_STR(mptscsih_flush_running_cmds) },
	{ 0xa638cf6e, __VMLINUX_SYMBOL_STR(mpt_attach) },
	{ 0xeae077d1, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x52aacc0e, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xc0ab8b01, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x62ad0b4b, __VMLINUX_SYMBOL_STR(starget_for_each_device) },
	{ 0xbbac5286, __VMLINUX_SYMBOL_STR(mptscsih_slave_configure) },
	{ 0xee2bfd79, __VMLINUX_SYMBOL_STR(sas_read_port_mode_page) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x64ab8480, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_response_code) },
	{ 0xb0220a03, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_pg0) },
	{ 0xf6b4f265, __VMLINUX_SYMBOL_STR(mptscsih_raid_id_to_num) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8aaef8dd, __VMLINUX_SYMBOL_STR(mpt_config) },
	{ 0x1932f55c, __VMLINUX_SYMBOL_STR(mptscsih_ioc_reset) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x4eb1436d, __VMLINUX_SYMBOL_STR(mptscsih_is_phys_disk) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xd7edd9, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xd571552d, __VMLINUX_SYMBOL_STR(sas_port_mark_backlink) },
	{ 0x8226c3c5, __VMLINUX_SYMBOL_STR(scsi_is_sas_rphy) },
	{ 0x9506ec3c, __VMLINUX_SYMBOL_STR(sas_phy_free) },
	{ 0xc268565b, __VMLINUX_SYMBOL_STR(sas_port_add) },
	{ 0xf10892c6, __VMLINUX_SYMBOL_STR(sas_port_alloc_num) },
	{ 0xbdf0c473, __VMLINUX_SYMBOL_STR(sas_phy_add) },
	{ 0x62e67fbd, __VMLINUX_SYMBOL_STR(sas_phy_alloc) },
	{ 0xaa6244f0, __VMLINUX_SYMBOL_STR(sas_expander_alloc) },
	{ 0xfb1e49d6, __VMLINUX_SYMBOL_STR(sas_port_add_phy) },
	{ 0x8f8dc592, __VMLINUX_SYMBOL_STR(mpt_Soft_Hard_ResetHandler) },
	{ 0xfbec6a91, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame) },
	{ 0xfa2aa703, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x214c1110, __VMLINUX_SYMBOL_STR(sas_port_delete) },
	{ 0xbf4657, __VMLINUX_SYMBOL_STR(sas_port_delete_phy) },
	{ 0xace17a66, __VMLINUX_SYMBOL_STR(mpt_detach) },
	{ 0xd1977c9f, __VMLINUX_SYMBOL_STR(mptscsih_remove) },
	{ 0x2e28d26d, __VMLINUX_SYMBOL_STR(sas_remove_host) },
	{ 0xb6d6656b, __VMLINUX_SYMBOL_STR(mpt_free_msg_frame) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xea10212a, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0x85c891c9, __VMLINUX_SYMBOL_STR(sas_rphy_free) },
	{ 0xd9119b9d, __VMLINUX_SYMBOL_STR(sas_rphy_add) },
	{ 0xe2c3539b, __VMLINUX_SYMBOL_STR(sas_end_device_alloc) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdcde434e, __VMLINUX_SYMBOL_STR(mpt_clear_taskmgmt_in_progress_flag) },
	{ 0x501d38be, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame_hi_pri) },
	{ 0x3e459415, __VMLINUX_SYMBOL_STR(mpt_get_msg_frame) },
	{ 0x43d201ef, __VMLINUX_SYMBOL_STR(mpt_set_taskmgmt_in_progress_flag) },
	{ 0x52535c4, __VMLINUX_SYMBOL_STR(scsi_device_set_state) },
	{ 0x45b86a4a, __VMLINUX_SYMBOL_STR(device_reprobe) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x15c98a5d, __VMLINUX_SYMBOL_STR(scsi_print_command) },
	{ 0xa81ca94d, __VMLINUX_SYMBOL_STR(mptscsih_qcmd) },
	{ 0x353f77f2, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xe1c498de, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x28c17900, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x2b137529, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptscsih,mptbase,scsi_transport_sas";

MODULE_ALIAS("pci:v00001000d00000050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000059sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "56DBBDADE2CD351E7007BA4");

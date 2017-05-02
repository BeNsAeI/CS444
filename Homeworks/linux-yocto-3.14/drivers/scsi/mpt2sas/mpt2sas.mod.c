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
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8fe8e249, __VMLINUX_SYMBOL_STR(scsi_remove_target) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xe88a2324, __VMLINUX_SYMBOL_STR(sas_release_transport) },
	{ 0x2cfcbbdd, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x8ce068bb, __VMLINUX_SYMBOL_STR(blk_queue_free_tags) },
	{ 0x36938bd6, __VMLINUX_SYMBOL_STR(scsi_track_queue_full) },
	{ 0x54e3cc3b, __VMLINUX_SYMBOL_STR(param_get_int) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x189f2756, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x56fef0ed, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x575c84d4, __VMLINUX_SYMBOL_STR(sas_is_tlr_enabled) },
	{ 0x17795916, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x4787ae16, __VMLINUX_SYMBOL_STR(pci_stop_and_remove_bus_device_locked) },
	{ 0x28c17900, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xbdf0c473, __VMLINUX_SYMBOL_STR(sas_phy_add) },
	{ 0xb0a37bbe, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0xeaf36f6c, __VMLINUX_SYMBOL_STR(sas_disable_tlr) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xc4541d1f, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x28a2ed02, __VMLINUX_SYMBOL_STR(scsi_build_sense_buffer) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xfb1e49d6, __VMLINUX_SYMBOL_STR(sas_port_add_phy) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xd7edd9, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbf4657, __VMLINUX_SYMBOL_STR(sas_port_delete_phy) },
	{ 0x1b9e0ff1, __VMLINUX_SYMBOL_STR(scsilun_to_int) },
	{ 0x853bf7c1, __VMLINUX_SYMBOL_STR(param_set_int) },
	{ 0xd9119b9d, __VMLINUX_SYMBOL_STR(sas_rphy_add) },
	{ 0x353f77f2, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x40c7247c, __VMLINUX_SYMBOL_STR(si_meminfo) },
	{ 0xd5b2e96, __VMLINUX_SYMBOL_STR(scsi_adjust_queue_depth) },
	{ 0x15c98a5d, __VMLINUX_SYMBOL_STR(scsi_print_command) },
	{ 0xb550b14e, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x214c1110, __VMLINUX_SYMBOL_STR(sas_port_delete) },
	{ 0xbecbf4d3, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x81a29b3b, __VMLINUX_SYMBOL_STR(dma_get_required_mask) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x856a2a96, __VMLINUX_SYMBOL_STR(raid_class_release) },
	{ 0x78598cd6, __VMLINUX_SYMBOL_STR(sas_attach_transport) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x2b137529, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x827716a7, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x30985417, __VMLINUX_SYMBOL_STR(scsi_internal_device_block) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8d47ab47, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xf0d23fcd, __VMLINUX_SYMBOL_STR(pci_enable_msix) },
	{ 0xa34a77f7, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xaa6244f0, __VMLINUX_SYMBOL_STR(sas_expander_alloc) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xee2bfd79, __VMLINUX_SYMBOL_STR(sas_read_port_mode_page) },
	{ 0xfa2aa703, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xe2c3539b, __VMLINUX_SYMBOL_STR(sas_end_device_alloc) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xc35f508f, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x1daba2a1, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4a7f08a3, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xc268565b, __VMLINUX_SYMBOL_STR(sas_port_add) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x79fb0082, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x44a8a17e, __VMLINUX_SYMBOL_STR(raid_class_attach) },
	{ 0x6ee5b4df, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xac32d0ca, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0xed4e3dd2, __VMLINUX_SYMBOL_STR(attribute_container_find_class_device) },
	{ 0xf4c46ad3, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0x9506ec3c, __VMLINUX_SYMBOL_STR(sas_phy_free) },
	{ 0xeae077d1, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x1bdc381d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1ab2f3f7, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x62ad0b4b, __VMLINUX_SYMBOL_STR(starget_for_each_device) },
	{ 0x45b86a4a, __VMLINUX_SYMBOL_STR(device_reprobe) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0x374e0d31, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x62e67fbd, __VMLINUX_SYMBOL_STR(sas_phy_alloc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2e28d26d, __VMLINUX_SYMBOL_STR(sas_remove_host) },
	{ 0xe1c498de, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5fe1e065, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xf7d10f83, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0xea10212a, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0xeac791d4, __VMLINUX_SYMBOL_STR(blk_queue_init_tags) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xaece8867, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf10892c6, __VMLINUX_SYMBOL_STR(sas_port_alloc_num) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x63988ee5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xf02bb484, __VMLINUX_SYMBOL_STR(scsi_internal_device_unblock) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xd672047e, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x5e7211dd, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xff099500, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xafad493b, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x2917796b, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x60a8cb84, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0xabc0da2e, __VMLINUX_SYMBOL_STR(pci_request_selected_regions) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x6c93d1e, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x1c520f39, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xf3f9c690, __VMLINUX_SYMBOL_STR(sas_enable_tlr) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x871fab85, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_sas,raid_class";

MODULE_ALIAS("pci:v00001000d00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000082sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000083sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000084sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000086sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000087sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000006Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000007Esv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F8663852E07425F96C234F9");

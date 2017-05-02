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
	{ 0x22c2beda, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xb46f0348, __VMLINUX_SYMBOL_STR(pci_enable_sriov) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x8bd8b308, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0x69ee7e59, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x2cfcbbdd, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x8ce068bb, __VMLINUX_SYMBOL_STR(blk_queue_free_tags) },
	{ 0x36938bd6, __VMLINUX_SYMBOL_STR(scsi_track_queue_full) },
	{ 0x20eadeb6, __VMLINUX_SYMBOL_STR(ip_compute_csum) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x189f2756, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x56fef0ed, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x17795916, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x1bdc26cf, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0x28c17900, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xb0a37bbe, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xf6b4c1b3, __VMLINUX_SYMBOL_STR(scsi_is_fc_rport) },
	{ 0xc4541d1f, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x28a2ed02, __VMLINUX_SYMBOL_STR(scsi_build_sense_buffer) },
	{ 0xae1eb8ff, __VMLINUX_SYMBOL_STR(pci_disable_sriov) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xefba93e1, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xd7edd9, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x846f59a, __VMLINUX_SYMBOL_STR(cpu_info) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x1b9e0ff1, __VMLINUX_SYMBOL_STR(scsilun_to_int) },
	{ 0x6248b0fa, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0xf5447b95, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x7954b1ea, __VMLINUX_SYMBOL_STR(fc_get_event_number) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd5b2e96, __VMLINUX_SYMBOL_STR(scsi_adjust_queue_depth) },
	{ 0xb550b14e, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x2b137529, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x827716a7, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8d47ab47, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0xf0d23fcd, __VMLINUX_SYMBOL_STR(pci_enable_msix) },
	{ 0xa34a77f7, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x2291aaaa, __VMLINUX_SYMBOL_STR(sg_miter_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xbfb3f5f4, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0xed5824f3, __VMLINUX_SYMBOL_STR(fc_vport_terminate) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x1baac85, __VMLINUX_SYMBOL_STR(sg_miter_stop) },
	{ 0xed8180e2, __VMLINUX_SYMBOL_STR(fixed_size_llseek) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x7cda2a9f, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xae61b618, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x5e391a70, __VMLINUX_SYMBOL_STR(fc_remote_port_rolechg) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xa964a023, __VMLINUX_SYMBOL_STR(cpu_present_mask) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xa724257f, __VMLINUX_SYMBOL_STR(init_uts_ns) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x4fd5cfb9, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x793369, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x60b19351, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x6ee5b4df, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x5f27bcb2, __VMLINUX_SYMBOL_STR(fc_vport_create) },
	{ 0x3a74b026, __VMLINUX_SYMBOL_STR(sg_miter_next) },
	{ 0x2dba276a, __VMLINUX_SYMBOL_STR(__iowrite32_copy) },
	{ 0xcaef1b77, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x5b6c7e85, __VMLINUX_SYMBOL_STR(fc_host_post_vendor_event) },
	{ 0x9d9e8d2, __VMLINUX_SYMBOL_STR(fc_release_transport) },
	{ 0xf4c46ad3, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0x824f0351, __VMLINUX_SYMBOL_STR(fc_host_post_event) },
	{ 0xe9dff136, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x7553ad1b, __VMLINUX_SYMBOL_STR(scsi_host_get) },
	{ 0x1bdc381d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x4aff7de5, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x1ab2f3f7, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xe8d2971c, __VMLINUX_SYMBOL_STR(fc_remote_port_delete) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3f71faa1, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x2160bc11, __VMLINUX_SYMBOL_STR(fc_block_scsi_eh) },
	{ 0x6a037cf1, __VMLINUX_SYMBOL_STR(mempool_kfree) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0x374e0d31, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4aad52d7, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb19a5453, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4994dbfa, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xf37e067b, __VMLINUX_SYMBOL_STR(pci_try_set_mwi) },
	{ 0xe1c498de, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x8779a34f, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5fe1e065, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xa67f004b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xa05c03df, __VMLINUX_SYMBOL_STR(mempool_kmalloc) },
	{ 0xf7d10f83, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0xea10212a, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0xeac791d4, __VMLINUX_SYMBOL_STR(blk_queue_init_tags) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xaece8867, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc683d84b, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x63988ee5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xce3a7195, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0xebad8e5e, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x577c16e8, __VMLINUX_SYMBOL_STR(fc_remove_host) },
	{ 0x3e017515, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc666a132, __VMLINUX_SYMBOL_STR(crc_t10dif) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x5e7211dd, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xef724dd, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0xbc31b92f, __VMLINUX_SYMBOL_STR(fc_remote_port_add) },
	{ 0x2917796b, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x60a8cb84, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0xabc0da2e, __VMLINUX_SYMBOL_STR(pci_request_selected_regions) },
	{ 0x263074f8, __VMLINUX_SYMBOL_STR(irq_set_affinity_hint) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x6c93d1e, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x1c520f39, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x9566e0b8, __VMLINUX_SYMBOL_STR(pci_find_ext_capability) },
	{ 0xf59403bb, __VMLINUX_SYMBOL_STR(fc_attach_transport) },
	{ 0xf82fecbd, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x4411c503, __VMLINUX_SYMBOL_STR(prandom_seed) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x871fab85, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_fc,crc-t10dif";

MODULE_ALIAS("pci:v000010DFd0000FB00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00001AE5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FA00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F980sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F095sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F098sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE05sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000704sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000714sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E260sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E208sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E268sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00000724sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000072Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "40493C1C440BCF4D1D60146");

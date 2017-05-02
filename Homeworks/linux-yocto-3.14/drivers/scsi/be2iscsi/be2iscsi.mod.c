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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x49a94ee9, __VMLINUX_SYMBOL_STR(iscsi_eh_session_reset) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x93737cef, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0x3ddb0d69, __VMLINUX_SYMBOL_STR(iscsi_boot_create_target) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x17795916, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x1ab1dd0e, __VMLINUX_SYMBOL_STR(iscsi_change_queue_depth) },
	{ 0x1bdc26cf, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0x28c17900, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x5d24629c, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xc4541d1f, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x773a9c94, __VMLINUX_SYMBOL_STR(blk_iopoll_enabled) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xcb9e5e21, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0x2739882d, __VMLINUX_SYMBOL_STR(pci_dev_get) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xd7edd9, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0xc259f92a, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xb9fca8b4, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x9e842e89, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbc59d510, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0x919658b2, __VMLINUX_SYMBOL_STR(iscsi_lookup_endpoint) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x2b137529, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8d47ab47, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0xf0d23fcd, __VMLINUX_SYMBOL_STR(pci_enable_msix) },
	{ 0xa34a77f7, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x3d5a625a, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x9d3aa376, __VMLINUX_SYMBOL_STR(blk_iopoll_init) },
	{ 0x7318c67a, __VMLINUX_SYMBOL_STR(iscsi_boot_create_ethernet) },
	{ 0x34793978, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0x68481d51, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0xac0ba8c1, __VMLINUX_SYMBOL_STR(blk_iopoll_disable) },
	{ 0xe23ae481, __VMLINUX_SYMBOL_STR(blk_iopoll_complete) },
	{ 0x4cd05c58, __VMLINUX_SYMBOL_STR(iscsi_conn_teardown) },
	{ 0xfb1de6ea, __VMLINUX_SYMBOL_STR(iscsi_put_task) },
	{ 0x4f8704ea, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0xf32cfcd1, __VMLINUX_SYMBOL_STR(iscsi_complete_scsi_task) },
	{ 0x3ed928e1, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x358f0e10, __VMLINUX_SYMBOL_STR(iscsi_destroy_endpoint) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x6ee5b4df, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x81533963, __VMLINUX_SYMBOL_STR(sysfs_format_mac) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x22f4371f, __VMLINUX_SYMBOL_STR(iscsi_boot_create_host_kset) },
	{ 0x91463036, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0x82acfb70, __VMLINUX_SYMBOL_STR(blk_iopoll_sched) },
	{ 0xd5b9a3dd, __VMLINUX_SYMBOL_STR(iscsi_session_failure) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x7553ad1b, __VMLINUX_SYMBOL_STR(scsi_host_get) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1ab2f3f7, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xc7eb3570, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0x2536cb73, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x5d39d171, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0x519abb36, __VMLINUX_SYMBOL_STR(iscsi_destroy_iface) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5fe1e065, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x3aa813b9, __VMLINUX_SYMBOL_STR(iscsi_suspend_queue) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xf7d10f83, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0x118ea9fc, __VMLINUX_SYMBOL_STR(iscsi_create_endpoint) },
	{ 0x10090ee5, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3d91a85, __VMLINUX_SYMBOL_STR(iscsi_create_iface) },
	{ 0xaece8867, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x63988ee5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x55864ec, __VMLINUX_SYMBOL_STR(iscsi_boot_create_initiator) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xc4d1186f, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2975fe75, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x31e5e14d, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0xea417be, __VMLINUX_SYMBOL_STR(__iscsi_complete_pdu) },
	{ 0x1cd4c9eb, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0x6a76f3ac, __VMLINUX_SYMBOL_STR(blk_iopoll_enable) },
	{ 0x117c823b, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x2d6badc4, __VMLINUX_SYMBOL_STR(iscsi_get_port_speed_name) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73880ed, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0xe918bcff, __VMLINUX_SYMBOL_STR(bsg_job_done) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xfaa94cbb, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x29ab137, __VMLINUX_SYMBOL_STR(iscsi_conn_setup) },
	{ 0x6c93d1e, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x24c5e54a, __VMLINUX_SYMBOL_STR(iscsi_host_for_each_session) },
	{ 0xb458a5d1, __VMLINUX_SYMBOL_STR(iscsi_get_port_state_name) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xc9b26900, __VMLINUX_SYMBOL_STR(iscsi_boot_destroy_kset) },
	{ 0x871fab85, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,iscsi_boot_sysfs,scsi_transport_iscsi";

MODULE_ALIAS("pci:v000019A2d00000212sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000222sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000702sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000703sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00000722sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7C14BFA0C489BC7E4B814CA");

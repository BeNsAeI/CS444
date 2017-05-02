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
	{ 0xa82ded68, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x93737cef, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x76cd7cb9, __VMLINUX_SYMBOL_STR(ib_fmr_pool_map_phys) },
	{ 0x2fdab68f, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0x1974d97b, __VMLINUX_SYMBOL_STR(ib_alloc_fast_reg_mr) },
	{ 0x1ab1dd0e, __VMLINUX_SYMBOL_STR(iscsi_change_queue_depth) },
	{ 0x5d24629c, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xcb9e5e21, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0x7559e594, __VMLINUX_SYMBOL_STR(ib_free_fast_reg_page_list) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x3dbea51e, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0xc259f92a, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0xb9fca8b4, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0xe6ba4f07, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9e842e89, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0xc32b59ff, __VMLINUX_SYMBOL_STR(ib_destroy_fmr_pool) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbc59d510, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0x919658b2, __VMLINUX_SYMBOL_STR(iscsi_lookup_endpoint) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xcddc09bd, __VMLINUX_SYMBOL_STR(rdma_connect) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2b137529, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x877e422f, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc5b503a8, __VMLINUX_SYMBOL_STR(ib_get_dma_mr) },
	{ 0xd1c42aa1, __VMLINUX_SYMBOL_STR(ib_query_device) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3d5a625a, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xad020a32, __VMLINUX_SYMBOL_STR(rdma_destroy_qp) },
	{ 0x34793978, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0x68481d51, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x80d058ac, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0x4cd05c58, __VMLINUX_SYMBOL_STR(iscsi_conn_teardown) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xfb1de6ea, __VMLINUX_SYMBOL_STR(iscsi_put_task) },
	{ 0x4f8704ea, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0x1af81036, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0x3ed928e1, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0xd6d36ae7, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x358f0e10, __VMLINUX_SYMBOL_STR(iscsi_destroy_endpoint) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x5a643b1f, __VMLINUX_SYMBOL_STR(rdma_create_id) },
	{ 0xf910f34, __VMLINUX_SYMBOL_STR(ib_destroy_cq) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xda440ed3, __VMLINUX_SYMBOL_STR(rdma_create_qp) },
	{ 0x91463036, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0xba2c7746, __VMLINUX_SYMBOL_STR(ib_unregister_event_handler) },
	{ 0x368548fa, __VMLINUX_SYMBOL_STR(rdma_resolve_route) },
	{ 0x4741a933, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xfa9ae97e, __VMLINUX_SYMBOL_STR(ib_register_event_handler) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xc7eb3570, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0x2536cb73, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0xedde67e0, __VMLINUX_SYMBOL_STR(iscsi_prep_data_out_pdu) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8382c933, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa3342dfc, __VMLINUX_SYMBOL_STR(iscsi_complete_pdu) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x5d39d171, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0x24fcb3b4, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xd976ad5e, __VMLINUX_SYMBOL_STR(ib_dereg_mr) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x118ea9fc, __VMLINUX_SYMBOL_STR(iscsi_create_endpoint) },
	{ 0x10090ee5, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf0010d8, __VMLINUX_SYMBOL_STR(ib_create_fmr_pool) },
	{ 0xb614c9ca, __VMLINUX_SYMBOL_STR(rdma_resolve_addr) },
	{ 0x649e7d, __VMLINUX_SYMBOL_STR(ib_alloc_fast_reg_page_list) },
	{ 0xc4d1186f, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2975fe75, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0x31e5e14d, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0x1cd4c9eb, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0x1dcd214, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0x26412901, __VMLINUX_SYMBOL_STR(ib_fmr_pool_unmap) },
	{ 0xfaa94cbb, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0x29ab137, __VMLINUX_SYMBOL_STR(iscsi_conn_setup) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,ib_core,scsi_transport_iscsi,rdma_cm";


MODULE_INFO(srcversion, "03207C5C7F61DEA902DD965");

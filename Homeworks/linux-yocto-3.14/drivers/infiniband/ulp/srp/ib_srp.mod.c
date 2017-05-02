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
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe4793ba6, __VMLINUX_SYMBOL_STR(ib_unregister_client) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x45144264, __VMLINUX_SYMBOL_STR(srp_release_transport) },
	{ 0x7ad5d5b5, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x2fd0e42f, __VMLINUX_SYMBOL_STR(ib_sa_unregister_client) },
	{ 0x8c2bcc53, __VMLINUX_SYMBOL_STR(ib_register_client) },
	{ 0xc1955a3f, __VMLINUX_SYMBOL_STR(ib_sa_register_client) },
	{ 0xc34ba211, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0xabc90511, __VMLINUX_SYMBOL_STR(srp_attach_transport) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xac704bf3, __VMLINUX_SYMBOL_STR(ib_send_cm_rtu) },
	{ 0xd6f92c50, __VMLINUX_SYMBOL_STR(ib_cm_init_qp_attr) },
	{ 0x7331f138, __VMLINUX_SYMBOL_STR(ib_send_cm_drep) },
	{ 0xa859ad85, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0xee09cf5d, __VMLINUX_SYMBOL_STR(srp_rport_add) },
	{ 0x189f2756, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x8724d8ca, __VMLINUX_SYMBOL_STR(ib_query_gid) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xad0413d4, __VMLINUX_SYMBOL_STR(match_hex) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x61b7b126, __VMLINUX_SYMBOL_STR(simple_strtoull) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x2cfcbbdd, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1139206d, __VMLINUX_SYMBOL_STR(ib_set_client_data) },
	{ 0x22ede969, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0xbaaea7eb, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xed0d3520, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xf0010d8, __VMLINUX_SYMBOL_STR(ib_create_fmr_pool) },
	{ 0xc5b503a8, __VMLINUX_SYMBOL_STR(ib_get_dma_mr) },
	{ 0x877e422f, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0xd1c42aa1, __VMLINUX_SYMBOL_STR(ib_query_device) },
	{ 0x8dac937b, __VMLINUX_SYMBOL_STR(ib_send_cm_req) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xbbbad606, __VMLINUX_SYMBOL_STR(ib_modify_qp) },
	{ 0x96ed9f8, __VMLINUX_SYMBOL_STR(ib_find_pkey) },
	{ 0xdd72e078, __VMLINUX_SYMBOL_STR(ib_create_qp) },
	{ 0x1dcd214, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6ee5b4df, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xbd3091b2, __VMLINUX_SYMBOL_STR(srp_rport_put) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x2206fd02, __VMLINUX_SYMBOL_STR(srp_stop_rport_timers) },
	{ 0x5e7211dd, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x35a0e727, __VMLINUX_SYMBOL_STR(srp_remove_host) },
	{ 0x26470f6c, __VMLINUX_SYMBOL_STR(srp_rport_get) },
	{ 0x268e8663, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xf910f34, __VMLINUX_SYMBOL_STR(ib_destroy_cq) },
	{ 0xd90236a4, __VMLINUX_SYMBOL_STR(ib_destroy_qp) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x26412901, __VMLINUX_SYMBOL_STR(ib_fmr_pool_unmap) },
	{ 0x3f31cba3, __VMLINUX_SYMBOL_STR(ib_sa_path_rec_get) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf820f778, __VMLINUX_SYMBOL_STR(ib_send_cm_dreq) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x76cd7cb9, __VMLINUX_SYMBOL_STR(ib_fmr_pool_map_phys) },
	{ 0xeac791d4, __VMLINUX_SYMBOL_STR(blk_queue_init_tags) },
	{ 0x8ce068bb, __VMLINUX_SYMBOL_STR(blk_queue_free_tags) },
	{ 0x2fdab68f, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0xd976ad5e, __VMLINUX_SYMBOL_STR(ib_dereg_mr) },
	{ 0xc32b59ff, __VMLINUX_SYMBOL_STR(ib_destroy_fmr_pool) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xcdbd6a0f, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x85625697, __VMLINUX_SYMBOL_STR(ib_get_client_data) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xc393a2e8, __VMLINUX_SYMBOL_STR(ib_destroy_cm_id) },
	{ 0x9520fc85, __VMLINUX_SYMBOL_STR(ib_create_cm_id) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xd6004f4c, __VMLINUX_SYMBOL_STR(srp_reconnect_rport) },
	{ 0xb5012304, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0x36938bd6, __VMLINUX_SYMBOL_STR(scsi_track_queue_full) },
	{ 0xd5b2e96, __VMLINUX_SYMBOL_STR(scsi_adjust_queue_depth) },
	{ 0x62765aaa, __VMLINUX_SYMBOL_STR(srp_start_tl_fail_timers) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x131db64a, __VMLINUX_SYMBOL_STR(system_long_wq) },
	{ 0x28c17900, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xee891cc0, __VMLINUX_SYMBOL_STR(srp_tmo_valid) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core,scsi_transport_srp,ib_sa,ib_cm";


MODULE_INFO(srcversion, "1D7E2379F0C7F7C3F8F9DB2");

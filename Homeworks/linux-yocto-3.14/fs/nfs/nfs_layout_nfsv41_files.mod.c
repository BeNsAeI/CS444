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
	{ 0x74d6c15, __VMLINUX_SYMBOL_STR(pnfs_unregister_layoutdriver) },
	{ 0x856621d7, __VMLINUX_SYMBOL_STR(nfs4_schedule_session_recovery) },
	{        0, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x9660e678, __VMLINUX_SYMBOL_STR(nfs4_set_ds_client) },
	{ 0x1bb5fc55, __VMLINUX_SYMBOL_STR(nfs_request_add_commit_list) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7d73135a, __VMLINUX_SYMBOL_STR(nfs_init_cinfo) },
	{ 0x72fdbb07, __VMLINUX_SYMBOL_STR(nfs_initiate_commit) },
	{ 0xff807b30, __VMLINUX_SYMBOL_STR(nfs4_mark_deviceid_unavailable) },
	{ 0x32b94714, __VMLINUX_SYMBOL_STR(nfs_commitdata_alloc) },
	{ 0x7ba5bdfd, __VMLINUX_SYMBOL_STR(__tracepoint_nfs4_pnfs_commit_ds) },
	{ 0xc7e2f44d, __VMLINUX_SYMBOL_STR(nfs4_set_rw_stateid) },
	{ 0x76ac5ce7, __VMLINUX_SYMBOL_STR(nfs4_proc_getdeviceinfo) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe6308fc5, __VMLINUX_SYMBOL_STR(nfs41_setup_sequence) },
	{ 0x3015e1d8, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0xdead2040, __VMLINUX_SYMBOL_STR(nfs4_schedule_lease_recovery) },
	{ 0x36e0f73a, __VMLINUX_SYMBOL_STR(pnfs_update_layout) },
	{ 0xc4148b1d, __VMLINUX_SYMBOL_STR(rpc_exit) },
	{ 0xec730387, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0x9480f35, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0xaba3a7c0, __VMLINUX_SYMBOL_STR(xdr_init_decode_pages) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xced000eb, __VMLINUX_SYMBOL_STR(_pnfs_return_layout) },
	{ 0x7fbf0763, __VMLINUX_SYMBOL_STR(nfs_request_remove_commit_list) },
	{ 0x28286145, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xe6ad40d1, __VMLINUX_SYMBOL_STR(nfs4_find_or_create_ds_client) },
	{ 0xcc67520c, __VMLINUX_SYMBOL_STR(nfs_generic_pg_test) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa33bcc7c, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_write_mds) },
	{ 0xab4bc72b, __VMLINUX_SYMBOL_STR(nfs_retry_commit) },
	{ 0x734a93d4, __VMLINUX_SYMBOL_STR(nfs_initiate_write) },
	{ 0xd1a6edf9, __VMLINUX_SYMBOL_STR(pnfs_destroy_layout) },
	{ 0x6932921f, __VMLINUX_SYMBOL_STR(pnfs_put_lseg) },
	{ 0x9cc2c608, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0xfa9aec73, __VMLINUX_SYMBOL_STR(nfs_put_client) },
	{ 0xb7485ae8, __VMLINUX_SYMBOL_STR(nfs4_insert_deviceid_node) },
	{ 0xd979996c, __VMLINUX_SYMBOL_STR(pnfs_set_layoutcommit) },
	{ 0x170f3ed6, __VMLINUX_SYMBOL_STR(nfs41_maxgetdevinfo_overhead) },
	{ 0xe2cfb038, __VMLINUX_SYMBOL_STR(__cond_resched_lock) },
	{ 0x37655358, __VMLINUX_SYMBOL_STR(nfs4_init_ds_session) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xea248cef, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x993ce9bc, __VMLINUX_SYMBOL_STR(nfs41_sequence_done) },
	{ 0x949a95f7, __VMLINUX_SYMBOL_STR(nfs_initiate_read) },
	{ 0x80156c, __VMLINUX_SYMBOL_STR(nfs4_schedule_stateid_recovery) },
	{ 0x8bc28507, __VMLINUX_SYMBOL_STR(nfs4_test_deviceid_unavailable) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x617938ff, __VMLINUX_SYMBOL_STR(rpc_sleep_on) },
	{ 0x9ffe5c70, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x992a191e, __VMLINUX_SYMBOL_STR(pnfs_read_done_resend_to_mds) },
	{ 0x7b782d9, __VMLINUX_SYMBOL_STR(rpc_count_iostats) },
	{ 0x9446058a, __VMLINUX_SYMBOL_STR(rpc_restart_call_prepare) },
	{ 0xa0ceef51, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit) },
	{ 0x7e954b4f, __VMLINUX_SYMBOL_STR(rpc_wake_up_queued_task) },
	{ 0xfce01ec9, __VMLINUX_SYMBOL_STR(rpc_pton) },
	{ 0x24e6f6a4, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc4425a4c, __VMLINUX_SYMBOL_STR(__tracepoint_nfs4_pnfs_read) },
	{ 0x8c074d6c, __VMLINUX_SYMBOL_STR(pnfs_write_done_resend_to_mds) },
	{ 0x7a36ddbd, __VMLINUX_SYMBOL_STR(rpc_wake_up) },
	{ 0xd43518f3, __VMLINUX_SYMBOL_STR(nfs_commitdata_release) },
	{ 0x4e39e773, __VMLINUX_SYMBOL_STR(nfs_init_commit) },
	{ 0x2f6b6886, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0x40536a5a, __VMLINUX_SYMBOL_STR(__tracepoint_nfs4_pnfs_write) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x89bc5a64, __VMLINUX_SYMBOL_STR(nfs_wait_bit_killable) },
	{ 0x81bc3b8c, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_read_mds) },
	{ 0x63d75113, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x1b25c1d9, __VMLINUX_SYMBOL_STR(nfs_remove_bad_delegation) },
	{ 0xd10837e3, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xbf4967a5, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,nfs,sunrpc";


MODULE_INFO(srcversion, "C4217720CFA65655D673317");

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
	{ 0x1ab1dd0e, __VMLINUX_SYMBOL_STR(iscsi_change_queue_depth) },
	{ 0x1cd4c9eb, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0x3dbea51e, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0x2536cb73, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0x10090ee5, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0x5d24629c, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0xfaa94cbb, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0x2b6b106e, __VMLINUX_SYMBOL_STR(iscsi_tcp_cleanup_task) },
	{ 0xf2ac86b3, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_xmit) },
	{ 0x207f669e, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_init) },
	{ 0x34793978, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0x80d058ac, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0x68481d51, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x3d5a625a, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc259f92a, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0xc7eb3570, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0xebd19ccd, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0x9b0c8220, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xcb9e5e21, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0x1af81036, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x8db22c9c, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xe5b6da01, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0xc077e3b6, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2465bca1, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_alloc) },
	{ 0xc4d1186f, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0x9e842e89, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0xbc59d510, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0x4f8704ea, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0x93737cef, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0xb9fca8b4, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0xbe4ccc85, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_free) },
	{ 0x2b137529, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x16cb5484, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_teardown) },
	{ 0x43b7c7de, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x4019851b, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x492379f2, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_setup) },
	{ 0xae677325, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_skb) },
	{ 0x45a1cae4, __VMLINUX_SYMBOL_STR(iscsi_conn_queue_work) },
	{ 0xbded85d0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0xa5a99b49, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xc4a348cf, __VMLINUX_SYMBOL_STR(iscsi_tcp_hdr_recv_prep) },
	{ 0x5bd6c1ee, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xd5dac574, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x6d856dc7, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0x9e44ca72, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x31e5e14d, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0x881001bd, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xdd557cf0, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xe8ed8fa6, __VMLINUX_SYMBOL_STR(iscsi_tcp_set_max_r2t) },
	{ 0x91463036, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0x3ed928e1, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0x4ae8d572, __VMLINUX_SYMBOL_STR(kernel_getpeername) },
	{ 0x2975fe75, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x89cb859, __VMLINUX_SYMBOL_STR(kernel_getsockname) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x2b82ee72, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_get_stats) },
	{ 0x5d39d171, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0x5a03fb77, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_unmap) },
	{ 0xcc228090, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_done) },
	{ 0xea5a109, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x81f61d8f, __VMLINUX_SYMBOL_STR(iscsi_segment_seek_sg) },
	{ 0x4498ff63, __VMLINUX_SYMBOL_STR(iscsi_segment_init_linear) },
	{ 0x7ab04a63, __VMLINUX_SYMBOL_STR(iscsi_tcp_dgst_header) },
	{ 0x28c17900, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libiscsi_tcp,scsi_transport_iscsi";


MODULE_INFO(srcversion, "C54675663A2F5A4A1361266");

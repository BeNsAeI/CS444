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
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x1ab1dd0e, __VMLINUX_SYMBOL_STR(iscsi_change_queue_depth) },
	{ 0x1cd4c9eb, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0x3dbea51e, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0x2536cb73, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0x10090ee5, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0x5d24629c, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0xef346615, __VMLINUX_SYMBOL_STR(cxgbi_attr_is_visible) },
	{ 0x8ed189e9, __VMLINUX_SYMBOL_STR(cxgbi_ep_disconnect) },
	{ 0x728c0899, __VMLINUX_SYMBOL_STR(cxgbi_ep_poll) },
	{ 0x4ca7e335, __VMLINUX_SYMBOL_STR(cxgbi_ep_connect) },
	{ 0xfaa94cbb, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0xa4e853b9, __VMLINUX_SYMBOL_STR(cxgbi_parse_pdu_itt) },
	{ 0xfc39821d, __VMLINUX_SYMBOL_STR(cxgbi_conn_init_pdu) },
	{ 0x5739bf9f, __VMLINUX_SYMBOL_STR(cxgbi_conn_xmit_pdu) },
	{ 0xf518d506, __VMLINUX_SYMBOL_STR(cxgbi_conn_alloc_pdu) },
	{ 0xf6854cf0, __VMLINUX_SYMBOL_STR(cxgbi_cleanup_task) },
	{ 0xf2ac86b3, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_xmit) },
	{ 0x207f669e, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_init) },
	{ 0xcefd2dbb, __VMLINUX_SYMBOL_STR(cxgbi_get_conn_stats) },
	{ 0x34793978, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0xf1b43024, __VMLINUX_SYMBOL_STR(cxgbi_set_host_param) },
	{ 0x88e769e6, __VMLINUX_SYMBOL_STR(cxgbi_get_host_param) },
	{ 0x68481d51, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x3ed928e1, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0x57fd5f0e, __VMLINUX_SYMBOL_STR(cxgbi_get_ep_param) },
	{ 0xb915eebf, __VMLINUX_SYMBOL_STR(cxgbi_set_conn_param) },
	{ 0x16cb5484, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_teardown) },
	{ 0xcb9e5e21, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0x3d5a625a, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0xba620f38, __VMLINUX_SYMBOL_STR(cxgbi_bind_conn) },
	{ 0xad3c9363, __VMLINUX_SYMBOL_STR(cxgbi_create_conn) },
	{ 0xbd9a036f, __VMLINUX_SYMBOL_STR(cxgbi_destroy_session) },
	{ 0x1b8842fa, __VMLINUX_SYMBOL_STR(cxgbi_create_session) },
	{ 0xa67c76af, __VMLINUX_SYMBOL_STR(cxgbi_iscsi_cleanup) },
	{ 0x7fdb6004, __VMLINUX_SYMBOL_STR(cxgbi_device_unregister_all) },
	{ 0x48c85d07, __VMLINUX_SYMBOL_STR(cxgb3_unregister_client) },
	{ 0xf5735def, __VMLINUX_SYMBOL_STR(cxgb3_register_client) },
	{ 0xd07d8eb4, __VMLINUX_SYMBOL_STR(cxgbi_iscsi_init) },
	{ 0x2b98f90f, __VMLINUX_SYMBOL_STR(cxgbi_hbas_add) },
	{ 0x3a5c4389, __VMLINUX_SYMBOL_STR(cxgbi_ddp_page_size_factor) },
	{ 0x4898580f, __VMLINUX_SYMBOL_STR(cxgbi_ddp_init) },
	{ 0x498d75ea, __VMLINUX_SYMBOL_STR(cxgbi_device_register) },
	{ 0xaeec7cfd, __VMLINUX_SYMBOL_STR(cxgbi_device_portmap_create) },
	{ 0x93399c16, __VMLINUX_SYMBOL_STR(cxgbi_sock_select_mss) },
	{ 0xd25589dc, __VMLINUX_SYMBOL_STR(cxgb3_alloc_atid) },
	{ 0x20a034d8, __VMLINUX_SYMBOL_STR(t3_l2t_get) },
	{ 0x5165326f, __VMLINUX_SYMBOL_STR(cxgbi_conn_tx_open) },
	{ 0x58cf34e3, __VMLINUX_SYMBOL_STR(cxgbi_sock_established) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x66cbc3cc, __VMLINUX_SYMBOL_STR(cxgb3_insert_tid) },
	{ 0x3b4aa587, __VMLINUX_SYMBOL_STR(cxgb3_free_atid) },
	{ 0x5c97019c, __VMLINUX_SYMBOL_STR(cxgb3_remove_tid) },
	{ 0x6e81a9e2, __VMLINUX_SYMBOL_STR(t3_l2e_free) },
	{ 0x9a1ab6c7, __VMLINUX_SYMBOL_STR(cxgbi_sock_purge_wr_queue) },
	{ 0x9fad4fe9, __VMLINUX_SYMBOL_STR(cxgbi_sock_free_cpl_skbs) },
	{ 0x345016e8, __VMLINUX_SYMBOL_STR(cxgbi_ddp_ppod_set) },
	{ 0x1cab58a, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xd2abf9a1, __VMLINUX_SYMBOL_STR(cxgbi_sock_fail_act_open) },
	{ 0x71b4a500, __VMLINUX_SYMBOL_STR(cxgb3_queue_tid_release) },
	{ 0x3ef16403, __VMLINUX_SYMBOL_STR(cxgbi_sock_closed) },
	{ 0x42fc8349, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x39fadd3f, __VMLINUX_SYMBOL_STR(cxgbi_conn_pdu_ready) },
	{ 0x1724b91b, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x90f49b8e, __VMLINUX_SYMBOL_STR(cxgbi_sock_skb_entail) },
	{ 0x733c7680, __VMLINUX_SYMBOL_STR(t3_l2t_send_slow) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1438be09, __VMLINUX_SYMBOL_STR(cxgbi_sock_rcv_peer_close) },
	{ 0x9659776e, __VMLINUX_SYMBOL_STR(cxgbi_sock_rcv_abort_rpl) },
	{ 0xab2fa83f, __VMLINUX_SYMBOL_STR(cxgbi_sock_rcv_close_conn_rpl) },
	{ 0x2e196428, __VMLINUX_SYMBOL_STR(cxgbi_sock_act_open_req_arp_failure) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x71dfbdc0, __VMLINUX_SYMBOL_STR(cxgb3_ofld_send) },
	{ 0xdfd94963, __VMLINUX_SYMBOL_STR(cxgbi_ddp_cleanup) },
	{ 0x996c6a42, __VMLINUX_SYMBOL_STR(cxgbi_device_unregister) },
	{ 0xa08cc572, __VMLINUX_SYMBOL_STR(cxgbi_device_find_by_lldev) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8161299b, __VMLINUX_SYMBOL_STR(__kfree_skb) },
	{ 0xd79e84eb, __VMLINUX_SYMBOL_STR(cxgbi_sock_rcv_wr_ack) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libcxgbi,libiscsi_tcp,cxgb3";


MODULE_INFO(srcversion, "F2642E5DBA53004A943CA27");

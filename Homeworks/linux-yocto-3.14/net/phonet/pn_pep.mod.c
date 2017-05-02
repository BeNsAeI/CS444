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
	{ 0x5454c983, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x32ce7d44, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x50dc7041, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xe4911459, __VMLINUX_SYMBOL_STR(pn_sock_unhash) },
	{ 0xb01ad77b, __VMLINUX_SYMBOL_STR(sk_stream_wait_connect) },
	{ 0xbdc2374b, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x3e64051b, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x63bcc843, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xf922abcb, __VMLINUX_SYMBOL_STR(pn_sock_hash) },
	{ 0x6f695d3d, __VMLINUX_SYMBOL_STR(phonet_proto_register) },
	{ 0x32c86cf5, __VMLINUX_SYMBOL_STR(sock_rfree) },
	{ 0xb40102c8, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xf425d9f7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xe5998f20, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xb986f77d, __VMLINUX_SYMBOL_STR(pn_sock_get_port) },
	{ 0xc28ffb0e, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xb121f9f5, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x20458cc2, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd13f7190, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x56721741, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x3d414693, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x8db22c9c, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0xa20ce1b8, __VMLINUX_SYMBOL_STR(net_msg_warn) },
	{ 0xc0b65a74, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x1cab58a, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x874a8ab7, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x200b530c, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x5705b4c0, __VMLINUX_SYMBOL_STR(phonet_proto_unregister) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6b0a9340, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0xe93d9ce7, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x9af89f98, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x9aae7429, __VMLINUX_SYMBOL_STR(pn_skb_send) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x7bcaa12b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xefbc12e4, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xac413df2, __VMLINUX_SYMBOL_STR(phonet_stream_ops) },
	{ 0xee1be2c, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x1b16c9c, __VMLINUX_SYMBOL_STR(sock_wfree) },
	{ 0x1724b91b, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x707db2a9, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=phonet";


MODULE_INFO(srcversion, "1BDE0B66B61FB66C016241B");

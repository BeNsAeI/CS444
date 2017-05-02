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
	{ 0xd1ae1d3b, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x3ea52cf1, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x66465a5b, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xea918467, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x60b26ea0, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x3eeac13e, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0x67f59ad1, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xa0d42bb5, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x13ceaf6f, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x55ba4b6d, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0xcd9a0c0e, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0xa2bd908f, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7a7c30df, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0x38817ef0, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x52016b68, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xc4b6d353, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x5a51228c, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x77ef5485, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0xbd790825, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x9d17fd2c, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x42fc8349, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xe93d9ce7, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x8a1f3c08, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc28ffb0e, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xea11c617, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xdde37779, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0xb4c25469, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xbe7ad760, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x3e64051b, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xdb9cd5a5, __VMLINUX_SYMBOL_STR(dev_get_by_name_rcu) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x8db22c9c, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xb121f9f5, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5bd6c1ee, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xd5dac574, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xc70c259f, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0xa5a99b49, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x9f8b7cbf, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xbded85d0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0xc35a6a00, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xa05f372e, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xa8506ff4, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0xb896dddc, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x32ce7d44, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x9af89f98, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9421ffef, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0xd13f7190, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x6b0a9340, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x63bcc843, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x41c96142, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x84329680, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x50dc7041, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x20458cc2, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,ppp_generic";


MODULE_INFO(srcversion, "139738FB6B470974B8102A7");

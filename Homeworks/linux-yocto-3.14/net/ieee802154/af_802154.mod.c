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
	{ 0x32ce7d44, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xe6faa058, __VMLINUX_SYMBOL_STR(dev_load) },
	{ 0x50dc7041, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xe4e78ec4, __VMLINUX_SYMBOL_STR(dev_getbyhwaddr_rcu) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x9b0c8220, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xdbd6dcfb, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xb4c25469, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xea11c617, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x890e00c9, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x3e64051b, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x63bcc843, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb40102c8, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xa68eee14, __VMLINUX_SYMBOL_STR(compat_sock_common_setsockopt) },
	{ 0xf5b1c7a4, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xdd557cf0, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xd397fc42, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0xd1ae1d3b, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x4313282e, __VMLINUX_SYMBOL_STR(compat_sock_common_getsockopt) },
	{ 0x13ceaf6f, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x20458cc2, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x55ba4b6d, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0xd13f7190, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xe4e035a2, __VMLINUX_SYMBOL_STR(sock_prot_inuse_add) },
	{ 0x60b26ea0, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa0d42bb5, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x82d31360, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x38817ef0, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x724f0b57, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xea918467, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x53e185fc, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0xbd790825, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xddb85a68, __VMLINUX_SYMBOL_STR(sock_get_timestampns) },
	{ 0x67f59ad1, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{        0, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x2caa885f, __VMLINUX_SYMBOL_STR(dev_getfirstbyhwtype) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc4b6d353, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x200b530c, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6b0a9340, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xeabdcf2c, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x5bd6c1ee, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x9af89f98, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x78cfc7d4, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0xd5dac574, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x5a51228c, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x84329680, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x707db2a9, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6D5B7E3E9CC0D5BE3D4E7B0");

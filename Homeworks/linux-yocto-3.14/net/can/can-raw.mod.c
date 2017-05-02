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
	{ 0x1df2b5d3, __VMLINUX_SYMBOL_STR(can_rx_register) },
	{ 0x6819abc1, __VMLINUX_SYMBOL_STR(can_proto_unregister) },
	{ 0xea11c617, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x3e64051b, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x63bcc843, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xdd557cf0, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xd1ae1d3b, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x13ceaf6f, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd13f7190, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x60b26ea0, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xa0d42bb5, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x8db22c9c, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x82d31360, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x724f0b57, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xea918467, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x13270c57, __VMLINUX_SYMBOL_STR(can_ioctl) },
	{ 0xdd9d5f81, __VMLINUX_SYMBOL_STR(can_send) },
	{ 0x53e185fc, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0xd7cbddda, __VMLINUX_SYMBOL_STR(memcpy_toiovec) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x67f59ad1, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xdbdbd5d3, __VMLINUX_SYMBOL_STR(can_proto_register) },
	{ 0x200b530c, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8be8ebe, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x5bd6c1ee, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9af89f98, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0xd5dac574, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xbe562f44, __VMLINUX_SYMBOL_STR(can_rx_unregister) },
	{ 0xe2cb51af, __VMLINUX_SYMBOL_STR(sock_tx_timestamp) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x707db2a9, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "01D45DC3AEAD211B1B42BF6");

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
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1df2b5d3, __VMLINUX_SYMBOL_STR(can_rx_register) },
	{ 0x78f3d2df, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xe7f3608a, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0x66465a5b, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x3ea52cf1, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xcde7219f, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x94313d7, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x6819abc1, __VMLINUX_SYMBOL_STR(can_proto_unregister) },
	{ 0xa05f372e, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x890e00c9, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xb896dddc, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x3e64051b, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x63bcc843, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x9a10624d, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa2bd908f, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xdd557cf0, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xd1ae1d3b, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x5306cf09, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x13ceaf6f, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x5ccc6a1d, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x55ba4b6d, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0xd13f7190, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xff784133, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x60b26ea0, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xa0d42bb5, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xd2b26092, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x8db22c9c, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x82d31360, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x724f0b57, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xea918467, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x13270c57, __VMLINUX_SYMBOL_STR(can_ioctl) },
	{ 0xdd9d5f81, __VMLINUX_SYMBOL_STR(can_send) },
	{ 0x53e185fc, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0xd7cbddda, __VMLINUX_SYMBOL_STR(memcpy_toiovec) },
	{ 0x1cab58a, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x67f59ad1, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6e8bf789, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0xdbdbd5d3, __VMLINUX_SYMBOL_STR(can_proto_register) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5bd6c1ee, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x9f8b7cbf, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x7a7c30df, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9af89f98, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x25a97010, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xd5dac574, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xbe562f44, __VMLINUX_SYMBOL_STR(can_rx_unregister) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x707db2a9, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "CEFB761F86C5728085EEACD");

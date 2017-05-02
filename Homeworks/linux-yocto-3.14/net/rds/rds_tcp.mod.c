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
	{ 0xa82ded68, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x298bf7a5, __VMLINUX_SYMBOL_STR(rds_trans_register) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xea5a109, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x68a259e9, __VMLINUX_SYMBOL_STR(sock_create_lite) },
	{ 0x10a15f1e, __VMLINUX_SYMBOL_STR(rds_connect_complete) },
	{ 0x17795916, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xfe98178b, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x9b0c8220, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xea11c617, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x50cbe7b3, __VMLINUX_SYMBOL_STR(rds_stats) },
	{ 0xe4cbc5df, __VMLINUX_SYMBOL_STR(rds_conn_create) },
	{ 0x4c04ec1, __VMLINUX_SYMBOL_STR(rds_recv_incoming) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xee9cafdd, __VMLINUX_SYMBOL_STR(rds_inc_init) },
	{ 0xc28ffb0e, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xb121f9f5, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdfe1fabc, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0xd13f7190, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x4d57cda, __VMLINUX_SYMBOL_STR(rds_info_register_func) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xd6d36ae7, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xefeb91dc, __VMLINUX_SYMBOL_STR(rds_inc_put) },
	{ 0x7bc62829, __VMLINUX_SYMBOL_STR(rds_stats_info_copy) },
	{ 0xc2dab779, __VMLINUX_SYMBOL_STR(rds_info_copy) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x414982f6, __VMLINUX_SYMBOL_STR(rds_send_drop_acked) },
	{ 0x724f0b57, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xde9be17, __VMLINUX_SYMBOL_STR(rds_conn_destroy) },
	{ 0xc0b65a74, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x4741a933, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xa467af, __VMLINUX_SYMBOL_STR(rds_wq) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6b0a9340, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb19a5453, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x24fcb3b4, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5bd6c1ee, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xc5c4941e, __VMLINUX_SYMBOL_STR(rds_info_deregister_func) },
	{ 0x42fc8349, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xda03a15b, __VMLINUX_SYMBOL_STR(rds_trans_unregister) },
	{ 0xd587a0f4, __VMLINUX_SYMBOL_STR(sock_create) },
	{ 0xd5dac574, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x1724b91b, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xebd19ccd, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0x63ddd1fd, __VMLINUX_SYMBOL_STR(rds_conn_drop) },
	{ 0xbef4936, __VMLINUX_SYMBOL_STR(rds_cong_map_updated) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rds";


MODULE_INFO(srcversion, "E31AEF1FD9175F5EE683A10");

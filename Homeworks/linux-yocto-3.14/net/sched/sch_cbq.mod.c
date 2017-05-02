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
	{ 0x2cc082e9, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0x1c3222cb, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0xe008613f, __VMLINUX_SYMBOL_STR(qdisc_class_hash_grow) },
	{ 0xfac44333, __VMLINUX_SYMBOL_STR(gen_new_estimator) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x16f1dc27, __VMLINUX_SYMBOL_STR(gen_replace_estimator) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xa9d3a01d, __VMLINUX_SYMBOL_STR(tc_classify_compat) },
	{ 0x6bdcfd99, __VMLINUX_SYMBOL_STR(qdisc_class_hash_remove) },
	{ 0xdb1f03d9, __VMLINUX_SYMBOL_STR(qdisc_tree_decrease_qlen) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xd4d7370c, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0xb4578d6f, __VMLINUX_SYMBOL_STR(hrtimer_try_to_cancel) },
	{ 0x25a97010, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x372b81c3, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0xf402f80a, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0xb8066f4c, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x29a8d9d8, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0x117093be, __VMLINUX_SYMBOL_STR(qdisc_class_hash_init) },
	{ 0xed597524, __VMLINUX_SYMBOL_STR(qdisc_get_rtab) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1a123ca5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa8f676e8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x430fb9ea, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0xf3694f68, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0x37309ceb, __VMLINUX_SYMBOL_STR(gnet_stats_copy_rate_est) },
	{ 0x3563b5fc, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0xcdaf0c07, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0xa04a01bd, __VMLINUX_SYMBOL_STR(qdisc_class_hash_insert) },
	{ 0xee1be2c, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xa71506d9, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x94313d7, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x2e043420, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0xf53d4c26, __VMLINUX_SYMBOL_STR(qdisc_class_hash_destroy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x17b1125d, __VMLINUX_SYMBOL_STR(gen_kill_estimator) },
	{ 0x521b36b5, __VMLINUX_SYMBOL_STR(qdisc_put_rtab) },
	{ 0x3d31f313, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x606f031f, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0x392f7293, __VMLINUX_SYMBOL_STR(gnet_stats_copy_app) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CD93BBEBD43947EE4AA7E2F");

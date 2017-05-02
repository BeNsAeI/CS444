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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb8066f4c, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x29a8d9d8, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb1f03d9, __VMLINUX_SYMBOL_STR(qdisc_tree_decrease_qlen) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xf402f80a, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0xf3694f68, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0x3563b5fc, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0xcdaf0c07, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xae50b96c, __VMLINUX_SYMBOL_STR(tc_classify) },
	{ 0xa71506d9, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3d31f313, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x606f031f, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0x1a123ca5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa8f676e8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "93AD51560A9ECE3D22850A8");

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
	{ 0x9fc4d620, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x870d86e7, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0x50d24064, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x5a050d66, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0x47e0565f, __VMLINUX_SYMBOL_STR(nf_conntrack_flush_report) },
	{ 0x9ab11505, __VMLINUX_SYMBOL_STR(nf_ct_delete) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0xefdd70ce, __VMLINUX_SYMBOL_STR(security_secid_to_secctx) },
	{ 0x2d269682, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0x474f4d78, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x76a74e04, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_name) },
	{ 0xb2566032, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x5012666c, __VMLINUX_SYMBOL_STR(nfnetlink_send) },
	{ 0xa7c82b86, __VMLINUX_SYMBOL_STR(nfnetlink_has_listeners) },
	{ 0xbec9f6a2, __VMLINUX_SYMBOL_STR(nfnetlink_set_err) },
	{ 0xe5f0a6b9, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_symbol) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xbf08a263, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x1a72853e, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_check_insert) },
	{ 0x6012817f, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0xb862e00e, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xfe9cbfe6, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0x16054a39, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0xdacecd55, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0xb72dc130, __VMLINUX_SYMBOL_STR(__nf_conntrack_helper_find) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3cfe0a97, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0xb2ee1ebb, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x1cab58a, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x1a123ca5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa8f676e8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x1fab9c06, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xb19a5453, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x73032782, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xcd0b70e5, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xb4165fa0, __VMLINUX_SYMBOL_STR(nf_ct_unlink_expect_report) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc0cd71bf, __VMLINUX_SYMBOL_STR(nf_conntrack_lock) },
	{ 0xcc0a3d14, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0x7cd96250, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0x37bde36a, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x2672a354, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x55fe2430, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x845d47ee, __VMLINUX_SYMBOL_STR(nf_ct_expect_register_notifier) },
	{ 0x200516d, __VMLINUX_SYMBOL_STR(nf_conntrack_register_notifier) },
	{ 0x6fd1193d, __VMLINUX_SYMBOL_STR(nf_conntrack_unregister_notifier) },
	{ 0x98039ac8, __VMLINUX_SYMBOL_STR(nf_ct_expect_unregister_notifier) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_conntrack";


MODULE_INFO(srcversion, "AA8DE84F267D7A506978B16");

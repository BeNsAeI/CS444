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
	{ 0x891d0057, __VMLINUX_SYMBOL_STR(unregister_tcf_proto_ops) },
	{ 0x9b863c0e, __VMLINUX_SYMBOL_STR(register_tcf_proto_ops) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x1386ae4e, __VMLINUX_SYMBOL_STR(tcf_exts_change) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xfbd28765, __VMLINUX_SYMBOL_STR(tcf_em_tree_validate) },
	{ 0x76d540a5, __VMLINUX_SYMBOL_STR(tcf_exts_validate) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xc9dc0d71, __VMLINUX_SYMBOL_STR(skb_flow_dissect) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x601ccf56, __VMLINUX_SYMBOL_STR(__tcf_em_tree_match) },
	{ 0xdaf23bd8, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0x4096bf3b, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x3f2a0f29, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x8d130cf9, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xb1fc9684, __VMLINUX_SYMBOL_STR(tcf_action_exec) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xefdb1381, __VMLINUX_SYMBOL_STR(tcf_exts_dump_stats) },
	{ 0x8b725c7f, __VMLINUX_SYMBOL_STR(tcf_em_tree_dump) },
	{ 0x959cf54d, __VMLINUX_SYMBOL_STR(tcf_exts_dump) },
	{ 0x1a123ca5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa8f676e8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x88519b34, __VMLINUX_SYMBOL_STR(tcf_em_tree_destroy) },
	{ 0xe7afaa45, __VMLINUX_SYMBOL_STR(tcf_exts_destroy) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CDD7EBA94C27C3B23A8828A");

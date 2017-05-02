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
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbf08a263, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0x9b90850a, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe83feaf8, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_register) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xe68e7cd8, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x4877494f, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_unregister) },
	{ 0xdbd6dcfb, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x5e881b80, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc0cd71bf, __VMLINUX_SYMBOL_STR(nf_conntrack_lock) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x2672a354, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0xb2566032, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x474f4d78, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x724f0b57, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x2d269682, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x82c691d2, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xbaba863d, __VMLINUX_SYMBOL_STR(nf_afinfo) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x1724b91b, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "33879376B88C400EAEDE28D");

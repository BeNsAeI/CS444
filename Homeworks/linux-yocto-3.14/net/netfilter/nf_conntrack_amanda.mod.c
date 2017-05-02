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
	{ 0xe83feaf8, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_register) },
	{ 0xe68e7cd8, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x4877494f, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_unregister) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x5e881b80, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0xf24b14c4, __VMLINUX_SYMBOL_STR(textsearch_prepare) },
	{ 0x13f29cdb, __VMLINUX_SYMBOL_STR(skb_find_text) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2672a354, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0xb2566032, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x474f4d78, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x82c691d2, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5a9cf89e, __VMLINUX_SYMBOL_STR(textsearch_destroy) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x1724b91b, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "9473FF7E5F04C49E5E2BC91");

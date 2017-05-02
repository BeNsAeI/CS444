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
	{ 0xb63a0974, __VMLINUX_SYMBOL_STR(tcf_em_unregister) },
	{ 0xb8e72c3, __VMLINUX_SYMBOL_STR(tcf_em_register) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf24b14c4, __VMLINUX_SYMBOL_STR(textsearch_prepare) },
	{ 0x13f29cdb, __VMLINUX_SYMBOL_STR(skb_find_text) },
	{ 0x5a9cf89e, __VMLINUX_SYMBOL_STR(textsearch_destroy) },
	{ 0x846c1935, __VMLINUX_SYMBOL_STR(nla_append) },
	{ 0xe66e3ec1, __VMLINUX_SYMBOL_STR(nla_put_nohdr) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FD2314E3C43481CD536FB53");

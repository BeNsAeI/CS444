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
	{ 0x7e3410ef, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0x882deef, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x54cc1e5b, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0xf9a67454, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x34654e15, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0x146587fe, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xc28ffb0e, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x41c96142, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xe122af95, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0xf1ff72f7, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x279a12ca, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xceb753f, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x39d05e2b, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xa78059b, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xa20ce1b8, __VMLINUX_SYMBOL_STR(net_msg_warn) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x394b1555, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x43b7c7de, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa408058b, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8d998ac3, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x1e8423f3, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x3b72324a, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0xc9ef4e0c, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "E8AC208CB8E003AA19573AD");

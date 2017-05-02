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
	{ 0x3c79f726, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0x19350a88, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x1d0ed9a1, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0x882deef, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x54cc1e5b, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0xf9a67454, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x34654e15, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x146587fe, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x8d998ac3, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x3b72324a, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x1e8423f3, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xc9ef4e0c, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xbe79f507, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0x85b69429, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0x6fa11158, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_alloc_spi) },
	{ 0x61ef8ef4, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xaeba797d, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_spi_lookup) },
	{ 0x6d0e205c, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,xfrm_ipcomp,xfrm6_tunnel";


MODULE_INFO(srcversion, "2DB20FC5EA0578D331AAC3F");

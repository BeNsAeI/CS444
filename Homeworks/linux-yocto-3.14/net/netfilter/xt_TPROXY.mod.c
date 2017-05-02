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
	{ 0x2b4b7ed8, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x20b23935, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0x22ea1346, __VMLINUX_SYMBOL_STR(inet6_lookup_listener) },
	{ 0xba1ee9df, __VMLINUX_SYMBOL_STR(__inet6_lookup_established) },
	{ 0xb0396dc0, __VMLINUX_SYMBOL_STR(udp6_lib_lookup) },
	{ 0xa0579f46, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x3472474b, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x8d2a472f, __VMLINUX_SYMBOL_STR(inet_twsk_deschedule) },
	{ 0xaa80fb99, __VMLINUX_SYMBOL_STR(tcp_death_row) },
	{ 0x19b2947f, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
	{ 0x99588c9c, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x1724b91b, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x71db693b, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xa354ff7, __VMLINUX_SYMBOL_STR(sock_edemux) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8db22c9c, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x61d6f07d, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_defrag_ipv6,nf_defrag_ipv4,ipv6";


MODULE_INFO(srcversion, "F14F7CD071FD89C40BA4E4E");

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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0xe0ada396, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0xe68e7cd8, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0xa6dacccf, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0xb883a18c, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0xa05f372e, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1beca0b, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0x3ee846f1, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xd2703567, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0x9fc4d620, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x9beab3c1, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0xa9ca64c, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4690747f, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0xa8f676e8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xfac39cc9, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x8cff5fdb, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0x1e487bde, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xa134d103, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0xfca62108, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x60d1e3e7, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp6) },
	{ 0xf7db1f0a, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0x50d24064, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xf9f6801f, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x808170a4, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0x6b6c68d1, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x84355293, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0x7304d218, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x6cece75c, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp6) },
	{ 0x98b6dac, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x1724b91b, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x5b95625f, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xa754d28e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0x6012817f, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x37bde36a, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv6,ipv6";


MODULE_INFO(srcversion, "915AE1D990325C855A30D79");

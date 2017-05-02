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
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x3deea144, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0x6f4c812f, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0x402773fa, __VMLINUX_SYMBOL_STR(ip6_expire_frag_queue) },
	{ 0xdbdb84eb, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0xfd99623a, __VMLINUX_SYMBOL_STR(ip_frag_ecn_table) },
	{ 0xd067fc5c, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xea11c617, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xe7a664c4, __VMLINUX_SYMBOL_STR(nf_hooks) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xa08b539a, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0x71b9606c, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0xc28ffb0e, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x9fc4d620, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0x5fb97421, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0x856a3ba, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x724f0b57, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x1e487bde, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x1cab58a, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xad2a442, __VMLINUX_SYMBOL_STR(inet_frag_evictor) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1ef6cd4c, __VMLINUX_SYMBOL_STR(inet_frag_maybe_warn_overflow) },
	{ 0x31805f80, __VMLINUX_SYMBOL_STR(__net_get_random_once) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x27640969, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0x50d24064, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x41c96142, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1d329e61, __VMLINUX_SYMBOL_STR(ip6_frag_init) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x79e83dec, __VMLINUX_SYMBOL_STR(inet_frags_init_net) },
	{ 0xa5a99b49, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x42fc8349, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x6b6c68d1, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x7c567468, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf0e4d7bc, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x98b6dac, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x1724b91b, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x7a4d760b, __VMLINUX_SYMBOL_STR(ip6_frag_match) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "84458766246C872562A1DAB");

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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8419d3f2, __VMLINUX_SYMBOL_STR(xt_unregister_table) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xe0b4971b, __VMLINUX_SYMBOL_STR(xt_compat_lock) },
	{ 0x40728a63, __VMLINUX_SYMBOL_STR(xt_find_revision) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb02aaf0c, __VMLINUX_SYMBOL_STR(xt_check_target) },
	{ 0x2819f0be, __VMLINUX_SYMBOL_STR(xt_compat_target_to_user) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x391dc3d8, __VMLINUX_SYMBOL_STR(xt_proto_fini) },
	{ 0x68a4ccf6, __VMLINUX_SYMBOL_STR(xt_table_unlock) },
	{ 0x6360f9de, __VMLINUX_SYMBOL_STR(xt_compat_target_offset) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x48ce8701, __VMLINUX_SYMBOL_STR(xt_find_table_lock) },
	{ 0x3ac7291c, __VMLINUX_SYMBOL_STR(xt_replace_table) },
	{ 0xc28ffb0e, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x415d2d47, __VMLINUX_SYMBOL_STR(xt_proto_init) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xa916e457, __VMLINUX_SYMBOL_STR(xt_register_table) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x9fc4d620, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{        0, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x20b23935, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x2e6e0891, __VMLINUX_SYMBOL_STR(xt_compat_target_from_user) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x5f82f1f7, __VMLINUX_SYMBOL_STR(xt_compat_flush_offsets) },
	{ 0x691a6d69, __VMLINUX_SYMBOL_STR(xt_compat_calc_jump) },
	{ 0x807d2b2c, __VMLINUX_SYMBOL_STR(xt_recseq) },
	{ 0x2b4b7ed8, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x253e8b44, __VMLINUX_SYMBOL_STR(xt_compat_init_offsets) },
	{ 0x725c9955, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xec24fd82, __VMLINUX_SYMBOL_STR(xt_compat_add_offset) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x73032782, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xfca62108, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x50d24064, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xb19a5453, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x658ec0a0, __VMLINUX_SYMBOL_STR(xt_request_find_target) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x5a4896a8, __VMLINUX_SYMBOL_STR(__put_user_2) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x7304d218, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x8c473b7, __VMLINUX_SYMBOL_STR(xt_alloc_table_info) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xb28f5ef1, __VMLINUX_SYMBOL_STR(xt_free_table_info) },
	{ 0x161d1417, __VMLINUX_SYMBOL_STR(xt_compat_unlock) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8FA5493CBE62A6BD0AAA690");

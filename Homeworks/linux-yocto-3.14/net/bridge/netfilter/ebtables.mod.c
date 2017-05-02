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
	{ 0xf1f7a000, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xe0b4971b, __VMLINUX_SYMBOL_STR(xt_compat_lock) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb02aaf0c, __VMLINUX_SYMBOL_STR(xt_check_target) },
	{ 0x476857fd, __VMLINUX_SYMBOL_STR(xt_compat_match_offset) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x6360f9de, __VMLINUX_SYMBOL_STR(xt_compat_target_offset) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfa2aa703, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{        0, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x5f82f1f7, __VMLINUX_SYMBOL_STR(xt_compat_flush_offsets) },
	{ 0x691a6d69, __VMLINUX_SYMBOL_STR(xt_compat_calc_jump) },
	{ 0xf4e6c434, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x253e8b44, __VMLINUX_SYMBOL_STR(xt_compat_init_offsets) },
	{ 0x725c9955, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xec24fd82, __VMLINUX_SYMBOL_STR(xt_compat_add_offset) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x73032782, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xfca62108, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0xcf449c1d, __VMLINUX_SYMBOL_STR(xt_request_find_match) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x658ec0a0, __VMLINUX_SYMBOL_STR(xt_request_find_target) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x5bd6c1ee, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xa5a99b49, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xbded85d0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xec49b45b, __VMLINUX_SYMBOL_STR(xt_check_match) },
	{ 0xd5dac574, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x7304d218, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x161d1417, __VMLINUX_SYMBOL_STR(xt_compat_unlock) },
	{ 0xbb47f84c, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EAEDB5DEEF4D10AA31354CE");

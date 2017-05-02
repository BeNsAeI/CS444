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
	{ 0x4c8a3bb6, __VMLINUX_SYMBOL_STR(sbc_get_device_type) },
	{ 0xd9404347, __VMLINUX_SYMBOL_STR(transport_subsystem_release) },
	{ 0x314aeb44, __VMLINUX_SYMBOL_STR(transport_subsystem_register) },
	{ 0xb99111b0, __VMLINUX_SYMBOL_STR(sbc_dif_verify_read) },
	{ 0x234719f8, __VMLINUX_SYMBOL_STR(sbc_dif_verify_write) },
	{ 0x8ff73bbb, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xff06f8a0, __VMLINUX_SYMBOL_STR(vfs_readv) },
	{ 0x25f6702, __VMLINUX_SYMBOL_STR(vfs_writev) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xcda502fc, __VMLINUX_SYMBOL_STR(kernel_write) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x3539f11b, __VMLINUX_SYMBOL_STR(match_strlcpy) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{        0, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc377b775, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0x1e997638, __VMLINUX_SYMBOL_STR(sbc_get_write_same_sectors) },
	{ 0xd05288a5, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x3949e4f0, __VMLINUX_SYMBOL_STR(sbc_execute_unmap) },
	{ 0xfdc77ac3, __VMLINUX_SYMBOL_STR(sbc_parse_cdb) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb28911a0, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{        0, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";


MODULE_INFO(srcversion, "7B28B8A3608F7B8BBBE2F57");

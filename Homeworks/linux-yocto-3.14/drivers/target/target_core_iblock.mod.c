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
	{ 0xb66e28e9, __VMLINUX_SYMBOL_STR(bio_integrity_add_page) },
	{ 0x4e8b8df7, __VMLINUX_SYMBOL_STR(bio_integrity_alloc) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xa2fb6c7f, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8803cb23, __VMLINUX_SYMBOL_STR(bioset_integrity_create) },
	{ 0x7e14922d, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0xde1c1ad7, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0xb44ff7ec, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0x3d389f69, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x3539f11b, __VMLINUX_SYMBOL_STR(match_strlcpy) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9c85c98f, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xce900af, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x925520d2, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x7f3ec35d, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xfd7d1c12, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x380fbaa1, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5f60907b, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xc377b775, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0x1e997638, __VMLINUX_SYMBOL_STR(sbc_get_write_same_sectors) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd05288a5, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x3949e4f0, __VMLINUX_SYMBOL_STR(sbc_execute_unmap) },
	{ 0xfdc77ac3, __VMLINUX_SYMBOL_STR(sbc_parse_cdb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";


MODULE_INFO(srcversion, "969C34AA19D8D8BADD28F09");

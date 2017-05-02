#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x43804739, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x380fbaa1, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x711a28c0, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0xd2c4552e, __VMLINUX_SYMBOL_STR(blk_make_request) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3d9d9df7, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x5f60907b, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xd8218bef, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0x50d2592d, __VMLINUX_SYMBOL_STR(hex_dump_to_buffer) },
	{ 0x3fc53e55, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0xd370ced5, __VMLINUX_SYMBOL_STR(bio_map_kern) },
	{ 0xaa192a57, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0xb9220d93, __VMLINUX_SYMBOL_STR(blk_end_request) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc467f1de, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
	{ 0xba9a6798, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x85f5e2aa, __VMLINUX_SYMBOL_STR(krealloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "787E418F3013480410ED215");

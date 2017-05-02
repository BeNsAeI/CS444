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
	{        0, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x380fbaa1, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xf54bd49b, __VMLINUX_SYMBOL_STR(lcm) },
	{ 0xd89b8807, __VMLINUX_SYMBOL_STR(osd_req_read) },
	{ 0xdd7b9fa, __VMLINUX_SYMBOL_STR(osd_req_decode_get_attr_list) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7265b644, __VMLINUX_SYMBOL_STR(osd_req_remove_object) },
	{ 0xb8ec079f, __VMLINUX_SYMBOL_STR(osd_req_read_sg) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x84bb3a21, __VMLINUX_SYMBOL_STR(osd_req_get_attributes) },
	{ 0x71ea12a, __VMLINUX_SYMBOL_STR(osd_req_write_kern) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x94f80df0, __VMLINUX_SYMBOL_STR(osd_finalize_request) },
	{ 0x681760b1, __VMLINUX_SYMBOL_STR(osd_req_add_get_attr_list) },
	{ 0x5f60907b, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xea248cef, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xc5d9cbf8, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0xed3c100c, __VMLINUX_SYMBOL_STR(osd_start_request) },
	{ 0xef497a5d, __VMLINUX_SYMBOL_STR(osd_end_request) },
	{ 0x3d9ee9f0, __VMLINUX_SYMBOL_STR(clear_page) },
	{ 0xe24b6ff3, __VMLINUX_SYMBOL_STR(osd_execute_request_async) },
	{ 0x8cf0106c, __VMLINUX_SYMBOL_STR(osd_req_create_object) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8b60a8a6, __VMLINUX_SYMBOL_STR(osd_req_decode_sense_full) },
	{ 0x38122c10, __VMLINUX_SYMBOL_STR(osd_req_set_attributes) },
	{ 0xff0582f8, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0x2521b323, __VMLINUX_SYMBOL_STR(osd_req_add_set_attr_list) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbd567ad6, __VMLINUX_SYMBOL_STR(osd_req_write) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xc467f1de, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd,async_xor";


MODULE_INFO(srcversion, "29BC430F61EFD35BAADA516");

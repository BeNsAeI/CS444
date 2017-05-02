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
	{ 0x74d6c15, __VMLINUX_SYMBOL_STR(pnfs_unregister_layoutdriver) },
	{        0, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbc432ee0, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_write) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0x9cff377f, __VMLINUX_SYMBOL_STR(ore_read) },
	{ 0x7c9722ba, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0x687f1a2f, __VMLINUX_SYMBOL_STR(pnfs_ld_write_done) },
	{ 0x73f0af3f, __VMLINUX_SYMBOL_STR(ore_put_io_state) },
	{ 0x76ac5ce7, __VMLINUX_SYMBOL_STR(nfs4_proc_getdeviceinfo) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xeefa3765, __VMLINUX_SYMBOL_STR(ore_write) },
	{ 0xe9674d94, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0x3015e1d8, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0xaa9087c0, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x4390ed1d, __VMLINUX_SYMBOL_STR(osduld_info_lookup) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe6d47fbd, __VMLINUX_SYMBOL_STR(find_or_create_page) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x5ce7aca2, __VMLINUX_SYMBOL_STR(ore_check_io) },
	{ 0x28286145, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3215b94c, __VMLINUX_SYMBOL_STR(xdr_init_decode) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0x154c8b30, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x9cc2c608, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0x28806871, __VMLINUX_SYMBOL_STR(ore_verify_layout) },
	{ 0xb7485ae8, __VMLINUX_SYMBOL_STR(nfs4_insert_deviceid_node) },
	{ 0xea248cef, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb8d25732, __VMLINUX_SYMBOL_STR(osduld_put_device) },
	{ 0x79a38e61, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x815f2897, __VMLINUX_SYMBOL_STR(empty_zero_page) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9ffe5c70, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x24e6f6a4, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0x1f7a8e55, __VMLINUX_SYMBOL_STR(ore_get_rw_state) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6967053, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_read) },
	{ 0x312ca88d, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2f6b6886, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xf3ab5024, __VMLINUX_SYMBOL_STR(find_get_page) },
	{ 0x63d75113, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0xd10837e3, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0xa97b1f9e, __VMLINUX_SYMBOL_STR(pnfs_ld_read_done) },
	{ 0xbf4967a5, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,libore,nfs,sunrpc,osd";


MODULE_INFO(srcversion, "3247B20882814058A18A3B5");

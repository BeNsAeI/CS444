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
	{ 0xfd7d1c12, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x380fbaa1, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x5f9b7166, __VMLINUX_SYMBOL_STR(page_cache_next_hole) },
	{ 0x7c9722ba, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x64412ac3, __VMLINUX_SYMBOL_STR(rpc_unlink) },
	{ 0x687f1a2f, __VMLINUX_SYMBOL_STR(pnfs_ld_write_done) },
	{ 0xb1cf3c4e, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xa263917, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x3ca31f35, __VMLINUX_SYMBOL_STR(nfs_net_id) },
	{ 0xc18413e6, __VMLINUX_SYMBOL_STR(nfs4_proc_getdevicelist) },
	{ 0x76ac5ce7, __VMLINUX_SYMBOL_STR(nfs4_proc_getdeviceinfo) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x36701786, __VMLINUX_SYMBOL_STR(rpc_mkpipe_data) },
	{ 0x65c44e84, __VMLINUX_SYMBOL_STR(rpc_mkpipe_dentry) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe9674d94, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0x3015e1d8, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0x3d5e095b, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0xe22732d2, __VMLINUX_SYMBOL_STR(rpc_get_sb_net) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xaba3a7c0, __VMLINUX_SYMBOL_STR(xdr_init_decode_pages) },
	{ 0x3a0534c5, __VMLINUX_SYMBOL_STR(rpc_queue_upcall) },
	{ 0x9fc4d620, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa2fb6c7f, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xe6d47fbd, __VMLINUX_SYMBOL_STR(find_or_create_page) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa33bcc7c, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_write_mds) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xaad399ee, __VMLINUX_SYMBOL_STR(rpc_d_lookup_sb) },
	{ 0x9ef217c6, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0x917559e6, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0x154c8b30, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x5f60907b, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x2558cc05, __VMLINUX_SYMBOL_STR(bh_submit_read) },
	{ 0x170f3ed6, __VMLINUX_SYMBOL_STR(nfs41_maxgetdevinfo_overhead) },
	{ 0x725c9955, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x747e9ed8, __VMLINUX_SYMBOL_STR(rpc_pipe_generic_upcall) },
	{ 0x7f3ec35d, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0x387e1639, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_register) },
	{ 0xea248cef, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x65a5b588, __VMLINUX_SYMBOL_STR(rpc_destroy_pipe_data) },
	{ 0x3d389f69, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0xa68af5c0, __VMLINUX_SYMBOL_STR(free_buffer_head) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x50d24064, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x8f5e5478, __VMLINUX_SYMBOL_STR(rpc_put_sb_net) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9ffe5c70, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xdf096f9a, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x24e6f6a4, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6967053, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_read) },
	{ 0x312ca88d, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xb51a3724, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_unregister) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2f6b6886, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xf3ab5024, __VMLINUX_SYMBOL_STR(find_get_page) },
	{ 0x81bc3b8c, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_read_mds) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x16defb45, __VMLINUX_SYMBOL_STR(pnfs_set_lo_fail) },
	{ 0xd10837e3, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0xa97b1f9e, __VMLINUX_SYMBOL_STR(pnfs_ld_read_done) },
	{ 0xc43bba6d, __VMLINUX_SYMBOL_STR(alloc_page_buffers) },
	{ 0xbb47f84c, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xbf4967a5, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
	{ 0x30196f57, __VMLINUX_SYMBOL_STR(bh_uptodate_or_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,nfs,sunrpc";


MODULE_INFO(srcversion, "A54565B2572B49D84080528");

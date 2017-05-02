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
	{ 0x47fbe397, __VMLINUX_SYMBOL_STR(get_acl) },
	{ 0xf0bcdc51, __VMLINUX_SYMBOL_STR(forget_cached_acl) },
	{        0, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x74a97a6c, __VMLINUX_SYMBOL_STR(nfs_unlink) },
	{ 0x5236ed77, __VMLINUX_SYMBOL_STR(nfs_symlink) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{        0, __VMLINUX_SYMBOL_STR(generic_getxattr) },
	{ 0x1523f6e3, __VMLINUX_SYMBOL_STR(xdr_stream_pos) },
	{ 0x8a6319d6, __VMLINUX_SYMBOL_STR(nfs_refresh_inode) },
	{ 0xa272f7c5, __VMLINUX_SYMBOL_STR(nfs_close_context) },
	{ 0x96f82109, __VMLINUX_SYMBOL_STR(nfs_free_client) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x485c0398, __VMLINUX_SYMBOL_STR(nfs_try_mount) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x6344793b, __VMLINUX_SYMBOL_STR(posix_acl_access_xattr_handler) },
	{ 0xe54c9d56, __VMLINUX_SYMBOL_STR(nfs_permission) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x378a8460, __VMLINUX_SYMBOL_STR(nfs_post_op_update_inode_force_wcc) },
	{ 0xbf7fd2f5, __VMLINUX_SYMBOL_STR(schedule_timeout_killable) },
	{ 0x1247752a, __VMLINUX_SYMBOL_STR(nfs_link) },
	{ 0x236c92a5, __VMLINUX_SYMBOL_STR(xdr_inline_pages) },
	{ 0x68b21452, __VMLINUX_SYMBOL_STR(rpc_restart_call) },
	{ 0x3f2a0f29, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x85e2d0b, __VMLINUX_SYMBOL_STR(nfs_instantiate) },
	{ 0x9c9658b5, __VMLINUX_SYMBOL_STR(nfs_sops) },
	{ 0xe6cdd70e, __VMLINUX_SYMBOL_STR(nfs_setattr_update_inode) },
	{ 0xd9a13574, __VMLINUX_SYMBOL_STR(unregister_nfs_version) },
	{ 0xb1f2a759, __VMLINUX_SYMBOL_STR(generic_setxattr) },
	{ 0xdd3d5b1, __VMLINUX_SYMBOL_STR(nfs_rmdir) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe9674d94, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xfb7ee006, __VMLINUX_SYMBOL_STR(nfs_alloc_fattr) },
	{ 0x28124e6f, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x9480f35, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0xb606e716, __VMLINUX_SYMBOL_STR(nfs_fattr_init) },
	{ 0xe046b6ae, __VMLINUX_SYMBOL_STR(xdr_terminate_string) },
	{ 0xfa8bf3f0, __VMLINUX_SYMBOL_STR(nfs_setattr) },
	{ 0x2084dce, __VMLINUX_SYMBOL_STR(nfs_fs_type) },
	{ 0xdaf23bd8, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xa083237b, __VMLINUX_SYMBOL_STR(rpc_call_sync) },
	{ 0xa6df4428, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x17f02011, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x20baf878, __VMLINUX_SYMBOL_STR(register_nfs_version) },
	{ 0x368e3513, __VMLINUX_SYMBOL_STR(rpc_bind_new_program) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4096bf3b, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0xc5a6d081, __VMLINUX_SYMBOL_STR(nfs_zap_acl_cache) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7228851, __VMLINUX_SYMBOL_STR(nfs_getattr) },
	{ 0x60df1e3b, __VMLINUX_SYMBOL_STR(posix_acl_equiv_mode) },
	{ 0xaa0a1ac, __VMLINUX_SYMBOL_STR(nfs_invalidate_atime) },
	{ 0x8829c4ae, __VMLINUX_SYMBOL_STR(set_cached_acl) },
	{ 0x1f40a40d, __VMLINUX_SYMBOL_STR(posix_acl_create) },
	{ 0x89a21e01, __VMLINUX_SYMBOL_STR(generic_removexattr) },
	{ 0xeb4a889f, __VMLINUX_SYMBOL_STR(nfsacl_encode) },
	{ 0x8c578caf, __VMLINUX_SYMBOL_STR(nfs_lookup) },
	{ 0x857e0d37, __VMLINUX_SYMBOL_STR(nfs_rename) },
	{ 0x6c069d81, __VMLINUX_SYMBOL_STR(nfs_file_operations) },
	{ 0xea248cef, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xdaf2fd26, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xdc29ba15, __VMLINUX_SYMBOL_STR(nfs_revalidate_inode) },
	{ 0x4f5e346c, __VMLINUX_SYMBOL_STR(nfs_mkdir) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xda4d336f, __VMLINUX_SYMBOL_STR(nfs_create) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc83b4d5b, __VMLINUX_SYMBOL_STR(posix_acl_from_mode) },
	{ 0xa3432466, __VMLINUX_SYMBOL_STR(nfsacl_decode) },
	{ 0xc9570a33, __VMLINUX_SYMBOL_STR(xdr_read_pages) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x831eca9, __VMLINUX_SYMBOL_STR(nfs_post_op_update_inode) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5460a468, __VMLINUX_SYMBOL_STR(nfs_init_client) },
	{ 0xab18c7f5, __VMLINUX_SYMBOL_STR(nfs_create_server) },
	{ 0x49935229, __VMLINUX_SYMBOL_STR(nfs_mknod) },
	{ 0x4b57c59b, __VMLINUX_SYMBOL_STR(posix_acl_default_xattr_handler) },
	{ 0x9245d8eb, __VMLINUX_SYMBOL_STR(nfs_submount) },
	{ 0xf13753cc, __VMLINUX_SYMBOL_STR(forget_all_cached_acls) },
	{ 0xa0d7d0e0, __VMLINUX_SYMBOL_STR(nfs_pageio_init_read) },
	{ 0x2f6b6886, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0x6fdfb152, __VMLINUX_SYMBOL_STR(nfs_pageio_init_write) },
	{ 0x459693ae, __VMLINUX_SYMBOL_STR(nfs_wb_all) },
	{ 0xca31a43a, __VMLINUX_SYMBOL_STR(nfs_access_zap_cache) },
	{ 0x2a64fbdb, __VMLINUX_SYMBOL_STR(xdr_write_pages) },
	{ 0x2ef65c36, __VMLINUX_SYMBOL_STR(nfs_dentry_operations) },
	{ 0x24a5b9d0, __VMLINUX_SYMBOL_STR(nfs_alloc_client) },
	{ 0x4a1bd513, __VMLINUX_SYMBOL_STR(nlmclnt_proc) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x34d23216, __VMLINUX_SYMBOL_STR(nfs_clone_server) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfs,sunrpc,nfs_acl,lockd";


MODULE_INFO(srcversion, "C5174C85C985067C12BC317");

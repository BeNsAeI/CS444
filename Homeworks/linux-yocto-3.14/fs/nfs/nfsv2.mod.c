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
	{ 0x74a97a6c, __VMLINUX_SYMBOL_STR(nfs_unlink) },
	{ 0x5236ed77, __VMLINUX_SYMBOL_STR(nfs_symlink) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8a6319d6, __VMLINUX_SYMBOL_STR(nfs_refresh_inode) },
	{ 0xa272f7c5, __VMLINUX_SYMBOL_STR(nfs_close_context) },
	{ 0x96f82109, __VMLINUX_SYMBOL_STR(nfs_free_client) },
	{ 0x485c0398, __VMLINUX_SYMBOL_STR(nfs_try_mount) },
	{ 0xe54c9d56, __VMLINUX_SYMBOL_STR(nfs_permission) },
	{ 0x378a8460, __VMLINUX_SYMBOL_STR(nfs_post_op_update_inode_force_wcc) },
	{ 0x1247752a, __VMLINUX_SYMBOL_STR(nfs_link) },
	{ 0x236c92a5, __VMLINUX_SYMBOL_STR(xdr_inline_pages) },
	{ 0x3f2a0f29, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x85e2d0b, __VMLINUX_SYMBOL_STR(nfs_instantiate) },
	{ 0x9c9658b5, __VMLINUX_SYMBOL_STR(nfs_sops) },
	{ 0xe6cdd70e, __VMLINUX_SYMBOL_STR(nfs_setattr_update_inode) },
	{ 0xd9a13574, __VMLINUX_SYMBOL_STR(unregister_nfs_version) },
	{ 0xdd3d5b1, __VMLINUX_SYMBOL_STR(nfs_rmdir) },
	{ 0xe9674d94, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xfb7ee006, __VMLINUX_SYMBOL_STR(nfs_alloc_fattr) },
	{ 0x28124e6f, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xb606e716, __VMLINUX_SYMBOL_STR(nfs_fattr_init) },
	{ 0xe046b6ae, __VMLINUX_SYMBOL_STR(xdr_terminate_string) },
	{ 0xfa8bf3f0, __VMLINUX_SYMBOL_STR(nfs_setattr) },
	{ 0x2084dce, __VMLINUX_SYMBOL_STR(nfs_fs_type) },
	{ 0xdaf23bd8, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xa083237b, __VMLINUX_SYMBOL_STR(rpc_call_sync) },
	{ 0xa6df4428, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0x20baf878, __VMLINUX_SYMBOL_STR(register_nfs_version) },
	{ 0x4096bf3b, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7228851, __VMLINUX_SYMBOL_STR(nfs_getattr) },
	{ 0xaa0a1ac, __VMLINUX_SYMBOL_STR(nfs_invalidate_atime) },
	{ 0x26884ff7, __VMLINUX_SYMBOL_STR(nfs_alloc_fhandle) },
	{ 0x8c578caf, __VMLINUX_SYMBOL_STR(nfs_lookup) },
	{ 0x857e0d37, __VMLINUX_SYMBOL_STR(nfs_rename) },
	{ 0x6c069d81, __VMLINUX_SYMBOL_STR(nfs_file_operations) },
	{ 0xdaf2fd26, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x4f5e346c, __VMLINUX_SYMBOL_STR(nfs_mkdir) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xda4d336f, __VMLINUX_SYMBOL_STR(nfs_create) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc9570a33, __VMLINUX_SYMBOL_STR(xdr_read_pages) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5460a468, __VMLINUX_SYMBOL_STR(nfs_init_client) },
	{ 0xab18c7f5, __VMLINUX_SYMBOL_STR(nfs_create_server) },
	{ 0x49935229, __VMLINUX_SYMBOL_STR(nfs_mknod) },
	{ 0x9245d8eb, __VMLINUX_SYMBOL_STR(nfs_submount) },
	{ 0xa0d7d0e0, __VMLINUX_SYMBOL_STR(nfs_pageio_init_read) },
	{ 0x2f6b6886, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0x6fdfb152, __VMLINUX_SYMBOL_STR(nfs_pageio_init_write) },
	{ 0x459693ae, __VMLINUX_SYMBOL_STR(nfs_wb_all) },
	{ 0x2a64fbdb, __VMLINUX_SYMBOL_STR(xdr_write_pages) },
	{ 0x2ef65c36, __VMLINUX_SYMBOL_STR(nfs_dentry_operations) },
	{ 0x24a5b9d0, __VMLINUX_SYMBOL_STR(nfs_alloc_client) },
	{ 0x4a1bd513, __VMLINUX_SYMBOL_STR(nlmclnt_proc) },
	{ 0x34d23216, __VMLINUX_SYMBOL_STR(nfs_clone_server) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfs,sunrpc,lockd";


MODULE_INFO(srcversion, "DF86967F1AA5208E0DB7CE8");

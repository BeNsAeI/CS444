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
	{ 0xaf00d247, __VMLINUX_SYMBOL_STR(fat_detach) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x97321d0e, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xc868828b, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0xf2966369, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x9958b9a0, __VMLINUX_SYMBOL_STR(fat_flush_inodes) },
	{ 0x9d23c1ba, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf086ecb2, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x341a3690, __VMLINUX_SYMBOL_STR(fat_sync_inode) },
	{ 0x1c1cfab1, __VMLINUX_SYMBOL_STR(fat_add_entries) },
	{ 0x33abba39, __VMLINUX_SYMBOL_STR(fat_remove_entries) },
	{ 0xff6dce98, __VMLINUX_SYMBOL_STR(fat_alloc_new_dir) },
	{ 0xce1b4574, __VMLINUX_SYMBOL_STR(fat_fill_super) },
	{ 0x2d7310f0, __VMLINUX_SYMBOL_STR(fat_build_inode) },
	{ 0x7886fb15, __VMLINUX_SYMBOL_STR(fat_attach) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xad4edda, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xa8288a65, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x7e84509, __VMLINUX_SYMBOL_STR(fat_getattr) },
	{ 0xda96b76d, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xd73c65d6, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x6b756a38, __VMLINUX_SYMBOL_STR(fat_scan) },
	{ 0xba797153, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xcea7a72e, __VMLINUX_SYMBOL_STR(__fat_fs_error) },
	{ 0xbfe59182, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x3eea40fb, __VMLINUX_SYMBOL_STR(fat_setattr) },
	{ 0xe4c844a6, __VMLINUX_SYMBOL_STR(fat_free_clusters) },
	{ 0x4aa80345, __VMLINUX_SYMBOL_STR(fat_get_dotdot_entry) },
	{ 0x7b22ce17, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x27d692c3, __VMLINUX_SYMBOL_STR(fat_time_unix2fat) },
	{ 0x9f156742, __VMLINUX_SYMBOL_STR(fat_dir_empty) },
	{ 0x1a7ce1b9, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x6f2bc228, __VMLINUX_SYMBOL_STR(clear_nlink) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fat";


MODULE_INFO(srcversion, "8F7AADEA0FD8C97BB3543D8");

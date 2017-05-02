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
	{ 0x537143a2, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0xa82ded68, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xbe728f5f, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xbafbf0b1, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x188a3dfb, __VMLINUX_SYMBOL_STR(timespec_trunc) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb10ea1e5, __VMLINUX_SYMBOL_STR(simple_write_end) },
	{ 0x5a280cde, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0xc17f2673, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0x52cbb014, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xa263917, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x9d23c1ba, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2bc3227e, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0xd72edc5d, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xfad70f97, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x2f171b8e, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0x576b5a0e, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0x36ad3ae3, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x5ce5b858, __VMLINUX_SYMBOL_STR(simple_write_begin) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xacee0f2e, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x8ac2efab, __VMLINUX_SYMBOL_STR(bdi_init) },
	{ 0xd6d36ae7, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xa61b3d59, __VMLINUX_SYMBOL_STR(simple_readpage) },
	{ 0x725c9955, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x4741a933, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x287c85fd, __VMLINUX_SYMBOL_STR(simple_unlink) },
	{ 0xbc8241e9, __VMLINUX_SYMBOL_STR(simple_setattr) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{        0, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x556073d2, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xeff3f384, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x24fcb3b4, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xba797153, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x22e13fb8, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0xd7317d, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7a39a713, __VMLINUX_SYMBOL_STR(iunique) },
	{ 0x55e0acb9, __VMLINUX_SYMBOL_STR(always_delete_dentry) },
	{ 0xbf955900, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0xbb79dce5, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x8608ddcb, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x506f6166, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0xfebd6590, __VMLINUX_SYMBOL_STR(bdi_destroy) },
	{ 0x7b22ce17, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5beec9af, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x1a7ce1b9, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xbb47f84c, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xcbbf3768, __VMLINUX_SYMBOL_STR(simple_rmdir) },
	{ 0x610059cc, __VMLINUX_SYMBOL_STR(__d_drop) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DC343C23C059E620E9187E1");

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
	{ 0xa82ded68, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x71ea8754, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf37509e0, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0x77ecac9f, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0xb558172, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0x24de2513, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x80eaf73b, __VMLINUX_SYMBOL_STR(grab_cache_page_nowait) },
	{ 0x58f2bec7, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x3f2a0f29, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf086ecb2, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0xd72edc5d, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x28124e6f, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1c51fc5d, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0xe5b2894f, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe90a0714, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xd6d36ae7, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xad4edda, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x7d5c20a8, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0xcecb2661, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x154c8b30, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x881039d0, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0xa4fc6e2a, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x8d930007, __VMLINUX_SYMBOL_STR(page_follow_link_light) },
	{ 0x4741a933, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9c85c98f, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xdaf2fd26, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd5ddde83, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xd73c65d6, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x24fcb3b4, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xba797153, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4211c3c1, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xd7317d, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xbfe59182, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xbf955900, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x312ca88d, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xbb79dce5, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x7b22ce17, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xbd5ebbe5, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x5beec9af, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x59b5d5f5, __VMLINUX_SYMBOL_STR(__getblk) },
	{ 0x6308b045, __VMLINUX_SYMBOL_STR(page_put_link) },
	{ 0x2c9b5907, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "29A26C869A46FA6161005FC");

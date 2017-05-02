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
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x98e732b3, __VMLINUX_SYMBOL_STR(vfs_getattr_nosec) },
	{ 0xa2441376, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0x52cbb014, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xa263917, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x779b575f, __VMLINUX_SYMBOL_STR(dentry_open) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9e44ca72, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1f4fe7de, __VMLINUX_SYMBOL_STR(iterate_dir) },
	{ 0xc6613614, __VMLINUX_SYMBOL_STR(lookup_one_len) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7BD210BDFB5A213BD108067");

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
	{ 0xe9d62ff7, __VMLINUX_SYMBOL_STR(del_mtd_blktrans_dev) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfb8cf6f8, __VMLINUX_SYMBOL_STR(mtd_block_isbad) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x183b98e6, __VMLINUX_SYMBOL_STR(add_mtd_blktrans_dev) },
	{ 0x307e66cc, __VMLINUX_SYMBOL_STR(register_mtd_blktrans) },
	{ 0xb8f797fc, __VMLINUX_SYMBOL_STR(mtd_erase) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x755e21fd, __VMLINUX_SYMBOL_STR(mtd_read) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x52ef4b41, __VMLINUX_SYMBOL_STR(mtd_block_markbad) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfd035b79, __VMLINUX_SYMBOL_STR(deregister_mtd_blktrans) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4c7d7d6, __VMLINUX_SYMBOL_STR(mtd_read_oob) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd_blkdevs";


MODULE_INFO(srcversion, "0F31C26D460B87EE4E35807");

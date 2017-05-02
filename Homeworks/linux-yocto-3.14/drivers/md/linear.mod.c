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
	{ 0x4aed417f, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0xfde83eee, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x2b6d7db1, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x2a37e04b, __VMLINUX_SYMBOL_STR(blk_queue_merge_bvec) },
	{ 0x8bf33a96, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x304e69d1, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x29056d69, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x4873fa8b, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2b6b74e8, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0x6c5bdfce, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0xe074eaee, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0x83fd2abc, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0xfd7d1c12, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x4e779aad, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9c85c98f, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x7cd23261, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5d84c117, __VMLINUX_SYMBOL_STR(blk_sync_queue) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xa05f372e, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FC8C60A66E75FD161280493");

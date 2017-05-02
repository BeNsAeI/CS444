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
	{ 0x2cc082e9, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0x1c3222cb, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0xb8066f4c, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x5bac023e, __VMLINUX_SYMBOL_STR(default_qdisc_ops) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x99037a19, __VMLINUX_SYMBOL_STR(dev_deactivate) },
	{ 0x31d8990, __VMLINUX_SYMBOL_STR(dev_activate) },
	{ 0xf3694f68, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0x3563b5fc, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xda2c21c8, __VMLINUX_SYMBOL_STR(qdisc_list_add) },
	{ 0x3d31f313, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0xc0f2b34e, __VMLINUX_SYMBOL_STR(dev_graft_qdisc) },
	{ 0x1a123ca5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa8f676e8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "41018CEC026BA3F81E5A036");

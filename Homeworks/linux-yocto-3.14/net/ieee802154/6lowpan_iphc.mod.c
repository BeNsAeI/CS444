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
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xc28ffb0e, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe2d0cf17, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x450df313, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x79a38e61, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7d52f354, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E8EFBA94F1CCFC298A98897");

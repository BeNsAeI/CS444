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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x26472b0, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x34654e15, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc28ffb0e, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x54cc1e5b, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "995AF73C7791E9D8794F64A");

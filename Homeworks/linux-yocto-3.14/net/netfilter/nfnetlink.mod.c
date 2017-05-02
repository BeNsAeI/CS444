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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xbfe0e719, __VMLINUX_SYMBOL_STR(netlink_has_listeners) },
	{ 0xea11c617, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe25187e8, __VMLINUX_SYMBOL_STR(nlmsg_notify) },
	{ 0x9fc4d620, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbaf43a7c, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x7adebab, __VMLINUX_SYMBOL_STR(netlink_rcv_skb) },
	{ 0xdcb0681, __VMLINUX_SYMBOL_STR(netlink_alloc_skb) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xb2ee1ebb, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xe2d0cf17, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x50d24064, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x861fac08, __VMLINUX_SYMBOL_STR(netlink_ack) },
	{ 0xbb7dca3, __VMLINUX_SYMBOL_STR(netlink_set_err) },
	{ 0x97443ab5, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x8fadfe52, __VMLINUX_SYMBOL_STR(netlink_net_capable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A25CAAC4AF80A097E21D04F");

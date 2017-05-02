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
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xe5867808, __VMLINUX_SYMBOL_STR(dlci_ioctl_set) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc28ffb0e, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xe5998f20, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xe2d0cf17, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x312ed10d, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x2cb48c0d, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x874a8ab7, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xb4c25469, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x4e228a09, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfae0472b, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
	{ 0xc6121fd4, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x724f0b57, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x56721741, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6F9B094C89F1D3F73F5E5A7");

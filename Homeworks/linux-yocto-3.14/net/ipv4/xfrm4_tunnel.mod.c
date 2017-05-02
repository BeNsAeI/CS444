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
	{ 0xda7c09ad, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0xf9a67454, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xe876ecae, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x146587fe, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2d8d8fbb, __VMLINUX_SYMBOL_STR(xfrm4_rcv_encap) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel4";


MODULE_INFO(srcversion, "BE38A7F5AB1543CF3B8EFAF");

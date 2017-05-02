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
	{ 0xf1f7a000, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0xf4e6c434, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2f03fc4b, __VMLINUX_SYMBOL_STR(security_secmark_refcount_inc) },
	{ 0x23a574fd, __VMLINUX_SYMBOL_STR(security_secmark_relabel_packet) },
	{ 0x62827bec, __VMLINUX_SYMBOL_STR(security_secctx_to_secid) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x19bd383b, __VMLINUX_SYMBOL_STR(security_secmark_refcount_dec) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BBD136396A204BB83272279");

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
	{ 0x2b4b7ed8, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0xc76b266b, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0x20b23935, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0xe5f3eaa4, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0xf81fc78a, __VMLINUX_SYMBOL_STR(ip_set_test) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x89632975, __VMLINUX_SYMBOL_STR(ip_set_nfnl_get_byindex) },
	{ 0xd146ce5d, __VMLINUX_SYMBOL_STR(ip_set_nfnl_put) },
	{ 0x78ac1ba3, __VMLINUX_SYMBOL_STR(ip_set_del) },
	{ 0x534da2af, __VMLINUX_SYMBOL_STR(ip_set_add) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_set";


MODULE_INFO(srcversion, "7285E890B1F92818CBD54A2");

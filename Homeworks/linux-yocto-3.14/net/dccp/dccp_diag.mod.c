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
	{ 0xbe3e61ee, __VMLINUX_SYMBOL_STR(inet_diag_dump_icsk) },
	{ 0xa12faeb0, __VMLINUX_SYMBOL_STR(dccp_hashinfo) },
	{ 0x421e5eed, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xa43b0e98, __VMLINUX_SYMBOL_STR(inet_diag_dump_one_icsk) },
	{ 0x1a64c183, __VMLINUX_SYMBOL_STR(inet_diag_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag,dccp";


MODULE_INFO(srcversion, "7F6BB6D6F594384409A8C1D");

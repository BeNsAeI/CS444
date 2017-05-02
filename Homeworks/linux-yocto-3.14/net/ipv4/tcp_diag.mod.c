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
	{ 0x421e5eed, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0x1a64c183, __VMLINUX_SYMBOL_STR(inet_diag_register) },
	{ 0xbe3e61ee, __VMLINUX_SYMBOL_STR(inet_diag_dump_icsk) },
	{ 0xa43b0e98, __VMLINUX_SYMBOL_STR(inet_diag_dump_one_icsk) },
	{ 0x99588c9c, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x4ac63bf, __VMLINUX_SYMBOL_STR(tcp_get_info) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag";


MODULE_INFO(srcversion, "4FE17A47EA181DB5CD7B966");

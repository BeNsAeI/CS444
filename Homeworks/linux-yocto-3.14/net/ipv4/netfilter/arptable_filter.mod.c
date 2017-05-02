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
	{ 0x6b393e70, __VMLINUX_SYMBOL_STR(xt_hook_unlink) },
	{ 0x9fc4d620, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x36ce0030, __VMLINUX_SYMBOL_STR(xt_hook_link) },
	{ 0x50d24064, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6dc75726, __VMLINUX_SYMBOL_STR(arpt_register_table) },
	{ 0xca6175a7, __VMLINUX_SYMBOL_STR(arpt_alloc_initial_table) },
	{ 0xd8a216e3, __VMLINUX_SYMBOL_STR(arpt_unregister_table) },
	{ 0x71ea33d1, __VMLINUX_SYMBOL_STR(arpt_do_table) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=arp_tables";


MODULE_INFO(srcversion, "1AF7785D32E118766C6BBEB");

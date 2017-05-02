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
	{ 0xed58b151, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0x3982e883, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0x410b01e1, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0xad91d416, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x7e750ff1, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B0A69C1C53672FE7CAACBE5");

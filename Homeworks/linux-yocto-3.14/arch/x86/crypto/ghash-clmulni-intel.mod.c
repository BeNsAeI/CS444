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
	{ 0x6c0dae5, __VMLINUX_SYMBOL_STR(__kernel_fpu_end) },
	{ 0xd9ea3bb8, __VMLINUX_SYMBOL_STR(shash_ahash_digest) },
	{ 0xcdb7d12, __VMLINUX_SYMBOL_STR(__kernel_fpu_begin) },
	{ 0x841a4447, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x9b359785, __VMLINUX_SYMBOL_STR(crypto_ahash_final) },
	{ 0xceb753f, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x6918071b, __VMLINUX_SYMBOL_STR(cryptd_shash_desc) },
	{ 0xda4c333e, __VMLINUX_SYMBOL_STR(crypto_register_ahash) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x87b61a9c, __VMLINUX_SYMBOL_STR(crypto_unregister_shash) },
	{ 0xb349429e, __VMLINUX_SYMBOL_STR(crypto_register_shash) },
	{ 0xab6207e6, __VMLINUX_SYMBOL_STR(crypto_unregister_ahash) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x4ed96ca4, __VMLINUX_SYMBOL_STR(cryptd_ahash_child) },
	{ 0xf1ff72f7, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x188cf94a, __VMLINUX_SYMBOL_STR(shash_ahash_update) },
	{ 0x73dd54eb, __VMLINUX_SYMBOL_STR(irq_fpu_usable) },
	{ 0x190e25d0, __VMLINUX_SYMBOL_STR(cryptd_alloc_ahash) },
	{ 0x2b3cb842, __VMLINUX_SYMBOL_STR(cryptd_free_ahash) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0xff882b60, __VMLINUX_SYMBOL_STR(crypto_ahash_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cryptd";

MODULE_ALIAS("x86cpu:vendor:*:family:*:model:*:feature:*0081*");

MODULE_INFO(srcversion, "9B0F43A24F59089DB9E8F2C");

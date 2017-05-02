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
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x8c05869c, __VMLINUX_SYMBOL_STR(crypto_init_ahash_spawn) },
	{ 0x39a09e8b, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x23aa11ee, __VMLINUX_SYMBOL_STR(ahash_attr_alg) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x60204888, __VMLINUX_SYMBOL_STR(crypto_grab_skcipher) },
	{ 0xf07fb840, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xcce81f2d, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0xecaeca86, __VMLINUX_SYMBOL_STR(crypto_aead_type) },
	{ 0xb903674c, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0xdc3c41a8, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0xceb753f, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0xfe79bf98, __VMLINUX_SYMBOL_STR(crypto_ahash_finup) },
	{ 0xdd62793e, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xdbff19f7, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0x43b7c7de, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfd685779, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf1ff72f7, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F7B0C2D0B2DC3E3AF1914B6");

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
	{ 0xf07fb840, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xdd62793e, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x15ddbdc, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xf1ff72f7, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xecaeca86, __VMLINUX_SYMBOL_STR(crypto_aead_type) },
	{ 0x39a09e8b, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x8c05869c, __VMLINUX_SYMBOL_STR(crypto_init_ahash_spawn) },
	{ 0x35494e8d, __VMLINUX_SYMBOL_STR(crypto_find_alg) },
	{ 0xff882b60, __VMLINUX_SYMBOL_STR(crypto_ahash_type) },
	{ 0x60204888, __VMLINUX_SYMBOL_STR(crypto_grab_skcipher) },
	{ 0xba3b9bd1, __VMLINUX_SYMBOL_STR(crypto_nivaead_type) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf3cc9549, __VMLINUX_SYMBOL_STR(crypto_grab_aead) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfd685779, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xdc3c41a8, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0x9b359785, __VMLINUX_SYMBOL_STR(crypto_ahash_final) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0xcce81f2d, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x43b7c7de, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xbf359ae9, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xb903674c, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdbff19f7, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AA5937834661F7DFA3D69FC");

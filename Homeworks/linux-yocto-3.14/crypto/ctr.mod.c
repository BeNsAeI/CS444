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
	{ 0xecb17895, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x60204888, __VMLINUX_SYMBOL_STR(crypto_grab_skcipher) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0x39a09e8b, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0xed58b151, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0x15a8ffee, __VMLINUX_SYMBOL_STR(crypto_alloc_instance) },
	{ 0x914e6d2d, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xad91d416, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x45bf1ff3, __VMLINUX_SYMBOL_STR(crypto_inc) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0x8d2e3454, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt_block) },
	{ 0xcce81f2d, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x43b7c7de, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdbff19f7, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8BB23D13592D963AE950756");

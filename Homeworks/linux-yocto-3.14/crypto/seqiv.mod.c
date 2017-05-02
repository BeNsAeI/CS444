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
	{ 0x33d38d0a, __VMLINUX_SYMBOL_STR(aead_geniv_init) },
	{ 0xd44ff416, __VMLINUX_SYMBOL_STR(skcipher_geniv_exit) },
	{ 0x39b2ac21, __VMLINUX_SYMBOL_STR(skcipher_geniv_alloc) },
	{ 0x56198f3e, __VMLINUX_SYMBOL_STR(aead_geniv_exit) },
	{ 0xa451e07a, __VMLINUX_SYMBOL_STR(aead_geniv_alloc) },
	{ 0x6ff607b6, __VMLINUX_SYMBOL_STR(crypto_get_default_rng) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xccba526c, __VMLINUX_SYMBOL_STR(crypto_default_rng) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0xc220672a, __VMLINUX_SYMBOL_STR(skcipher_geniv_init) },
	{ 0x4d452e45, __VMLINUX_SYMBOL_STR(skcipher_geniv_free) },
	{ 0x668402aa, __VMLINUX_SYMBOL_STR(crypto_put_default_rng) },
	{ 0x89782cf8, __VMLINUX_SYMBOL_STR(aead_geniv_free) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2EDEC2D8435A18270678D1D");

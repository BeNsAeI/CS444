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
	{ 0x914e6d2d, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8f02ac4d, __VMLINUX_SYMBOL_STR(glue_xts_crypt_128bit_one) },
	{ 0xe409b491, __VMLINUX_SYMBOL_STR(crypto_aes_decrypt_x86) },
	{ 0x7060bf0a, __VMLINUX_SYMBOL_STR(crypto_aes_encrypt_x86) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0x3982e883, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0x6c0dae5, __VMLINUX_SYMBOL_STR(__kernel_fpu_end) },
	{ 0x39a09e8b, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0xecb17895, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0x5ac67800, __VMLINUX_SYMBOL_STR(lrw_crypt) },
	{ 0x8d2e3454, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt_block) },
	{ 0xc715d9e0, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xf9d2f617, __VMLINUX_SYMBOL_STR(glue_xts_crypt_128bit) },
	{ 0xf07fb840, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x473ff83f, __VMLINUX_SYMBOL_STR(cryptd_free_aead) },
	{ 0xcdb7d12, __VMLINUX_SYMBOL_STR(__kernel_fpu_begin) },
	{ 0xed58b151, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0xcce81f2d, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xcd074900, __VMLINUX_SYMBOL_STR(lrw_init_table) },
	{ 0xecaeca86, __VMLINUX_SYMBOL_STR(crypto_aead_type) },
	{ 0xb903674c, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0xdc3c41a8, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x24aac4d9, __VMLINUX_SYMBOL_STR(crypto_aes_expand_key) },
	{ 0x572b72d8, __VMLINUX_SYMBOL_STR(crypto_alloc_ablkcipher) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdd62793e, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x15ddbdc, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xfdccfa3d, __VMLINUX_SYMBOL_STR(ablk_exit) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xdbff19f7, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xba3b9bd1, __VMLINUX_SYMBOL_STR(crypto_nivaead_type) },
	{ 0x4280929d, __VMLINUX_SYMBOL_STR(ablk_init_common) },
	{ 0x952390ec, __VMLINUX_SYMBOL_STR(ablk_encrypt) },
	{ 0x8b5732a7, __VMLINUX_SYMBOL_STR(ablk_init) },
	{ 0x15a8ffee, __VMLINUX_SYMBOL_STR(crypto_alloc_instance) },
	{ 0x43b7c7de, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xb5d5bfde, __VMLINUX_SYMBOL_STR(ablk_set_key) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x3864eb66, __VMLINUX_SYMBOL_STR(lrw_free_table) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x410b01e1, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0x56886b19, __VMLINUX_SYMBOL_STR(scatterwalk_map) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x7e750ff1, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0x424acc6d, __VMLINUX_SYMBOL_STR(scatterwalk_done) },
	{ 0x73dd54eb, __VMLINUX_SYMBOL_STR(irq_fpu_usable) },
	{ 0x3eb9fdd2, __VMLINUX_SYMBOL_STR(cryptd_aead_child) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xad91d416, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x45bf1ff3, __VMLINUX_SYMBOL_STR(crypto_inc) },
	{ 0x9400a5d, __VMLINUX_SYMBOL_STR(cryptd_alloc_aead) },
	{ 0x53131386, __VMLINUX_SYMBOL_STR(ablk_decrypt) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0xfa1f4662, __VMLINUX_SYMBOL_STR(scatterwalk_start) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=glue_helper,aes-x86_64,lrw,cryptd,ablk_helper";

MODULE_ALIAS("x86cpu:vendor:*:family:*:model:*:feature:*0099*");

MODULE_INFO(srcversion, "E2524619786B1CA37EE3AF3");

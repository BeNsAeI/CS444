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
	{ 0xd292977c, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x228e79fb, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x28c17900, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xdb7d40b2, __VMLINUX_SYMBOL_STR(drm_property_create_range) },
	{ 0x9fbb98c, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0xb95beb55, __VMLINUX_SYMBOL_STR(drm_object_property_set_value) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f7df3a7, __VMLINUX_SYMBOL_STR(drm_object_attach_property) },
	{ 0x8cedee9a, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0xf5b5d961, __VMLINUX_SYMBOL_STR(drm_mode_create_tv_properties) },
	{ 0xd70bf7d1, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2116c85, __VMLINUX_SYMBOL_STR(drm_i2c_encoder_destroy) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa8894d00, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x58748994, __VMLINUX_SYMBOL_STR(drm_mode_set_config_internal) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb0d768a4, __VMLINUX_SYMBOL_STR(drm_property_destroy) },
	{ 0x11f42cd9, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-core,drm,drm_kms_helper";

MODULE_ALIAS("i2c:ch7006");

MODULE_INFO(srcversion, "129DBEF1E9B46025B14FDD7");

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
	{ 0x627d7782, __VMLINUX_SYMBOL_STR(acpi_bus_unregister_driver) },
	{ 0x8b4cda62, __VMLINUX_SYMBOL_STR(acpi_bus_register_driver) },
	{ 0xab30892f, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xe8cd8cbd, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0xe8ffc674, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xc00d2030, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x27621d88, __VMLINUX_SYMBOL_STR(sparse_keymap_setup) },
	{ 0x7c0c0c6b, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x314ef42d, __VMLINUX_SYMBOL_STR(sparse_keymap_report_event) },
	{ 0x691001b5, __VMLINUX_SYMBOL_STR(acpi_evaluate_integer) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xb4a806ac, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xae85caa4, __VMLINUX_SYMBOL_STR(sparse_keymap_free) },
	{ 0xadba87ec, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0x51b9a7be, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x44a81d5f, __VMLINUX_SYMBOL_STR(acpi_evaluate_object) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sparse-keymap";

MODULE_ALIAS("acpi*:MAT0012:*");
MODULE_ALIAS("acpi*:MAT0013:*");
MODULE_ALIAS("acpi*:MAT0018:*");
MODULE_ALIAS("acpi*:MAT0019:*");

MODULE_INFO(srcversion, "CB6F5A49131C7F706795041");

#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x43804739, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe64e04d3, __VMLINUX_SYMBOL_STR(bus_find_device_by_name) },
	{ 0x82a4a25c, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_unregister_supply_alias) },
	{ 0x945491d7, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_register_supply_alias) },
	{ 0xd87555c3, __VMLINUX_SYMBOL_STR(platform_bus_type) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x2698a279, __VMLINUX_SYMBOL_STR(irq_create_mapping) },
	{ 0xdb110ce1, __VMLINUX_SYMBOL_STR(pm_runtime_no_callbacks) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x406b83bd, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x9f28736c, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf593fb41, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x8ffd8ea8, __VMLINUX_SYMBOL_STR(platform_device_add_resources) },
	{ 0x577f8e26, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xf8a9d764, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xaea976a8, __VMLINUX_SYMBOL_STR(acpi_check_resource_conflict) },
	{ 0x535557d0, __VMLINUX_SYMBOL_STR(platform_device_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "94A6A7D7FF8C6C5B76208E5");

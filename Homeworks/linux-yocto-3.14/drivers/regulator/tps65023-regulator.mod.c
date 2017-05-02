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
	{ 0x470987eb, __VMLINUX_SYMBOL_STR(regulator_is_enabled_regmap) },
	{ 0x6cc7b171, __VMLINUX_SYMBOL_STR(regulator_disable_regmap) },
	{ 0x6b46b8b8, __VMLINUX_SYMBOL_STR(regulator_enable_regmap) },
	{ 0xe16bbd98, __VMLINUX_SYMBOL_STR(regulator_map_voltage_ascend) },
	{ 0x864c3db5, __VMLINUX_SYMBOL_STR(regulator_list_voltage_table) },
	{ 0x228e79fb, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xd70bf7d1, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x1d5c7a39, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5502a04a, __VMLINUX_SYMBOL_STR(devm_regulator_register) },
	{ 0x32ebd806, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0x25ca2fcf, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7bb6419b, __VMLINUX_SYMBOL_STR(regulator_set_voltage_sel_regmap) },
	{ 0x682a9232, __VMLINUX_SYMBOL_STR(regulator_get_voltage_sel_regmap) },
	{ 0x6683db90, __VMLINUX_SYMBOL_STR(rdev_get_id) },
	{ 0x6f2c9694, __VMLINUX_SYMBOL_STR(rdev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-core,regmap-i2c";

MODULE_ALIAS("i2c:tps65023");
MODULE_ALIAS("i2c:tps65021");
MODULE_ALIAS("i2c:tps65020");

MODULE_INFO(srcversion, "11BCDF5E999ADE1EAC1FD64");

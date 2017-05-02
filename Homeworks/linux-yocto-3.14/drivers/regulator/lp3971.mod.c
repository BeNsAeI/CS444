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
	{ 0xe16bbd98, __VMLINUX_SYMBOL_STR(regulator_map_voltage_ascend) },
	{ 0x864c3db5, __VMLINUX_SYMBOL_STR(regulator_list_voltage_table) },
	{ 0x228e79fb, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xd70bf7d1, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x5502a04a, __VMLINUX_SYMBOL_STR(devm_regulator_register) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x25ca2fcf, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xdd3dd17f, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x6683db90, __VMLINUX_SYMBOL_STR(rdev_get_id) },
	{ 0x6f2c9694, __VMLINUX_SYMBOL_STR(rdev_get_drvdata) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4f2d8a16, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-core";

MODULE_ALIAS("i2c:lp3971");

MODULE_INFO(srcversion, "C53DF78EFB10F12A6EE35BF");

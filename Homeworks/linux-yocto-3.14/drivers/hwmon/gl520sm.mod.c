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
	{ 0xafad493b, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x228e79fb, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xd70bf7d1, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x447f7cf0, __VMLINUX_SYMBOL_STR(hwmon_device_register) },
	{ 0xab30892f, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xef1c781c, __VMLINUX_SYMBOL_STR(vid_which_vrm) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x25ca2fcf, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x903c239, __VMLINUX_SYMBOL_STR(vid_from_reg) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x51b9a7be, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x64b66bb2, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x4df78246, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0xdd3dd17f, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x94df3ed2, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x4f2d8a16, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-core,hwmon-vid";

MODULE_ALIAS("i2c:gl520sm");

MODULE_INFO(srcversion, "E2CBACE2BDD18A9C2E5009E");

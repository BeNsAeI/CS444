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
	{ 0x228e79fb, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xd70bf7d1, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x923000bc, __VMLINUX_SYMBOL_STR(device_set_wakeup_capable) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xce3a7195, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0xcd92abeb, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x25ca2fcf, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe96d7a26, __VMLINUX_SYMBOL_STR(i2c_smbus_write_i2c_block_data) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xb00c8d6e, __VMLINUX_SYMBOL_STR(rtc_update_irq) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5838f6c9, __VMLINUX_SYMBOL_STR(rtc_valid_tm) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x80ca5026, __VMLINUX_SYMBOL_STR(_bin2bcd) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdd3dd17f, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x4f2d8a16, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xa36aff4d, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0x8bd8b308, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-core";

MODULE_ALIAS("i2c:ds1307");
MODULE_ALIAS("i2c:ds1337");
MODULE_ALIAS("i2c:ds1338");
MODULE_ALIAS("i2c:ds1339");
MODULE_ALIAS("i2c:ds1388");
MODULE_ALIAS("i2c:ds1340");
MODULE_ALIAS("i2c:ds3231");
MODULE_ALIAS("i2c:m41t00");
MODULE_ALIAS("i2c:mcp7941x");
MODULE_ALIAS("i2c:pt7c4338");
MODULE_ALIAS("i2c:rx8025");

MODULE_INFO(srcversion, "EE6762CED034FC1CC7145CB");

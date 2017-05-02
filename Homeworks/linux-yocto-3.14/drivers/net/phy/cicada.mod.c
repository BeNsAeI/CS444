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
	{ 0x87e46099, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0xd75376dc, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0x970be7a6, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0x3ac896a0, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0x4acc34a9, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0x10c7b698, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:????????????1111110001000001????");
MODULE_ALIAS("mdio:????????????11111100010001??????");

MODULE_INFO(srcversion, "5914B325239467B4369F521");

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
	{ 0x71192503, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0x871cb3cb, __VMLINUX_SYMBOL_STR(genphy_suspend) },
	{ 0x970be7a6, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0x3ac896a0, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x4acc34a9, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0x5d807e3f, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x10c7b698, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0x87e46099, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0xd75376dc, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:????001001000011000011011000????");
MODULE_ALIAS("mdio:????001001000011000011011001????");
MODULE_ALIAS("mdio:????001001000011000011000101????");

MODULE_INFO(srcversion, "18169CA0BB2958A311313F1");

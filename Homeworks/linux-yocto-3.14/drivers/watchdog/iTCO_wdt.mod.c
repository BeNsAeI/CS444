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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc41081d9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xcce9b035, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xdc6effc9, __VMLINUX_SYMBOL_STR(iTCO_vendor_pre_start) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x4e133fc, __VMLINUX_SYMBOL_STR(iTCO_vendor_check_noreboot_on) },
	{ 0x6209a322, __VMLINUX_SYMBOL_STR(watchdog_register_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x8f177327, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x83f2502c, __VMLINUX_SYMBOL_STR(watchdog_unregister_device) },
	{ 0xc4f657bf, __VMLINUX_SYMBOL_STR(iTCO_vendor_pre_stop) },
	{ 0xae61b618, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xb5f20875, __VMLINUX_SYMBOL_STR(iTCO_vendor_pre_keepalive) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa78bd894, __VMLINUX_SYMBOL_STR(iTCO_vendor_pre_set_heartbeat) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=iTCO_vendor_support";


MODULE_INFO(srcversion, "5DA3C12011F7169080B5682");

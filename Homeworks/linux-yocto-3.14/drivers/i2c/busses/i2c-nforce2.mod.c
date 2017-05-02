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
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xca7b7a8, __VMLINUX_SYMBOL_STR(acpi_check_region) },
	{ 0xdc6cb9c7, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x83faafd6, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1bdc381d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x735a0bd5, __VMLINUX_SYMBOL_STR(native_io_delay) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-core";

MODULE_ALIAS("pci:v000010DEd00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000084sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000264sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000368sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000446sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000542sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000752sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AA2sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ED130B47D2F56873772E4A6");

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
	{ 0xfe8f2038, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xae49d36f, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x16331fb5, __VMLINUX_SYMBOL_STR(pci_get_slot) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xa34a77f7, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xae61b618, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xf593fb41, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x3a74b026, __VMLINUX_SYMBOL_STR(sg_miter_next) },
	{ 0xe2796f6d, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7d5b62b5, __VMLINUX_SYMBOL_STR(platform_device_register) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x43f4155a, __VMLINUX_SYMBOL_STR(devm_free_irq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x5fe1e065, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x248c273b, __VMLINUX_SYMBOL_STR(ida_remove) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5182420f, __VMLINUX_SYMBOL_STR(ida_pre_get) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x117c823b, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x3ea0773c, __VMLINUX_SYMBOL_STR(ida_get_new_above) },
	{ 0x25ca2fcf, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xd3e82ae5, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x82477240, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x535557d0, __VMLINUX_SYMBOL_STR(platform_device_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001524d00000510sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AFA3152DE1F4C25041A1BE6");

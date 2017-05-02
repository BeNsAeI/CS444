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
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x2d85b091, __VMLINUX_SYMBOL_STR(orinoco_if_add) },
	{ 0x57fc0323, __VMLINUX_SYMBOL_STR(orinoco_init) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0xdb0cbd65, __VMLINUX_SYMBOL_STR(hermes_struct_init) },
	{ 0x6dadf8f8, __VMLINUX_SYMBOL_STR(alloc_orinocodev) },
	{ 0xa061864a, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x2e69f650, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0x70c53eca, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x684a1cc5, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0xdc6aa45e, __VMLINUX_SYMBOL_STR(free_orinocodev) },
	{ 0x33d69484, __VMLINUX_SYMBOL_STR(orinoco_if_del) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xc910ee3a, __VMLINUX_SYMBOL_STR(orinoco_down) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x62f1e5f2, __VMLINUX_SYMBOL_STR(orinoco_up) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xffe27bca, __VMLINUX_SYMBOL_STR(orinoco_interrupt) },
	{ 0xa34a77f7, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x5fe1e065, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=orinoco";

MODULE_ALIAS("pci:v0000111Ad00001023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001385d00004100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015E8d00000130sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001638d00001100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ABd00001100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ABd00001101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ABd00001102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00003685sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000EC80d0000EC00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00007770sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A5C65DAB6C05519966E3F45");

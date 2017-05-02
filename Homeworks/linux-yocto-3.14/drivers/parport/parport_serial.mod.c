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
	{ 0xc1f3d7ee, __VMLINUX_SYMBOL_STR(pciserial_init_ports) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xf8fd2fbc, __VMLINUX_SYMBOL_STR(parport_pc_probe_port) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4af076bc, __VMLINUX_SYMBOL_STR(parport_pc_unregister_port) },
	{ 0xe84f6e5c, __VMLINUX_SYMBOL_STR(pciserial_remove_ports) },
	{ 0xff099500, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x31c7970f, __VMLINUX_SYMBOL_STR(pciserial_suspend_ports) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbfbc5434, __VMLINUX_SYMBOL_STR(pciserial_resume_ports) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xa34a77f7, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x5fe1e065, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport_pc";

MODULE_ALIAS("pci:v000014D2d00008011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014D2d00008021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009735sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009745sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009835sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009845sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009855sv00001000sd00000020bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009855sv00001000sd00000022bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009855sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009900sv0000A000sd00003011bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009900sv0000A000sd00003012bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009900sv0000A000sd00003020bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009912sv0000A000sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002110sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002140sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002141sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002142sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002160sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002162sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001035sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001036sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002061sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00004078bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00004079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00004085bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00004088bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00004089bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00004095bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00004096bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00005078bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00005079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00005085bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00006079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00007079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00008079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd00009079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd0000A079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd0000B079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd0000C079bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007168sv00001409sd0000D079bc*sc*i*");
MODULE_ALIAS("pci:v00004348d00007053sv00004348sd00003253bc*sc*i*");
MODULE_ALIAS("pci:v00001FD4d00001999sv00001FD4sd00000102bc*sc*i*");

MODULE_INFO(srcversion, "D738BBFECA59939201DECC4");

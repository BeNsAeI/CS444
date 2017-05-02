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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x6bc072, __VMLINUX_SYMBOL_STR(hwrng_unregister) },
	{ 0x5d77952d, __VMLINUX_SYMBOL_STR(hwrng_register) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x33e53ea8, __VMLINUX_SYMBOL_STR(stop_machine) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x22c2beda, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x117c823b, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5f60c44f, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xa67f004b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00002410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000244Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000248Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002641sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002480sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002670sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002671sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002672sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002673sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002674sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002675sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002676sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002677sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002678sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002679sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002450sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "82DC424DD5F28073E734689");

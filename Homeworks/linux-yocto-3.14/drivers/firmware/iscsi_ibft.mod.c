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
	{ 0x117c823b, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xa452096, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x6b72277b, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0x3ddb0d69, __VMLINUX_SYMBOL_STR(iscsi_boot_create_target) },
	{ 0x7318c67a, __VMLINUX_SYMBOL_STR(iscsi_boot_create_ethernet) },
	{ 0x55864ec, __VMLINUX_SYMBOL_STR(iscsi_boot_create_initiator) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x96ef62df, __VMLINUX_SYMBOL_STR(iscsi_boot_create_kset) },
	{ 0x81472677, __VMLINUX_SYMBOL_STR(acpi_get_table) },
	{ 0x1a45cb6c, __VMLINUX_SYMBOL_STR(acpi_disabled) },
	{ 0xf1b551d9, __VMLINUX_SYMBOL_STR(ibft_addr) },
	{ 0xc9b26900, __VMLINUX_SYMBOL_STR(iscsi_boot_destroy_kset) },
	{ 0xde171c30, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=iscsi_boot_sysfs";


MODULE_INFO(srcversion, "4DEFD2ADC983EA3A5E87F95");

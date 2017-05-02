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
	{ 0xd477d6e2, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x7bda313e, __VMLINUX_SYMBOL_STR(class_interface_unregister) },
	{ 0xf15b0d71, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x7137e50c, __VMLINUX_SYMBOL_STR(scsi_register_interface) },
	{ 0xe1c498de, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x60688f6a, __VMLINUX_SYMBOL_STR(enclosure_register) },
	{ 0xc2da0cd6, __VMLINUX_SYMBOL_STR(enclosure_for_each_device) },
	{ 0x270768ff, __VMLINUX_SYMBOL_STR(scsi_get_vpd_page) },
	{ 0x45f9d29d, __VMLINUX_SYMBOL_STR(enclosure_component_register) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xcb61d948, __VMLINUX_SYMBOL_STR(enclosure_add_device) },
	{ 0x60c3277, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0x72566cbb, __VMLINUX_SYMBOL_STR(enclosure_remove_device) },
	{ 0xbf6081c, __VMLINUX_SYMBOL_STR(enclosure_unregister) },
	{ 0x4aff7de5, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x72fdd28a, __VMLINUX_SYMBOL_STR(enclosure_find) },
	{ 0x28c17900, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=enclosure";


MODULE_INFO(srcversion, "ECD7CC47B3A1C2EF6245039");

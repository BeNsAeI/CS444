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
	{ 0x602b88ce, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x6c60ed2a, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x8fe8e249, __VMLINUX_SYMBOL_STR(scsi_remove_target) },
	{ 0xc1cbf392, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x28c17900, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x994bed79, __VMLINUX_SYMBOL_STR(transport_destroy_device) },
	{ 0x3682791c, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa859ad85, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x2b137529, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xfad5c7a1, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x9a4494f2, __VMLINUX_SYMBOL_STR(transport_add_device) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8fbd8d51, __VMLINUX_SYMBOL_STR(bsg_register_queue) },
	{ 0x76dae6c7, __VMLINUX_SYMBOL_STR(transport_configure_device) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x858e0da1, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xde171c30, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x95bb7165, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x70f87607, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0xa452096, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x4aff7de5, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xf4d2f140, __VMLINUX_SYMBOL_STR(transport_setup_device) },
	{ 0x59a80a21, __VMLINUX_SYMBOL_STR(bsg_unregister_queue) },
	{ 0x73926539, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4994dbfa, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xf8a9d764, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc16c3873, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0xca4e992c, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x270768ff, __VMLINUX_SYMBOL_STR(scsi_get_vpd_page) },
	{ 0x60cf25dd, __VMLINUX_SYMBOL_STR(transport_remove_device) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xbaaea7eb, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x5398fb3c, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F74402139C65AEDA1910B75");

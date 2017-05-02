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
	{ 0xb4709322, __VMLINUX_SYMBOL_STR(scsi_dev_info_add_list) },
	{ 0x6c60ed2a, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc65e73c, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x28c17900, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x653dd91c, __VMLINUX_SYMBOL_STR(scsi_get_device_flags_keyed) },
	{ 0xcc0a8895, __VMLINUX_SYMBOL_STR(scsi_target_resume) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x41d8fb89, __VMLINUX_SYMBOL_STR(anon_transport_class_register) },
	{ 0x3682791c, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x40a27c37, __VMLINUX_SYMBOL_STR(scsi_dev_info_remove_list) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe9b2af84, __VMLINUX_SYMBOL_STR(scsi_execute) },
	{ 0x62cc5bde, __VMLINUX_SYMBOL_STR(scsi_device_quiesce) },
	{ 0x2b137529, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x905a3e0, __VMLINUX_SYMBOL_STR(sysfs_chmod_file) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x858e0da1, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x70f87607, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0xf287b765, __VMLINUX_SYMBOL_STR(sysfs_update_group) },
	{ 0x52aacc0e, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdc047fc4, __VMLINUX_SYMBOL_STR(scsi_dev_info_list_add_keyed) },
	{ 0x52535c4, __VMLINUX_SYMBOL_STR(scsi_device_set_state) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf8a9d764, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x63197e7f, __VMLINUX_SYMBOL_STR(scsi_target_quiesce) },
	{ 0xa5e18ffa, __VMLINUX_SYMBOL_STR(scsi_is_target_device) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa41e9598, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x9ace44b7, __VMLINUX_SYMBOL_STR(anon_transport_class_unregister) },
	{ 0xf6f56da7, __VMLINUX_SYMBOL_STR(scsi_is_sdev_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "479C05C3F2C601A5BCB24E0");

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
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xac20a972, __VMLINUX_SYMBOL_STR(p9_client_cb) },
	{ 0x86186e60, __VMLINUX_SYMBOL_STR(v9fs_unregister_trans) },
	{ 0xa751194b, __VMLINUX_SYMBOL_STR(p9_payload_gup) },
	{ 0xbcf9c9e1, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x23153566, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x4326fc6c, __VMLINUX_SYMBOL_STR(v9fs_register_trans) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6cd6cdaf, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x80db3c00, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x3d506e03, __VMLINUX_SYMBOL_STR(p9_tag_lookup) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2812d0bc, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x59ff2353, __VMLINUX_SYMBOL_STR(p9_release_pages) },
	{ 0x977a0030, __VMLINUX_SYMBOL_STR(p9_nr_pages) },
	{ 0xb495fd54, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x8b8927a3, __VMLINUX_SYMBOL_STR(sysfs_remove_file_ns) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe28d83a8, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xa5c4fd39, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0xf5b4a06, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=9pnet,virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000009v*");

MODULE_INFO(srcversion, "194188C025C66623226A90C");

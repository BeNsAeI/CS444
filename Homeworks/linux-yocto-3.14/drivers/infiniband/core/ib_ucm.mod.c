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
	{ 0xfebe26c4, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xc2ddaf24, __VMLINUX_SYMBOL_STR(class_remove_file_ns) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x46878863, __VMLINUX_SYMBOL_STR(ib_send_cm_rej) },
	{ 0xf554888b, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x8dac937b, __VMLINUX_SYMBOL_STR(ib_send_cm_req) },
	{ 0xf820f778, __VMLINUX_SYMBOL_STR(ib_send_cm_dreq) },
	{ 0xac704bf3, __VMLINUX_SYMBOL_STR(ib_send_cm_rtu) },
	{ 0x2606504f, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xb4e91b39, __VMLINUX_SYMBOL_STR(kobject_set_name) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x2569d757, __VMLINUX_SYMBOL_STR(ib_copy_path_rec_to_user) },
	{ 0xe350f2aa, __VMLINUX_SYMBOL_STR(ib_copy_path_rec_from_user) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc35f03f9, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xdc0b5d81, __VMLINUX_SYMBOL_STR(ib_send_cm_mra) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x7331f138, __VMLINUX_SYMBOL_STR(ib_send_cm_drep) },
	{ 0xd6f92c50, __VMLINUX_SYMBOL_STR(ib_cm_init_qp_attr) },
	{ 0x45c92723, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x22ede969, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x85625697, __VMLINUX_SYMBOL_STR(ib_get_client_data) },
	{ 0x7971c00e, __VMLINUX_SYMBOL_STR(ib_copy_qp_attr_to_user) },
	{ 0x3dd64e92, __VMLINUX_SYMBOL_STR(ib_send_cm_rep) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x4fd5cfb9, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x1139206d, __VMLINUX_SYMBOL_STR(ib_set_client_data) },
	{ 0x9520fc85, __VMLINUX_SYMBOL_STR(ib_create_cm_id) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0xcaef1b77, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xed0d3520, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xc448ec4f, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x8c2bcc53, __VMLINUX_SYMBOL_STR(ib_register_client) },
	{ 0x6f36c782, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x657e6ffd, __VMLINUX_SYMBOL_STR(ib_cm_notify) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xee1d1b2b, __VMLINUX_SYMBOL_STR(class_create_file_ns) },
	{ 0xac217df9, __VMLINUX_SYMBOL_STR(rdma_node_get_transport) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc393a2e8, __VMLINUX_SYMBOL_STR(ib_destroy_cm_id) },
	{ 0xb1b62582, __VMLINUX_SYMBOL_STR(ib_send_cm_apr) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x158ec99d, __VMLINUX_SYMBOL_STR(ib_cm_listen) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xcdbd6a0f, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xdbb12304, __VMLINUX_SYMBOL_STR(ib_send_cm_lap) },
	{ 0xba073382, __VMLINUX_SYMBOL_STR(cm_class) },
	{ 0xbaaea7eb, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x41874439, __VMLINUX_SYMBOL_STR(ib_send_cm_sidr_rep) },
	{ 0x8502c1b7, __VMLINUX_SYMBOL_STR(show_class_attr_string) },
	{ 0xe4793ba6, __VMLINUX_SYMBOL_STR(ib_unregister_client) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xc0fb6144, __VMLINUX_SYMBOL_STR(ib_send_cm_sidr_req) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_cm,ib_uverbs,ib_core";


MODULE_INFO(srcversion, "D06FF0DF9A280FBB7C58DA3");

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
	{ 0x537143a2, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0xfebe26c4, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3525f08f, __VMLINUX_SYMBOL_STR(kobject_get) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf554888b, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xa4dc4e0d, __VMLINUX_SYMBOL_STR(ib_register_mad_agent) },
	{ 0x991c66f, __VMLINUX_SYMBOL_STR(ib_free_recv_mad) },
	{ 0x2606504f, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x9f6b4c62, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x73eeeb5b, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xb4e91b39, __VMLINUX_SYMBOL_STR(kobject_set_name) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc35f03f9, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x3a93e34e, __VMLINUX_SYMBOL_STR(ib_get_rmpp_segment) },
	{ 0xbfe1973a, __VMLINUX_SYMBOL_STR(ib_destroy_ah) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xb897621b, __VMLINUX_SYMBOL_STR(ib_free_send_mad) },
	{ 0x7b5d4b7a, __VMLINUX_SYMBOL_STR(ib_is_mad_class_rmpp) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x940602e5, __VMLINUX_SYMBOL_STR(down_trylock) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x85625697, __VMLINUX_SYMBOL_STR(ib_get_client_data) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x6dcbae38, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x6d49c1f9, __VMLINUX_SYMBOL_STR(ib_init_ah_from_wc) },
	{ 0x1139206d, __VMLINUX_SYMBOL_STR(ib_set_client_data) },
	{ 0x517f4d42, __VMLINUX_SYMBOL_STR(ib_create_send_mad) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0x2ab12eb9, __VMLINUX_SYMBOL_STR(ib_post_send_mad) },
	{ 0x946d5d27, __VMLINUX_SYMBOL_STR(ib_response_mad) },
	{ 0xed0d3520, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xc448ec4f, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x820f09d4, __VMLINUX_SYMBOL_STR(ib_unregister_mad_agent) },
	{ 0x8c2bcc53, __VMLINUX_SYMBOL_STR(ib_register_client) },
	{ 0x280a7f57, __VMLINUX_SYMBOL_STR(ib_create_ah) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xee1d1b2b, __VMLINUX_SYMBOL_STR(class_create_file_ns) },
	{ 0xac217df9, __VMLINUX_SYMBOL_STR(rdma_node_get_transport) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xecea16cd, __VMLINUX_SYMBOL_STR(ib_modify_port) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x25d8e16d, __VMLINUX_SYMBOL_STR(kobject_init) },
	{ 0x71e3cecb, __VMLINUX_SYMBOL_STR(up) },
	{ 0x5bc3cb08, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x2bb672f0, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x6f077fcf, __VMLINUX_SYMBOL_STR(ib_get_mad_data_offset) },
	{ 0x8502c1b7, __VMLINUX_SYMBOL_STR(show_class_attr_string) },
	{ 0xe4793ba6, __VMLINUX_SYMBOL_STR(ib_unregister_client) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_mad,ib_core";


MODULE_INFO(srcversion, "25C2BFA426412908D478BB0");

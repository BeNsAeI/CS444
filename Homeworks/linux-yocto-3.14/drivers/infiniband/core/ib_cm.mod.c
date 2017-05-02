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
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x78a6eab2, __VMLINUX_SYMBOL_STR(ib_find_cached_gid) },
	{ 0x860b8d26, __VMLINUX_SYMBOL_STR(ib_create_ah_from_wc) },
	{ 0xb197da92, __VMLINUX_SYMBOL_STR(ib_modify_mad) },
	{ 0x5f837f0, __VMLINUX_SYMBOL_STR(_raw_write_lock_irqsave) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xa4dc4e0d, __VMLINUX_SYMBOL_STR(ib_register_mad_agent) },
	{ 0x991c66f, __VMLINUX_SYMBOL_STR(ib_free_recv_mad) },
	{ 0xf241a80c, __VMLINUX_SYMBOL_STR(ib_init_ah_from_path) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x3bbd7ed, __VMLINUX_SYMBOL_STR(ib_get_cached_gid) },
	{ 0xbfe1973a, __VMLINUX_SYMBOL_STR(ib_destroy_ah) },
	{ 0xcf65df50, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irqrestore) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xb897621b, __VMLINUX_SYMBOL_STR(ib_free_send_mad) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x45c92723, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xc770d15c, __VMLINUX_SYMBOL_STR(idr_alloc_cyclic) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xd1c42aa1, __VMLINUX_SYMBOL_STR(ib_query_device) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7ad5d5b5, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0xcb21756c, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x85625697, __VMLINUX_SYMBOL_STR(ib_get_client_data) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x6dcbae38, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x6d49c1f9, __VMLINUX_SYMBOL_STR(ib_init_ah_from_wc) },
	{ 0xc34ba211, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x1139206d, __VMLINUX_SYMBOL_STR(ib_set_client_data) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x517f4d42, __VMLINUX_SYMBOL_STR(ib_create_send_mad) },
	{ 0x2ab12eb9, __VMLINUX_SYMBOL_STR(ib_post_send_mad) },
	{ 0xcaef1b77, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x820f09d4, __VMLINUX_SYMBOL_STR(ib_unregister_mad_agent) },
	{ 0x8c2bcc53, __VMLINUX_SYMBOL_STR(ib_register_client) },
	{ 0x280a7f57, __VMLINUX_SYMBOL_STR(ib_create_ah) },
	{ 0xdeadeb5c, __VMLINUX_SYMBOL_STR(_raw_read_lock_irqsave) },
	{ 0x6f36c782, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9ab79d9f, __VMLINUX_SYMBOL_STR(ib_find_cached_pkey) },
	{ 0x2f8a2bd4, __VMLINUX_SYMBOL_STR(_raw_read_unlock_irqrestore) },
	{ 0x28e29eb6, __VMLINUX_SYMBOL_STR(ib_cancel_mad) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xac217df9, __VMLINUX_SYMBOL_STR(rdma_node_get_transport) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xecea16cd, __VMLINUX_SYMBOL_STR(ib_modify_port) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcdbd6a0f, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb1b42470, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0xe4793ba6, __VMLINUX_SYMBOL_STR(ib_unregister_client) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core,ib_mad,ib_sa";


MODULE_INFO(srcversion, "4524630E3B64FC2B890B00C");

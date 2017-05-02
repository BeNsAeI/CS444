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
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x78a6eab2, __VMLINUX_SYMBOL_STR(ib_find_cached_gid) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xebdbc905, __VMLINUX_SYMBOL_STR(rdma_port_get_link_layer) },
	{ 0x96ed9f8, __VMLINUX_SYMBOL_STR(ib_find_pkey) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xa4dc4e0d, __VMLINUX_SYMBOL_STR(ib_register_mad_agent) },
	{ 0x991c66f, __VMLINUX_SYMBOL_STR(ib_free_recv_mad) },
	{ 0x22f3cf93, __VMLINUX_SYMBOL_STR(ib_pack) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xbfe1973a, __VMLINUX_SYMBOL_STR(ib_destroy_ah) },
	{ 0xb897621b, __VMLINUX_SYMBOL_STR(ib_free_send_mad) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x45c92723, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x85625697, __VMLINUX_SYMBOL_STR(ib_get_client_data) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xa5a282a, __VMLINUX_SYMBOL_STR(ib_query_port) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x4fd5cfb9, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x1139206d, __VMLINUX_SYMBOL_STR(ib_set_client_data) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x517f4d42, __VMLINUX_SYMBOL_STR(ib_create_send_mad) },
	{ 0x2ab12eb9, __VMLINUX_SYMBOL_STR(ib_post_send_mad) },
	{ 0xcaef1b77, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x820f09d4, __VMLINUX_SYMBOL_STR(ib_unregister_mad_agent) },
	{ 0x8c2bcc53, __VMLINUX_SYMBOL_STR(ib_register_client) },
	{ 0x280a7f57, __VMLINUX_SYMBOL_STR(ib_create_ah) },
	{ 0xba2c7746, __VMLINUX_SYMBOL_STR(ib_unregister_event_handler) },
	{ 0x6f36c782, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xfa9ae97e, __VMLINUX_SYMBOL_STR(ib_register_event_handler) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x28e29eb6, __VMLINUX_SYMBOL_STR(ib_cancel_mad) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xac217df9, __VMLINUX_SYMBOL_STR(rdma_node_get_transport) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa432baf6, __VMLINUX_SYMBOL_STR(ib_unpack) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xdbd019c4, __VMLINUX_SYMBOL_STR(ib_wq) },
	{ 0xe4793ba6, __VMLINUX_SYMBOL_STR(ib_unregister_client) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core,ib_mad";


MODULE_INFO(srcversion, "B1DAF2938B4719EDDD2E455");

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
	{ 0x268e8663, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2646cf49, __VMLINUX_SYMBOL_STR(rdma_get_service_id) },
	{ 0xc1d8cfaf, __VMLINUX_SYMBOL_STR(__fdget) },
	{ 0xebdbc905, __VMLINUX_SYMBOL_STR(rdma_port_get_link_layer) },
	{ 0xdbdb84eb, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0xd067fc5c, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x2606504f, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xf1e3620f, __VMLINUX_SYMBOL_STR(rdma_join_multicast) },
	{ 0xc8f4826d, __VMLINUX_SYMBOL_STR(rdma_accept) },
	{ 0x2569d757, __VMLINUX_SYMBOL_STR(ib_copy_path_rec_to_user) },
	{ 0xe6ba4f07, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x52a6ce77, __VMLINUX_SYMBOL_STR(ib_copy_ah_attr_to_user) },
	{ 0x6edf8dd8, __VMLINUX_SYMBOL_STR(rdma_init_qp_attr) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc35f03f9, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xcddc09bd, __VMLINUX_SYMBOL_STR(rdma_connect) },
	{ 0x24368755, __VMLINUX_SYMBOL_STR(rdma_set_reuseaddr) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xddc330e7, __VMLINUX_SYMBOL_STR(ib_sa_pack_path) },
	{ 0x827716a7, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x45c92723, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x99e4b8b2, __VMLINUX_SYMBOL_STR(rdma_listen) },
	{ 0x7971c00e, __VMLINUX_SYMBOL_STR(ib_copy_qp_attr_to_user) },
	{ 0x9cb291d7, __VMLINUX_SYMBOL_STR(rdma_set_afonly) },
	{ 0x3d0e31ba, __VMLINUX_SYMBOL_STR(rdma_notify) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x82d31360, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x4fd5cfb9, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x724f0b57, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x9e44ca72, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x5a643b1f, __VMLINUX_SYMBOL_STR(rdma_create_id) },
	{ 0xcaef1b77, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xed0d3520, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x97efac0c, __VMLINUX_SYMBOL_STR(rdma_bind_addr) },
	{ 0x368548fa, __VMLINUX_SYMBOL_STR(rdma_resolve_route) },
	{ 0x6f36c782, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8382c933, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0xac217df9, __VMLINUX_SYMBOL_STR(rdma_node_get_transport) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf5d5be88, __VMLINUX_SYMBOL_STR(rdma_reject) },
	{ 0x1c3c0ad3, __VMLINUX_SYMBOL_STR(rdma_addr_size) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1e3c5a81, __VMLINUX_SYMBOL_STR(rdma_set_service_type) },
	{ 0xb614c9ca, __VMLINUX_SYMBOL_STR(rdma_resolve_addr) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x22f07253, __VMLINUX_SYMBOL_STR(ib_sa_unpack_path) },
	{ 0xf0e4d7bc, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x1c520f39, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x3b1a8d2a, __VMLINUX_SYMBOL_STR(rdma_set_ib_paths) },
	{ 0xadeeb8e7, __VMLINUX_SYMBOL_STR(rdma_leave_multicast) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rdma_cm,ib_core,ib_uverbs,ib_sa,ib_addr";


MODULE_INFO(srcversion, "6CD2134D78EE5E4BABC4E86");

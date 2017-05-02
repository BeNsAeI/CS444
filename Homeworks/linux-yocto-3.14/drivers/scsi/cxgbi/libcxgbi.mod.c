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
	{ 0x8161299b, __VMLINUX_SYMBOL_STR(__kfree_skb) },
	{ 0x93737cef, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0xe8ed8fa6, __VMLINUX_SYMBOL_STR(iscsi_tcp_set_max_r2t) },
	{ 0x28c17900, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x1b6314fd, __VMLINUX_SYMBOL_STR(in_aton) },
	{ 0xae677325, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_skb) },
	{ 0xdbd6dcfb, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x2739882d, __VMLINUX_SYMBOL_STR(pci_dev_get) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xc259f92a, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0xb9fca8b4, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x89d9cbc8, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x9e842e89, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbc59d510, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0x919658b2, __VMLINUX_SYMBOL_STR(iscsi_lookup_endpoint) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xbe4ccc85, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_free) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x2465bca1, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_alloc) },
	{ 0x80d058ac, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0x4f8704ea, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0x1af81036, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x358f0e10, __VMLINUX_SYMBOL_STR(iscsi_destroy_endpoint) },
	{ 0x6ee5b4df, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x724f0b57, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x81533963, __VMLINUX_SYMBOL_STR(sysfs_format_mac) },
	{ 0x492379f2, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_setup) },
	{ 0x3d769dfc, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x323756a3, __VMLINUX_SYMBOL_STR(vlan_dev_real_dev) },
	{ 0x91463036, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x1cab58a, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc7eb3570, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0x2b6b106e, __VMLINUX_SYMBOL_STR(iscsi_tcp_cleanup_task) },
	{ 0x45a1cae4, __VMLINUX_SYMBOL_STR(iscsi_conn_queue_work) },
	{ 0xc4a348cf, __VMLINUX_SYMBOL_STR(iscsi_tcp_hdr_recv_prep) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5d39d171, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0x32476389, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x5bd6c1ee, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xa5a99b49, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xbded85d0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x118ea9fc, __VMLINUX_SYMBOL_STR(iscsi_create_endpoint) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa45c40e8, __VMLINUX_SYMBOL_STR(__ip_dev_find) },
	{ 0xd5dac574, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xc4d1186f, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0x2975fe75, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0x31e5e14d, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0x117c823b, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xb4741524, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_segment_is_hdr) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libiscsi_tcp,scsi_transport_iscsi";


MODULE_INFO(srcversion, "D1050271EE9EC2A61ED28C9");

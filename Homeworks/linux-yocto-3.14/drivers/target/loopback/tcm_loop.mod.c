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
	{ 0x4d27dd4f, __VMLINUX_SYMBOL_STR(target_fabric_configfs_deregister) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xa82ded68, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x8b9f11b7, __VMLINUX_SYMBOL_STR(target_fabric_configfs_free) },
	{ 0xb92965fd, __VMLINUX_SYMBOL_STR(target_fabric_configfs_register) },
	{ 0x9b3aa10b, __VMLINUX_SYMBOL_STR(target_fabric_configfs_init) },
	{ 0xa9850bf0, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xfcd181e, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x835864b5, __VMLINUX_SYMBOL_STR(__root_device_register) },
	{ 0x24fcb3b4, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x2c02a2ac, __VMLINUX_SYMBOL_STR(transport_free_session) },
	{ 0xa9cc531b, __VMLINUX_SYMBOL_STR(__transport_register_session) },
	{ 0x910a24b1, __VMLINUX_SYMBOL_STR(core_tpg_check_initiator_node_acl) },
	{ 0x1c9eaf26, __VMLINUX_SYMBOL_STR(transport_init_session) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa4b10d41, __VMLINUX_SYMBOL_STR(transport_generic_handle_tmr) },
	{ 0xad6f9e0b, __VMLINUX_SYMBOL_STR(transport_lookup_tmr_lun) },
	{ 0xc2f10a00, __VMLINUX_SYMBOL_STR(core_tmr_alloc_req) },
	{ 0x91a007e5, __VMLINUX_SYMBOL_STR(transport_init_se_cmd) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x22ede969, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0xbaaea7eb, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x92215978, __VMLINUX_SYMBOL_STR(root_device_unregister) },
	{ 0x9eceebff, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0xd477d6e2, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xeae077d1, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x52aacc0e, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x66a1f14c, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0xc0ab8b01, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x9db5ee31, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0xd1143685, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0xeac791d4, __VMLINUX_SYMBOL_STR(blk_queue_init_tags) },
	{ 0x8ce068bb, __VMLINUX_SYMBOL_STR(blk_queue_free_tags) },
	{ 0xd1a16f89, __VMLINUX_SYMBOL_STR(iscsi_get_fabric_proto_ident) },
	{ 0xdc36029b, __VMLINUX_SYMBOL_STR(fc_get_fabric_proto_ident) },
	{ 0xcc57803, __VMLINUX_SYMBOL_STR(sas_get_fabric_proto_ident) },
	{ 0x2f7aab67, __VMLINUX_SYMBOL_STR(iscsi_get_pr_transport_id) },
	{ 0xbfd3da05, __VMLINUX_SYMBOL_STR(fc_get_pr_transport_id) },
	{ 0x3c9bef9e, __VMLINUX_SYMBOL_STR(sas_get_pr_transport_id) },
	{ 0x80ae527c, __VMLINUX_SYMBOL_STR(iscsi_get_pr_transport_id_len) },
	{ 0x603bd42, __VMLINUX_SYMBOL_STR(fc_get_pr_transport_id_len) },
	{ 0x74b33fb4, __VMLINUX_SYMBOL_STR(sas_get_pr_transport_id_len) },
	{ 0x62cd84e0, __VMLINUX_SYMBOL_STR(iscsi_parse_pr_out_transport_id) },
	{ 0x5922fc62, __VMLINUX_SYMBOL_STR(fc_parse_pr_out_transport_id) },
	{ 0x69a066b, __VMLINUX_SYMBOL_STR(sas_parse_pr_out_transport_id) },
	{ 0xd165370b, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xcdbd6a0f, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x8fab9f31, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x189f2756, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x2cfcbbdd, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4741a933, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x28c17900, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xad0bd149, __VMLINUX_SYMBOL_STR(target_submit_cmd_map_sgls) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd6d36ae7, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xf1bac053, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x36938bd6, __VMLINUX_SYMBOL_STR(scsi_track_queue_full) },
	{ 0xd5b2e96, __VMLINUX_SYMBOL_STR(scsi_adjust_queue_depth) },
	{ 0xa05f372e, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x6ee5b4df, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x5e7211dd, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";


MODULE_INFO(srcversion, "F19B866715774D5B7393E8C");

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
	{ 0xd1143685, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x8fab9f31, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xffde6147, __VMLINUX_SYMBOL_STR(fc_fc4_register_provider) },
	{ 0x93c9f2da, __VMLINUX_SYMBOL_STR(fc_lport_iterate) },
	{ 0xf1bac053, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x8799822c, __VMLINUX_SYMBOL_STR(percpu_ida_free) },
	{ 0x603bd42, __VMLINUX_SYMBOL_STR(fc_get_pr_transport_id_len) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0x4d27dd4f, __VMLINUX_SYMBOL_STR(target_fabric_configfs_deregister) },
	{ 0x9db5ee31, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1b9e0ff1, __VMLINUX_SYMBOL_STR(scsilun_to_int) },
	{ 0xa638722c, __VMLINUX_SYMBOL_STR(target_submit_cmd) },
	{ 0x9331b8fa, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_unregister) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x91855806, __VMLINUX_SYMBOL_STR(core_tpg_del_initiator_node_acl) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xc0fcd714, __VMLINUX_SYMBOL_STR(_fc_frame_alloc) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3049417e, __VMLINUX_SYMBOL_STR(fc_fill_reply_hdr) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5922fc62, __VMLINUX_SYMBOL_STR(fc_parse_pr_out_transport_id) },
	{ 0x8428aa70, __VMLINUX_SYMBOL_STR(transport_deregister_session_configfs) },
	{ 0x5ccca98c, __VMLINUX_SYMBOL_STR(fc_fc4_deregister_provider) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xa49b80ba, __VMLINUX_SYMBOL_STR(transport_init_session_tags) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xc06745cf, __VMLINUX_SYMBOL_STR(fc_frame_alloc_fill) },
	{ 0x8b9f11b7, __VMLINUX_SYMBOL_STR(target_fabric_configfs_free) },
	{ 0x9b3aa10b, __VMLINUX_SYMBOL_STR(target_fabric_configfs_init) },
	{ 0x558fedc6, __VMLINUX_SYMBOL_STR(percpu_ida_alloc) },
	{ 0x3d769dfc, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x79a38e61, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xfeb0e881, __VMLINUX_SYMBOL_STR(transport_register_session) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6ffd847, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_register) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf530f0c3, __VMLINUX_SYMBOL_STR(fc_lport_notifier_head) },
	{ 0xb92965fd, __VMLINUX_SYMBOL_STR(target_fabric_configfs_register) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbfd3da05, __VMLINUX_SYMBOL_STR(fc_get_pr_transport_id) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdc36029b, __VMLINUX_SYMBOL_STR(fc_get_fabric_proto_ident) },
	{ 0xa87fe1aa, __VMLINUX_SYMBOL_STR(target_submit_tmr) },
	{ 0xd165370b, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xef38b827, __VMLINUX_SYMBOL_STR(core_tpg_add_initiator_node_acl) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,libfc";


MODULE_INFO(srcversion, "F68F5CDEC6991204794CC3D");

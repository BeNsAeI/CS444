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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8e64c532, __VMLINUX_SYMBOL_STR(xprt_lookup_rqst) },
	{ 0x2fdab68f, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0x1974d97b, __VMLINUX_SYMBOL_STR(ib_alloc_fast_reg_mr) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6d6608a3, __VMLINUX_SYMBOL_STR(ib_dealloc_mw) },
	{ 0xb2e721fc, __VMLINUX_SYMBOL_STR(xprt_register_transport) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xa05f372e, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x7559e594, __VMLINUX_SYMBOL_STR(ib_free_fast_reg_page_list) },
	{ 0x3d5844b3, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0xf6575e0c, __VMLINUX_SYMBOL_STR(xprt_free) },
	{ 0xe6ba4f07, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x864c509b, __VMLINUX_SYMBOL_STR(ib_alloc_mw) },
	{ 0x7a655e0e, __VMLINUX_SYMBOL_STR(xprt_alloc) },
	{ 0x4efad327, __VMLINUX_SYMBOL_STR(rpcb_getport_async) },
	{ 0xc8c7497b, __VMLINUX_SYMBOL_STR(xprt_wake_pending_tasks) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xbbbad606, __VMLINUX_SYMBOL_STR(ib_modify_qp) },
	{ 0xcddc09bd, __VMLINUX_SYMBOL_STR(rdma_connect) },
	{ 0xc4148b1d, __VMLINUX_SYMBOL_STR(rpc_exit) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1e491a04, __VMLINUX_SYMBOL_STR(ib_unmap_fmr) },
	{ 0x877e422f, __VMLINUX_SYMBOL_STR(ib_alloc_pd) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xc5b503a8, __VMLINUX_SYMBOL_STR(ib_get_dma_mr) },
	{ 0xd1c42aa1, __VMLINUX_SYMBOL_STR(ib_query_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xad020a32, __VMLINUX_SYMBOL_STR(rdma_destroy_qp) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x27739764, __VMLINUX_SYMBOL_STR(xprt_unregister_transport) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x7c8f9691, __VMLINUX_SYMBOL_STR(xprt_release_xprt_cong) },
	{ 0x5a643b1f, __VMLINUX_SYMBOL_STR(rdma_create_id) },
	{ 0xf910f34, __VMLINUX_SYMBOL_STR(ib_destroy_cq) },
	{ 0xda440ed3, __VMLINUX_SYMBOL_STR(rdma_create_qp) },
	{ 0x725c9955, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x368548fa, __VMLINUX_SYMBOL_STR(rdma_resolve_route) },
	{ 0x19ed6bfa, __VMLINUX_SYMBOL_STR(ib_dealloc_fmr) },
	{ 0xbad76392, __VMLINUX_SYMBOL_STR(xprt_alloc_slot) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8e332829, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x263122f8, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8382c933, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0x28281e54, __VMLINUX_SYMBOL_STR(ib_alloc_fmr) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x10966af0, __VMLINUX_SYMBOL_STR(ib_query_qp) },
	{ 0xd976ad5e, __VMLINUX_SYMBOL_STR(ib_dereg_mr) },
	{ 0xc4f450c7, __VMLINUX_SYMBOL_STR(xprt_complete_rqst) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1f2a9970, __VMLINUX_SYMBOL_STR(rpc_ntop) },
	{ 0xbfff93fb, __VMLINUX_SYMBOL_STR(xprt_set_retrans_timeout_def) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4071880a, __VMLINUX_SYMBOL_STR(xprt_reserve_xprt_cong) },
	{ 0x7fb2fe99, __VMLINUX_SYMBOL_STR(ib_reg_phys_mr) },
	{ 0xb614c9ca, __VMLINUX_SYMBOL_STR(rdma_resolve_addr) },
	{ 0x649e7d, __VMLINUX_SYMBOL_STR(ib_alloc_fast_reg_page_list) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1dcd214, __VMLINUX_SYMBOL_STR(ib_create_cq) },
	{ 0x50aadbe5, __VMLINUX_SYMBOL_STR(xprt_disconnect_done) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x4880246e, __VMLINUX_SYMBOL_STR(xprt_release_rqst_cong) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xbb47f84c, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sunrpc,ib_core,rdma_cm";


MODULE_INFO(srcversion, "41C25FAD2B43C8294B4D9D5");

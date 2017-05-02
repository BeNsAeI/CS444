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
	{ 0x5358fc36, __VMLINUX_SYMBOL_STR(ring_buffer_discard_commit) },
	{ 0xa82ded68, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdb3d9564, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xd705b4c7, __VMLINUX_SYMBOL_STR(schedule_hrtimeout) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0xdcb24880, __VMLINUX_SYMBOL_STR(bmap) },
	{ 0x1d6cdf9d, __VMLINUX_SYMBOL_STR(end_buffer_write_sync) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x59ba98bb, __VMLINUX_SYMBOL_STR(blkdev_issue_flush) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xb1cf3c4e, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0x58f2bec7, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0x4b950d81, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xc9c7eadb, __VMLINUX_SYMBOL_STR(event_triggers_post_call) },
	{ 0x24fdac79, __VMLINUX_SYMBOL_STR(wake_bit_function) },
	{ 0x9621849f, __VMLINUX_SYMBOL_STR(ring_buffer_event_data) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xfc9f8c25, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0xb550b14e, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x3a273a5f, __VMLINUX_SYMBOL_STR(set_bh_page) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x9d5818b, __VMLINUX_SYMBOL_STR(trace_event_buffer_lock_reserve) },
	{ 0x2d4cce8, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x17f02011, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xfcd45e82, __VMLINUX_SYMBOL_STR(__sync_dirty_buffer) },
	{ 0xd6d36ae7, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7d5c20a8, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xa8288a65, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x154c8b30, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x3d769dfc, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0xda96b76d, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xbbfcaca5, __VMLINUX_SYMBOL_STR(bit_waitqueue) },
	{ 0x4780a2e3, __VMLINUX_SYMBOL_STR(ftrace_event_reg) },
	{ 0xe2cfb038, __VMLINUX_SYMBOL_STR(__cond_resched_lock) },
	{ 0xce900af, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x4741a933, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa68af5c0, __VMLINUX_SYMBOL_STR(free_buffer_head) },
	{ 0x9c85c98f, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x31f4ff93, __VMLINUX_SYMBOL_STR(sync_blockdev) },
	{ 0x559dff02, __VMLINUX_SYMBOL_STR(try_to_free_buffers) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x79a38e61, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x50fad434, __VMLINUX_SYMBOL_STR(round_jiffies_up) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0x374e0d31, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x2102b351, __VMLINUX_SYMBOL_STR(alloc_buffer_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xeac133cb, __VMLINUX_SYMBOL_STR(submit_bh) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x24fcb3b4, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x10726915, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xd7317d, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x689c023c, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xe6602e9f, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0xa114858d, __VMLINUX_SYMBOL_STR(_submit_bh) },
	{ 0xe33e5228, __VMLINUX_SYMBOL_STR(filter_check_discard) },
	{ 0x2f855abe, __VMLINUX_SYMBOL_STR(write_dirty_buffer) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x312ca88d, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x5185f2, __VMLINUX_SYMBOL_STR(__bforget) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x76abbdac, __VMLINUX_SYMBOL_STR(__find_get_block) },
	{ 0xcc4dda2d, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0x1e3a88fb, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x59b5d5f5, __VMLINUX_SYMBOL_STR(__getblk) },
	{ 0x925520d2, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x70db434f, __VMLINUX_SYMBOL_STR(ftrace_raw_output_prep) },
	{ 0x498d293a, __VMLINUX_SYMBOL_STR(trace_buffer_unlock_commit) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "495CE469E3C1DDE315AE45F");

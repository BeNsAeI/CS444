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
	{ 0x7c102447, __VMLINUX_SYMBOL_STR(cpu_sibling_map) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd20bf6ba, __VMLINUX_SYMBOL_STR(dcookie_unregister) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xa9e18049, __VMLINUX_SYMBOL_STR(task_handoff_unregister) },
	{ 0xdd391eff, __VMLINUX_SYMBOL_STR(profile_event_unregister) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2f4113a2, __VMLINUX_SYMBOL_STR(dcookie_register) },
	{ 0xf353a698, __VMLINUX_SYMBOL_STR(register_module_notifier) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe0869b1d, __VMLINUX_SYMBOL_STR(perf_event_release_kernel) },
	{ 0xe7f3608a, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0x6a5ecb18, __VMLINUX_SYMBOL_STR(unregister_module_notifier) },
	{ 0xbd3963b2, __VMLINUX_SYMBOL_STR(perf_event_disable) },
	{ 0x9062c322, __VMLINUX_SYMBOL_STR(ring_buffer_consume) },
	{ 0x17795916, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x1333fd08, __VMLINUX_SYMBOL_STR(print_context_stack) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0xc715d9e0, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x94313d7, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xc65d3eed, __VMLINUX_SYMBOL_STR(ring_buffer_entries_cpu) },
	{ 0x2606504f, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xd385b661, __VMLINUX_SYMBOL_STR(free_task) },
	{ 0xd7dd777b, __VMLINUX_SYMBOL_STR(reserve_perfctr_nmi) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xc17f2673, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xa263917, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x846f59a, __VMLINUX_SYMBOL_STR(cpu_info) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x9621849f, __VMLINUX_SYMBOL_STR(ring_buffer_event_data) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2bc3227e, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0xe53d32f8, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x67211d39, __VMLINUX_SYMBOL_STR(perf_event_enable) },
	{ 0xfc872fd1, __VMLINUX_SYMBOL_STR(get_ibs_caps) },
	{ 0xc35f03f9, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x8cac8c08, __VMLINUX_SYMBOL_STR(free_cpumask_var) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xf4fc2d6c, __VMLINUX_SYMBOL_STR(__ring_buffer_alloc) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xb9c425de, __VMLINUX_SYMBOL_STR(register_syscore_ops) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x4d8c750, __VMLINUX_SYMBOL_STR(release_perfctr_nmi) },
	{ 0x36ad3ae3, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0xe5b2894f, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x740a1b95, __VMLINUX_SYMBOL_STR(reserve_evntsel_nmi) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xacee0f2e, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x7e785838, __VMLINUX_SYMBOL_STR(get_task_mm) },
	{ 0xd1f6c5f3, __VMLINUX_SYMBOL_STR(smp_num_siblings) },
	{ 0x525c1ee, __VMLINUX_SYMBOL_STR(zalloc_cpumask_var) },
	{ 0x88b04e39, __VMLINUX_SYMBOL_STR(__register_nmi_handler) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x79fb0082, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xf4a5c213, __VMLINUX_SYMBOL_STR(avail_to_resrv_perfctr_nmi_bit) },
	{ 0x838b13e7, __VMLINUX_SYMBOL_STR(ring_buffer_free) },
	{ 0xeac73847, __VMLINUX_SYMBOL_STR(irq_regs) },
	{ 0xa70fabbe, __VMLINUX_SYMBOL_STR(release_evntsel_nmi) },
	{ 0x793369, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xfd6293c2, __VMLINUX_SYMBOL_STR(boot_tvec_bases) },
	{ 0x6b29a1fa, __VMLINUX_SYMBOL_STR(ring_buffer_event_length) },
	{ 0x1fe9f800, __VMLINUX_SYMBOL_STR(unregister_cpu_notifier) },
	{ 0x4781b096, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xd6b33026, __VMLINUX_SYMBOL_STR(cpu_khz) },
	{ 0x6da8354f, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0x7729cbdd, __VMLINUX_SYMBOL_STR(task_handoff_register) },
	{ 0x8b43159b, __VMLINUX_SYMBOL_STR(register_cpu_notifier) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x73032782, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0x8e332829, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x6e8bf789, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0xc558530d, __VMLINUX_SYMBOL_STR(profile_pc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb19a5453, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xba797153, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfa1eb910, __VMLINUX_SYMBOL_STR(unregister_syscore_ops) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe64ad8ea, __VMLINUX_SYMBOL_STR(unregister_nmi_handler) },
	{ 0x25a97010, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xfcc1969, __VMLINUX_SYMBOL_STR(copy_from_user_nmi) },
	{ 0xc1b8846f, __VMLINUX_SYMBOL_STR(get_dcookie) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xbb79dce5, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x8608ddcb, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x506f6166, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xa389a49a, __VMLINUX_SYMBOL_STR(profile_event_register) },
	{ 0x7b22ce17, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{        0, __VMLINUX_SYMBOL_STR(perf_event_create_kernel_counter) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa8923015, __VMLINUX_SYMBOL_STR(dump_trace) },
	{ 0xd255e300, __VMLINUX_SYMBOL_STR(apic) },
	{ 0x5beec9af, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x5541ea93, __VMLINUX_SYMBOL_STR(on_each_cpu) },
	{ 0x307af27f, __VMLINUX_SYMBOL_STR(simple_dir_inode_operations) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x1a7ce1b9, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x6228c21f, __VMLINUX_SYMBOL_STR(smp_call_function_single) },
	{ 0x918ad429, __VMLINUX_SYMBOL_STR(ring_buffer_lock_reserve) },
	{ 0xd87601cc, __VMLINUX_SYMBOL_STR(ring_buffer_unlock_commit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "02A975FCD5CFC08E9B3AB95");

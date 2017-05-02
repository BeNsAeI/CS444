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
	{        0, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa1c4ecdb, __VMLINUX_SYMBOL_STR(kvm_complete_insn_gp) },
	{ 0x4881c172, __VMLINUX_SYMBOL_STR(kvm_mmu_load) },
	{ 0xb0ef1b17, __VMLINUX_SYMBOL_STR(kvm_release_page_dirty) },
	{ 0x28e9276a, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_nested_vmexit_inject) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x39cf326d, __VMLINUX_SYMBOL_STR(kvm_set_msr_common) },
	{ 0x5c97cb51, __VMLINUX_SYMBOL_STR(kvm_mmu_invlpg) },
	{ 0xc45e789c, __VMLINUX_SYMBOL_STR(kvm_vcpu_init) },
	{ 0xc715d9e0, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x4388cd5a, __VMLINUX_SYMBOL_STR(kvm_emulate_cpuid) },
	{ 0x48cb45af, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_exit) },
	{ 0x12a34a9b, __VMLINUX_SYMBOL_STR(kvm_queue_exception_e) },
	{ 0x8fd989f3, __VMLINUX_SYMBOL_STR(kvm_get_rflags) },
	{ 0xeb59e8c3, __VMLINUX_SYMBOL_STR(native_load_gs_index) },
	{ 0x485cd7f6, __VMLINUX_SYMBOL_STR(kvm_rebooting) },
	{ 0x4a01bee0, __VMLINUX_SYMBOL_STR(kvm_read_guest) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xca689036, __VMLINUX_SYMBOL_STR(kvm_vcpu_on_spin) },
	{ 0xef6a3810, __VMLINUX_SYMBOL_STR(kvm_cpuid) },
	{ 0xb494ce41, __VMLINUX_SYMBOL_STR(kvm_mmu_unload) },
	{ 0x65699fef, __VMLINUX_SYMBOL_STR(kvm_mmu_reset_context) },
	{ 0xbe15d5c8, __VMLINUX_SYMBOL_STR(kvm_mmu_page_fault) },
	{ 0x44aaf30f, __VMLINUX_SYMBOL_STR(tsc_khz) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x412b7e11, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_nested_intercepts) },
	{ 0x96a61278, __VMLINUX_SYMBOL_STR(kvm_get_dr) },
	{ 0x9c711be0, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_invlpga) },
	{ 0x8001c4b0, __VMLINUX_SYMBOL_STR(kvm_set_cr8) },
	{ 0xd3a88ca1, __VMLINUX_SYMBOL_STR(kvm_set_cr0) },
	{ 0x3d3bfd9, __VMLINUX_SYMBOL_STR(kvm_get_cs_db_l_bits) },
	{ 0x17c4ab89, __VMLINUX_SYMBOL_STR(kvm_set_cr4) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc4f51bb5, __VMLINUX_SYMBOL_STR(kvm_mmu_unprotect_page_virt) },
	{ 0x17a2d862, __VMLINUX_SYMBOL_STR(load_pdptrs) },
	{ 0xdf6e0b42, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_skinit) },
	{ 0x8cbbb980, __VMLINUX_SYMBOL_STR(kvm_write_tsc) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xd0459e67, __VMLINUX_SYMBOL_STR(kvm_has_tsc_control) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x29444f0, __VMLINUX_SYMBOL_STR(native_read_tsc) },
	{ 0x709cd8cb, __VMLINUX_SYMBOL_STR(kvm_spurious_fault) },
	{ 0x5fdfa2c1, __VMLINUX_SYMBOL_STR(amd_pmu_enable_virt) },
	{ 0x7ac80dd8, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_msr) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x330ec749, __VMLINUX_SYMBOL_STR(kvm_emulate_hypercall) },
	{ 0xc83163f0, __VMLINUX_SYMBOL_STR(kvm_set_dr) },
	{ 0xc8d0007, __VMLINUX_SYMBOL_STR(kvm_vcpu_cache) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xe553c9f9, __VMLINUX_SYMBOL_STR(kvm_is_linear_rip) },
	{ 0xd5e348b5, __VMLINUX_SYMBOL_STR(kvm_x86_ops) },
	{ 0xa7b5a08f, __VMLINUX_SYMBOL_STR(kvm_get_cr8) },
	{ 0xd6d36ae7, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x808596ff, __VMLINUX_SYMBOL_STR(kvm_set_cr3) },
	{ 0x831327da, __VMLINUX_SYMBOL_STR(kvm_max_guest_tsc_khz) },
	{ 0x4723db, __VMLINUX_SYMBOL_STR(kvm_before_handle_nmi) },
	{ 0x82473dae, __VMLINUX_SYMBOL_STR(kvm_cpu_has_interrupt) },
	{ 0xb9352c30, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_inj_virq) },
	{ 0x6759a4fa, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_page_fault) },
	{ 0xcee520de, __VMLINUX_SYMBOL_STR(kvm_set_rflags) },
	{ 0xdd4ab44e, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_nested_intr_vmexit) },
	{ 0x4741a933, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xea248cef, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xa2c9d375, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_write_tsc_offset) },
	{ 0x243898fb, __VMLINUX_SYMBOL_STR(kvm_after_handle_nmi) },
	{ 0x5cff0053, __VMLINUX_SYMBOL_STR(kvm_queue_exception) },
	{ 0x73032782, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x79a38e61, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xce650e9b, __VMLINUX_SYMBOL_STR(kvm_init_shadow_mmu) },
	{ 0x3d9ee9f0, __VMLINUX_SYMBOL_STR(clear_page) },
	{ 0x46ac9ddc, __VMLINUX_SYMBOL_STR(kvm_requeue_exception_e) },
	{ 0xaaf935, __VMLINUX_SYMBOL_STR(kvm_disable_tdp) },
	{ 0xdd994393, __VMLINUX_SYMBOL_STR(x86_emulate_instruction) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8ce4f3ab, __VMLINUX_SYMBOL_STR(kvm_enable_tdp) },
	{ 0xe82b3441, __VMLINUX_SYMBOL_STR(kvm_task_switch) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb19a5453, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xdd744aa, __VMLINUX_SYMBOL_STR(kvm_set_xcr) },
	{ 0xd00bcaac, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_nested_vmrun) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xdf988ed7, __VMLINUX_SYMBOL_STR(kvm_emulate_halt) },
	{ 0x7d8c163d, __VMLINUX_SYMBOL_STR(kvm_vcpu_uninit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x77242ab9, __VMLINUX_SYMBOL_STR(kvm_get_msr_common) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x4913af39, __VMLINUX_SYMBOL_STR(gfn_to_page) },
	{ 0x4738f0ff, __VMLINUX_SYMBOL_STR(kvm_fast_pio_out) },
	{ 0x317f9e6b, __VMLINUX_SYMBOL_STR(kvm_enable_efer_bits) },
	{ 0xcdee36d6, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_nested_vmexit) },
	{ 0x365e9e0c, __VMLINUX_SYMBOL_STR(kvm_set_msr) },
	{ 0x8dd2a284, __VMLINUX_SYMBOL_STR(kvm_init) },
	{ 0x27046576, __VMLINUX_SYMBOL_STR(kvm_exit) },
	{ 0x54c149e8, __VMLINUX_SYMBOL_STR(kvm_requeue_exception) },
	{ 0x18582826, __VMLINUX_SYMBOL_STR(amd_pmu_disable_virt) },
	{ 0xaba5a62d, __VMLINUX_SYMBOL_STR(kvm_read_guest_page) },
	{ 0xdcb7fe91, __VMLINUX_SYMBOL_STR(kvm_rdpmc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kvm";

MODULE_ALIAS("x86cpu:vendor:*:family:*:model:*:feature:*00C2*");

MODULE_INFO(srcversion, "2788297B8862CABBE5CE74C");

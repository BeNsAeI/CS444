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
	{ 0x3fff77f8, __VMLINUX_SYMBOL_STR(cpufreq_generic_attr) },
	{ 0xbc2031de, __VMLINUX_SYMBOL_STR(acpi_processor_get_bios_limit) },
	{ 0xa3fbba4, __VMLINUX_SYMBOL_STR(cpufreq_generic_frequency_table_verify) },
	{ 0x534d47b1, __VMLINUX_SYMBOL_STR(cpufreq_unregister_driver) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xc715d9e0, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x4121531b, __VMLINUX_SYMBOL_STR(node_states) },
	{ 0xb4e626bb, __VMLINUX_SYMBOL_STR(cpufreq_register_driver) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7cd6f042, __VMLINUX_SYMBOL_STR(cpufreq_get_current_driver) },
	{ 0x748e178b, __VMLINUX_SYMBOL_STR(cpufreq_table_validate_and_show) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x17795916, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf7955bb3, __VMLINUX_SYMBOL_STR(cpufreq_notify_post_transition) },
	{ 0xc846e76f, __VMLINUX_SYMBOL_STR(cpufreq_notify_transition) },
	{ 0x34457f3c, __VMLINUX_SYMBOL_STR(cpufreq_cpu_put) },
	{ 0x440b2f30, __VMLINUX_SYMBOL_STR(cpufreq_cpu_get) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x7ae1ae8e, __VMLINUX_SYMBOL_STR(cpufreq_frequency_table_put_attr) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x525c1ee, __VMLINUX_SYMBOL_STR(zalloc_cpumask_var) },
	{ 0x478274ba, __VMLINUX_SYMBOL_STR(acpi_processor_notify_smm) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x454b4ae, __VMLINUX_SYMBOL_STR(cpu_core_map) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x97aad888, __VMLINUX_SYMBOL_STR(acpi_processor_register_performance) },
	{ 0xf82f3657, __VMLINUX_SYMBOL_STR(work_on_cpu) },
	{ 0x8cac8c08, __VMLINUX_SYMBOL_STR(free_cpumask_var) },
	{ 0x1c3a3eed, __VMLINUX_SYMBOL_STR(acpi_processor_unregister_performance) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6228c21f, __VMLINUX_SYMBOL_STR(smp_call_function_single) },
	{ 0xb19a5453, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("x86cpu:vendor:0002:family:000F:model:*:feature:*");

MODULE_INFO(srcversion, "CAFC77CC40E76A054BFE3AE");

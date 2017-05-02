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
	{ 0xbc2031de, __VMLINUX_SYMBOL_STR(acpi_processor_get_bios_limit) },
	{ 0xa3fbba4, __VMLINUX_SYMBOL_STR(cpufreq_generic_frequency_table_verify) },
	{ 0x96aeef11, __VMLINUX_SYMBOL_STR(cpufreq_freq_attr_scaling_available_freqs) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x534d47b1, __VMLINUX_SYMBOL_STR(cpufreq_unregister_driver) },
	{ 0xb4e626bb, __VMLINUX_SYMBOL_STR(cpufreq_register_driver) },
	{ 0x8b43159b, __VMLINUX_SYMBOL_STR(register_cpu_notifier) },
	{ 0xb1cfad22, __VMLINUX_SYMBOL_STR(rdmsr_on_cpu) },
	{ 0x3d7c1ed7, __VMLINUX_SYMBOL_STR(msrs_alloc) },
	{ 0xf127a9bc, __VMLINUX_SYMBOL_STR(acpi_processor_preregister_performance) },
	{ 0x383a8c35, __VMLINUX_SYMBOL_STR(zalloc_cpumask_var_node) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x7cd6f042, __VMLINUX_SYMBOL_STR(cpufreq_get_current_driver) },
	{ 0x1a45cb6c, __VMLINUX_SYMBOL_STR(acpi_disabled) },
	{ 0xd6b33026, __VMLINUX_SYMBOL_STR(cpu_khz) },
	{ 0x478274ba, __VMLINUX_SYMBOL_STR(acpi_processor_notify_smm) },
	{ 0x748e178b, __VMLINUX_SYMBOL_STR(cpufreq_table_validate_and_show) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x454b4ae, __VMLINUX_SYMBOL_STR(cpu_core_map) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x7c102447, __VMLINUX_SYMBOL_STR(cpu_sibling_map) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x97aad888, __VMLINUX_SYMBOL_STR(acpi_processor_register_performance) },
	{ 0x525c1ee, __VMLINUX_SYMBOL_STR(zalloc_cpumask_var) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x846f59a, __VMLINUX_SYMBOL_STR(cpu_info) },
	{ 0xbdaf5b07, __VMLINUX_SYMBOL_STR(acpi_os_read_port) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xa3eded0c, __VMLINUX_SYMBOL_STR(smp_call_function_many) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x7d94f746, __VMLINUX_SYMBOL_STR(acpi_os_write_port) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0x17795916, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0xcf6cfe1f, __VMLINUX_SYMBOL_STR(msrs_free) },
	{ 0x1fe9f800, __VMLINUX_SYMBOL_STR(unregister_cpu_notifier) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x73032782, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x2d6138d0, __VMLINUX_SYMBOL_STR(cpufreq_show_cpus) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbc2fd273, __VMLINUX_SYMBOL_STR(smp_call_function_any) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x6d27ef64, __VMLINUX_SYMBOL_STR(__bitmap_empty) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8cac8c08, __VMLINUX_SYMBOL_STR(free_cpumask_var) },
	{ 0x1c3a3eed, __VMLINUX_SYMBOL_STR(acpi_processor_unregister_performance) },
	{ 0x7ae1ae8e, __VMLINUX_SYMBOL_STR(cpufreq_frequency_table_put_attr) },
	{ 0xcca03002, __VMLINUX_SYMBOL_STR(cpu_bit_bitmap) },
	{ 0x57e49a14, __VMLINUX_SYMBOL_STR(wrmsr_on_cpus) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc3e4bae9, __VMLINUX_SYMBOL_STR(rdmsr_on_cpus) },
	{ 0xc715d9e0, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb19a5453, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:LNXCPU:*");
MODULE_ALIAS("acpi*:ACPI0007:*");
MODULE_ALIAS("x86cpu:vendor:*:family:*:model:*:feature:*0016*");
MODULE_ALIAS("x86cpu:vendor:*:family:*:model:*:feature:*00E8*");

MODULE_INFO(srcversion, "43E08BD5647BB9AFAABB170");

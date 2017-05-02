#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x43804739, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x88b04e39, __VMLINUX_SYMBOL_STR(__register_nmi_handler) },
	{ 0x1bcfb4d1, __VMLINUX_SYMBOL_STR(register_mce_write_callback) },
	{ 0x690924ff, __VMLINUX_SYMBOL_STR(alloc_cpumask_var) },
	{ 0xa3eded0c, __VMLINUX_SYMBOL_STR(smp_call_function_many) },
	{ 0xd255e300, __VMLINUX_SYMBOL_STR(apic) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6d27ef64, __VMLINUX_SYMBOL_STR(__bitmap_empty) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0xb19a5453, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x17795916, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x73032782, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xc715d9e0, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xe0c77bb5, __VMLINUX_SYMBOL_STR(mce_notify_irq) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x8edfb574, __VMLINUX_SYMBOL_STR(injectm) },
	{ 0x2f857551, __VMLINUX_SYMBOL_STR(machine_check_poll) },
	{ 0x6194ffea, __VMLINUX_SYMBOL_STR(do_machine_check) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5A25A1C6F8319DC2821CCC3");

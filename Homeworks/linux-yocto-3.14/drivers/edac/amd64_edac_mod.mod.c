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
	{ 0xcf6cfe1f, __VMLINUX_SYMBOL_STR(msrs_free) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc3c65360, __VMLINUX_SYMBOL_STR(edac_pci_release_generic_ctl) },
	{ 0x17795916, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xc715d9e0, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x3d7c1ed7, __VMLINUX_SYMBOL_STR(msrs_alloc) },
	{ 0x8cac8c08, __VMLINUX_SYMBOL_STR(free_cpumask_var) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x58036cce, __VMLINUX_SYMBOL_STR(amd_northbridges) },
	{ 0xb51fbd64, __VMLINUX_SYMBOL_STR(edac_op_state) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc3e4bae9, __VMLINUX_SYMBOL_STR(rdmsr_on_cpus) },
	{ 0x872ea038, __VMLINUX_SYMBOL_STR(edac_mc_handle_error) },
	{ 0x14878009, __VMLINUX_SYMBOL_STR(amd_report_gart_errors) },
	{ 0x525c1ee, __VMLINUX_SYMBOL_STR(zalloc_cpumask_var) },
	{ 0x21626132, __VMLINUX_SYMBOL_STR(amd_register_ecc_decoder) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xae61b618, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x30e43c9b, __VMLINUX_SYMBOL_STR(edac_mc_free) },
	{ 0x57e49a14, __VMLINUX_SYMBOL_STR(wrmsr_on_cpus) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0x69259f22, __VMLINUX_SYMBOL_STR(edac_mem_types) },
	{ 0x9ee6ac20, __VMLINUX_SYMBOL_STR(edac_mc_alloc) },
	{ 0x2cf28201, __VMLINUX_SYMBOL_STR(edac_pci_create_generic_ctl) },
	{ 0x658c8186, __VMLINUX_SYMBOL_STR(amd_get_nb_id) },
	{ 0xff473365, __VMLINUX_SYMBOL_STR(find_mci_by_dev) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xfa6c0a, __VMLINUX_SYMBOL_STR(edac_mc_add_mc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb19a5453, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd919806a, __VMLINUX_SYMBOL_STR(amd_cache_northbridges) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x737912b3, __VMLINUX_SYMBOL_STR(amd_unregister_ecc_decoder) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x5f60c44f, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x10d6cc64, __VMLINUX_SYMBOL_STR(edac_mc_find) },
	{ 0xefb13236, __VMLINUX_SYMBOL_STR(edac_mc_del_mc) },
	{ 0x117c823b, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=edac_core,edac_mce_amd";

MODULE_ALIAS("pci:v00001022d00001102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001602sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000141Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001532sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7546326B17B43F790A254B2");

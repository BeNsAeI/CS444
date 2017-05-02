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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x260890ab, __VMLINUX_SYMBOL_STR(mptscsih_host_attrs) },
	{ 0xb1c98796, __VMLINUX_SYMBOL_STR(mptscsih_show_info) },
	{ 0xc851375b, __VMLINUX_SYMBOL_STR(mptscsih_bios_param) },
	{ 0x4013228, __VMLINUX_SYMBOL_STR(mptscsih_change_queue_depth) },
	{ 0x7768e464, __VMLINUX_SYMBOL_STR(mptscsih_slave_destroy) },
	{ 0xbbac5286, __VMLINUX_SYMBOL_STR(mptscsih_slave_configure) },
	{ 0x29c8660b, __VMLINUX_SYMBOL_STR(mptscsih_info) },
	{ 0x41a1cd1b, __VMLINUX_SYMBOL_STR(mptscsih_shutdown) },
	{ 0x8d005d18, __VMLINUX_SYMBOL_STR(mptscsih_resume) },
	{ 0x10fa6722, __VMLINUX_SYMBOL_STR(mptscsih_suspend) },
	{ 0xc47c22e8, __VMLINUX_SYMBOL_STR(mpt_deregister) },
	{ 0x4526289b, __VMLINUX_SYMBOL_STR(mpt_event_deregister) },
	{ 0xd9a92a75, __VMLINUX_SYMBOL_STR(mpt_reset_deregister) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x9d9e8d2, __VMLINUX_SYMBOL_STR(fc_release_transport) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x45f4df96, __VMLINUX_SYMBOL_STR(mpt_reset_register) },
	{ 0x1693c577, __VMLINUX_SYMBOL_STR(mpt_event_register) },
	{ 0x5bbc2214, __VMLINUX_SYMBOL_STR(mptscsih_scandv_complete) },
	{ 0xc96411e8, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_complete) },
	{ 0xe7d8b4f2, __VMLINUX_SYMBOL_STR(mpt_register) },
	{ 0x678244f5, __VMLINUX_SYMBOL_STR(mptscsih_io_done) },
	{ 0xf59403bb, __VMLINUX_SYMBOL_STR(fc_attach_transport) },
	{ 0xe3a53f4c, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x5e391a70, __VMLINUX_SYMBOL_STR(fc_remote_port_rolechg) },
	{ 0xbc31b92f, __VMLINUX_SYMBOL_STR(fc_remote_port_add) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x189f2756, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2cfcbbdd, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xa638cf6e, __VMLINUX_SYMBOL_STR(mpt_attach) },
	{ 0x1932f55c, __VMLINUX_SYMBOL_STR(mptscsih_ioc_reset) },
	{ 0xd7edd9, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8aaef8dd, __VMLINUX_SYMBOL_STR(mpt_config) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xd1977c9f, __VMLINUX_SYMBOL_STR(mptscsih_remove) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x577c16e8, __VMLINUX_SYMBOL_STR(fc_remove_host) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x36931542, __VMLINUX_SYMBOL_STR(mptscsih_abort) },
	{ 0x5d444478, __VMLINUX_SYMBOL_STR(mptscsih_dev_reset) },
	{ 0xf53ffde7, __VMLINUX_SYMBOL_STR(mptscsih_bus_reset) },
	{ 0x3d54ad2e, __VMLINUX_SYMBOL_STR(mptscsih_host_reset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa81ca94d, __VMLINUX_SYMBOL_STR(mptscsih_qcmd) },
	{ 0x353f77f2, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0x3ccb66ab, __VMLINUX_SYMBOL_STR(mptscsih_event_process) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf6b4c1b3, __VMLINUX_SYMBOL_STR(scsi_is_fc_rport) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe8d2971c, __VMLINUX_SYMBOL_STR(fc_remote_port_delete) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptscsih,mptbase,scsi_transport_fc";

MODULE_ALIAS("pci:v00001000d00000621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000624sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000622sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000628sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000626sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000642sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001657d00000646sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F4A7A3DEF554D8E0CFFDAF7");

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
	{ 0x2606504f, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xd9a92a75, __VMLINUX_SYMBOL_STR(mpt_reset_deregister) },
	{ 0x4526289b, __VMLINUX_SYMBOL_STR(mpt_event_deregister) },
	{ 0xc0e69f82, __VMLINUX_SYMBOL_STR(mpt_device_driver_deregister) },
	{ 0x1693c577, __VMLINUX_SYMBOL_STR(mpt_event_register) },
	{ 0x45f4df96, __VMLINUX_SYMBOL_STR(mpt_reset_register) },
	{ 0xc47c22e8, __VMLINUX_SYMBOL_STR(mpt_deregister) },
	{ 0x1c520f39, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xe7d8b4f2, __VMLINUX_SYMBOL_STR(mpt_register) },
	{ 0x827716a7, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfc21593a, __VMLINUX_SYMBOL_STR(mpt_device_driver_register) },
	{ 0xe4459fd9, __VMLINUX_SYMBOL_STR(mpt_HardResetHandler) },
	{ 0xd82aa79, __VMLINUX_SYMBOL_STR(mpt_alloc_fw_memory) },
	{ 0xfa7de8ce, __VMLINUX_SYMBOL_STR(mpt_free_fw_memory) },
	{ 0xfa2aa703, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xbecbf4d3, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd7edd9, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0xfbec6a91, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame) },
	{ 0x2ed60c8b, __VMLINUX_SYMBOL_STR(mpt_GetIocState) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x8aaef8dd, __VMLINUX_SYMBOL_STR(mpt_config) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xe1c498de, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x4c08de24, __VMLINUX_SYMBOL_STR(mpt_verify_adapter) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf4a8938e, __VMLINUX_SYMBOL_STR(mpt_halt_firmware) },
	{ 0x8f8dc592, __VMLINUX_SYMBOL_STR(mpt_Soft_Hard_ResetHandler) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x502108d0, __VMLINUX_SYMBOL_STR(mpt_fwfault_debug) },
	{ 0x501d38be, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame_hi_pri) },
	{ 0xb6d6656b, __VMLINUX_SYMBOL_STR(mpt_free_msg_frame) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x9d252a0a, __VMLINUX_SYMBOL_STR(mpt_send_handshake_request) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3e459415, __VMLINUX_SYMBOL_STR(mpt_get_msg_frame) },
	{ 0x43d201ef, __VMLINUX_SYMBOL_STR(mpt_set_taskmgmt_in_progress_flag) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc35f508f, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xdd805159, __VMLINUX_SYMBOL_STR(ioc_list) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdcde434e, __VMLINUX_SYMBOL_STR(mpt_clear_taskmgmt_in_progress_flag) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd672047e, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptbase";


MODULE_INFO(srcversion, "CEB5390A668A825609C05A9");

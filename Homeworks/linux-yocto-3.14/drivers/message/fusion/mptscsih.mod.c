#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x43804739, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x56fef0ed, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0x43d201ef, __VMLINUX_SYMBOL_STR(mpt_set_taskmgmt_in_progress_flag) },
	{ 0xe4459fd9, __VMLINUX_SYMBOL_STR(mpt_HardResetHandler) },
	{ 0x28c17900, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xb0a37bbe, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0xa05f372e, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x3e459415, __VMLINUX_SYMBOL_STR(mpt_get_msg_frame) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf4a8938e, __VMLINUX_SYMBOL_STR(mpt_halt_firmware) },
	{ 0xd5b2e96, __VMLINUX_SYMBOL_STR(scsi_adjust_queue_depth) },
	{ 0x15c98a5d, __VMLINUX_SYMBOL_STR(scsi_print_command) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe0e5101f, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_get_num_paths) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x9d252a0a, __VMLINUX_SYMBOL_STR(mpt_send_handshake_request) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x502108d0, __VMLINUX_SYMBOL_STR(mpt_fwfault_debug) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x6ee5b4df, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xfbec6a91, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame) },
	{ 0x34e4ef1b, __VMLINUX_SYMBOL_STR(mpt_resume) },
	{ 0x8f8dc592, __VMLINUX_SYMBOL_STR(mpt_Soft_Hard_ResetHandler) },
	{ 0x2ed60c8b, __VMLINUX_SYMBOL_STR(mpt_GetIocState) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xea10212a, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0x7b084173, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_pg1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xaece8867, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x801678, __VMLINUX_SYMBOL_STR(flush_scheduled_work) },
	{ 0xda7adf19, __VMLINUX_SYMBOL_STR(mpt_print_ioc_summary) },
	{ 0xe5b6da01, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0x5e7211dd, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb6d6656b, __VMLINUX_SYMBOL_STR(mpt_free_msg_frame) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x63c98d51, __VMLINUX_SYMBOL_STR(mpt_suspend) },
	{ 0xace17a66, __VMLINUX_SYMBOL_STR(mpt_detach) },
	{ 0xdcde434e, __VMLINUX_SYMBOL_STR(mpt_clear_taskmgmt_in_progress_flag) },
	{ 0x871fab85, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
	{ 0x501d38be, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame_hi_pri) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptbase";


MODULE_INFO(srcversion, "03D163D822D52FCCAE0BDEF");

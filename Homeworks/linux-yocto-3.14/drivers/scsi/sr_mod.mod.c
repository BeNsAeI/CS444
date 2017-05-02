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
	{ 0x32f19e0, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb5012304, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0x985a9beb, __VMLINUX_SYMBOL_STR(scsi_prep_return) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4b719758, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x4ae04c08, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0xc65e73c, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x3cf17292, __VMLINUX_SYMBOL_STR(cdrom_number_of_slots) },
	{ 0xfef96e23, __VMLINUX_SYMBOL_STR(__scsi_print_command) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x28c17900, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x60c3277, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0x87458947, __VMLINUX_SYMBOL_STR(unregister_cdrom) },
	{ 0xa1dcfab0, __VMLINUX_SYMBOL_STR(blk_dump_rq_flags) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1d87a43f, __VMLINUX_SYMBOL_STR(cdrom_open) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe9b2af84, __VMLINUX_SYMBOL_STR(scsi_execute) },
	{ 0xf2933e75, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0x6d3a1159, __VMLINUX_SYMBOL_STR(scsi_setup_fs_cmnd) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcd069dd7, __VMLINUX_SYMBOL_STR(cdrom_release) },
	{ 0x720442f4, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xaf3dd7dc, __VMLINUX_SYMBOL_STR(scsi_logging_level) },
	{ 0xd477d6e2, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e6918f0, __VMLINUX_SYMBOL_STR(cdrom_get_media_event) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xd951f265, __VMLINUX_SYMBOL_STR(scsi_prep_fn) },
	{ 0xe4b51427, __VMLINUX_SYMBOL_STR(cdrom_check_events) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xd8b1b576, __VMLINUX_SYMBOL_STR(cdrom_get_last_written) },
	{ 0x52aacc0e, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x2fc829d, __VMLINUX_SYMBOL_STR(scsi_nonblockable_ioctl) },
	{ 0x8200b8c3, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0xba0dccd0, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xf15b0d71, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x6755e7dd, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0x2629b7f6, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xade5819a, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xd90c29e3, __VMLINUX_SYMBOL_STR(cdrom_ioctl) },
	{ 0x9ba4a9cc, __VMLINUX_SYMBOL_STR(blk_pm_runtime_init) },
	{ 0x1a091202, __VMLINUX_SYMBOL_STR(scsi_setup_blk_pc_cmnd) },
	{ 0xcd162a31, __VMLINUX_SYMBOL_STR(register_cdrom) },
	{ 0xa41e9598, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x7ff2d1f1, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0xd3cf9783, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x5398fb3c, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
	{ 0xca5dbc50, __VMLINUX_SYMBOL_STR(scsi_print_sense_hdr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";


MODULE_INFO(srcversion, "68623654B9979831A002521");

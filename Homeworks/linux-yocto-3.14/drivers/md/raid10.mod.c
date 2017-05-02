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
	{ 0x2a37e04b, __VMLINUX_SYMBOL_STR(blk_queue_merge_bvec) },
	{        0, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x83fd2abc, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0xfd7d1c12, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x49159373, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0xa21c7908, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x380fbaa1, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x2b6b74e8, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0x2e2e7d94, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x412fc7c2, __VMLINUX_SYMBOL_STR(md_is_badblock) },
	{ 0x4a48bcba, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0xf97d08f0, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0x19860226, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x3575a173, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x2d519631, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0xa05f372e, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd1d6d028, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0xefba93e1, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0xd4704ccd, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0xbe49668e, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0x675e6e43, __VMLINUX_SYMBOL_STR(md_new_event) },
	{ 0x4aed417f, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x304e69d1, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe806f31e, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x5920fda8, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0x7464b1d, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0xff4afc92, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x6c5bdfce, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6baaee40, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xa2fb6c7f, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x8286a340, __VMLINUX_SYMBOL_STR(md_do_sync) },
	{ 0x4873fa8b, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xa0df2ad1, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0xe074eaee, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x5d84c117, __VMLINUX_SYMBOL_STR(blk_sync_queue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x7cd23261, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x4464f231, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0x3d769dfc, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x242fdc95, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0x4e779aad, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x5f60907b, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x88197c55, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0xa452096, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xce900af, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x6e71de8c, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0xe9dff136, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x93735034, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0x9c85c98f, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x46ea064d, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x79a38e61, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x29056d69, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x3f71faa1, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9bc03615, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0x2061eb0a, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x2cdf231, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4aad52d7, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xce46e140, __VMLINUX_SYMBOL_STR(ktime_get_ts) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x2fc19de2, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0xa48ef4bb, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0x6beb6fe3, __VMLINUX_SYMBOL_STR(md_finish_reshape) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x20116f, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1b82fefa, __VMLINUX_SYMBOL_STR(md_unplug) },
	{ 0xa34186c2, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x312ca88d, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x925520d2, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0xc7af3b3a, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x2b6d7db1, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xfde83eee, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xf2d346f2, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4D991D4742AC25C253B8B70");

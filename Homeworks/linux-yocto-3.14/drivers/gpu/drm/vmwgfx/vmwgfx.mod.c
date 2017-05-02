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
	{ 0x80d86f0e, __VMLINUX_SYMBOL_STR(ttm_object_device_release) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6adf436b, __VMLINUX_SYMBOL_STR(ttm_prime_fd_to_handle) },
	{ 0x3ce4c26d, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0xf0387d85, __VMLINUX_SYMBOL_STR(ttm_pool_populate) },
	{ 0x485a5bc0, __VMLINUX_SYMBOL_STR(ttm_ref_object_add) },
	{ 0xce6e43a8, __VMLINUX_SYMBOL_STR(ttm_base_object_lookup_for_ref) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd6df9683, __VMLINUX_SYMBOL_STR(ttm_tt_fini) },
	{ 0xb981d97c, __VMLINUX_SYMBOL_STR(ttm_dma_tt_init) },
	{ 0x46e72966, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0xf7ff029a, __VMLINUX_SYMBOL_STR(pci_release_region) },
	{ 0x4e2fbbcf, __VMLINUX_SYMBOL_STR(ttm_bo_create) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x26ee0a7c, __VMLINUX_SYMBOL_STR(ttm_bo_swapout_all) },
	{ 0x1e0c2be4, __VMLINUX_SYMBOL_STR(ioremap_wc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9d6e60b0, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x5c511a45, __VMLINUX_SYMBOL_STR(drm_mode_config_cleanup) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x1918f453, __VMLINUX_SYMBOL_STR(drm_pci_exit) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xf43a032b, __VMLINUX_SYMBOL_STR(drm_master_get) },
	{ 0x2b54aa9a, __VMLINUX_SYMBOL_STR(ttm_object_file_init) },
	{ 0x2048b362, __VMLINUX_SYMBOL_STR(drm_mode_destroy) },
	{ 0x770fb1b8, __VMLINUX_SYMBOL_STR(ttm_suspend_unlock) },
	{ 0x6b797c25, __VMLINUX_SYMBOL_STR(ttm_read_unlock) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x135eb40c, __VMLINUX_SYMBOL_STR(ttm_bo_validate) },
	{ 0x3c02e095, __VMLINUX_SYMBOL_STR(arch_phys_wc_add) },
	{ 0xa989054d, __VMLINUX_SYMBOL_STR(ttm_bo_init) },
	{ 0x28b5068b, __VMLINUX_SYMBOL_STR(ttm_bo_synccpu_write_release) },
	{ 0x9b0c8220, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x498351ba, __VMLINUX_SYMBOL_STR(ttm_dma_unpopulate) },
	{ 0xcc1a1226, __VMLINUX_SYMBOL_STR(ttm_read_lock) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x5d7318dc, __VMLINUX_SYMBOL_STR(drm_global_item_ref) },
	{ 0xf68687be, __VMLINUX_SYMBOL_STR(__sg_page_iter_start) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x77111ee6, __VMLINUX_SYMBOL_STR(drm_vblank_cleanup) },
	{ 0x70c53eca, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x72d412be, __VMLINUX_SYMBOL_STR(cfb_fillrect) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x718a56bb, __VMLINUX_SYMBOL_STR(ttm_write_unlock) },
	{ 0x56e364a2, __VMLINUX_SYMBOL_STR(drm_vblank_init) },
	{ 0x56c32cd8, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0xdbb5a9f5, __VMLINUX_SYMBOL_STR(drm_ht_remove_item) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0x2a5c550b, __VMLINUX_SYMBOL_STR(ttm_prime_object_init) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x8bd104f5, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0xbecbf4d3, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x62bf3961, __VMLINUX_SYMBOL_STR(ttm_bo_synccpu_write_grab) },
	{ 0x980005d1, __VMLINUX_SYMBOL_STR(ttm_dma_populate) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x67a6849d, __VMLINUX_SYMBOL_STR(ttm_mem_global_init) },
	{ 0xd2335101, __VMLINUX_SYMBOL_STR(drm_fb_get_bpp_depth) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9d3eab45, __VMLINUX_SYMBOL_STR(ttm_suspend_lock) },
	{ 0x59290a47, __VMLINUX_SYMBOL_STR(ttm_mem_global_release) },
	{ 0x2134f4f6, __VMLINUX_SYMBOL_STR(drm_mode_connector_attach_encoder) },
	{ 0x193179a, __VMLINUX_SYMBOL_STR(drm_irq_install) },
	{ 0x7d500885, __VMLINUX_SYMBOL_STR(ttm_bo_unref) },
	{ 0x45c92723, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xa34a77f7, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x16a6b92e, __VMLINUX_SYMBOL_STR(cfb_imageblit) },
	{ 0x32753458, __VMLINUX_SYMBOL_STR(ttm_vt_unlock) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x88ad2548, __VMLINUX_SYMBOL_STR(ttm_bo_add_to_lru) },
	{ 0xfa2aa703, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8f7df3a7, __VMLINUX_SYMBOL_STR(drm_object_attach_property) },
	{ 0x8cedee9a, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0x256474b8, __VMLINUX_SYMBOL_STR(drm_put_dev) },
	{ 0x7db91120, __VMLINUX_SYMBOL_STR(ttm_bo_kmap) },
	{ 0x9bc8057e, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x7bdc92c2, __VMLINUX_SYMBOL_STR(ttm_tt_init) },
	{ 0x3eb37b9d, __VMLINUX_SYMBOL_STR(drm_ht_create) },
	{ 0x95b3d734, __VMLINUX_SYMBOL_STR(ttm_bo_evict_mm) },
	{ 0x9cc4f70a, __VMLINUX_SYMBOL_STR(register_pm_notifier) },
	{ 0x5e51cd74, __VMLINUX_SYMBOL_STR(swiotlb_nr_tbl) },
	{ 0xc3be8716, __VMLINUX_SYMBOL_STR(ttm_eu_fence_buffer_objects) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8568be30, __VMLINUX_SYMBOL_STR(ttm_write_lock) },
	{ 0xd8edb115, __VMLINUX_SYMBOL_STR(ttm_base_object_unref) },
	{ 0x13a1a61a, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0xf0187927, __VMLINUX_SYMBOL_STR(__sg_page_iter_next) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x54c3faa, __VMLINUX_SYMBOL_STR(drm_framebuffer_unreference) },
	{ 0x2105e18d, __VMLINUX_SYMBOL_STR(ttm_vt_lock) },
	{ 0x9fc0a160, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0x79fb0082, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xb7f322ab, __VMLINUX_SYMBOL_STR(ttm_bo_init_mm) },
	{ 0x82082780, __VMLINUX_SYMBOL_STR(ttm_mem_global_free) },
	{ 0x72d41aa3, __VMLINUX_SYMBOL_STR(ttm_bo_wait) },
	{ 0x4fd5cfb9, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x880a15ad, __VMLINUX_SYMBOL_STR(ttm_base_object_lookup) },
	{ 0x12e90cd9, __VMLINUX_SYMBOL_STR(ttm_bo_device_init) },
	{ 0xce36343e, __VMLINUX_SYMBOL_STR(ttm_prime_handle_to_fd) },
	{ 0xd7be2ae6, __VMLINUX_SYMBOL_STR(drm_sysfs_connector_remove) },
	{ 0x3b4ceb4a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xe7197773, __VMLINUX_SYMBOL_STR(drm_ht_insert_item) },
	{ 0xe6e3b875, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x9745d638, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0xfd63bd20, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0x8657f0f8, __VMLINUX_SYMBOL_STR(ttm_object_device_init) },
	{ 0xcaef1b77, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x8754d87d, __VMLINUX_SYMBOL_STR(ttm_eu_backoff_reservation) },
	{ 0x78dd8dda, __VMLINUX_SYMBOL_STR(drm_mode_connector_list_update) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x6a53535, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xae4b94c, __VMLINUX_SYMBOL_STR(drm_ht_remove) },
	{ 0x998e45c0, __VMLINUX_SYMBOL_STR(ttm_ref_object_base_unref) },
	{ 0x6f36c782, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x17dc2364, __VMLINUX_SYMBOL_STR(ttm_bo_del_sub_from_lru) },
	{ 0xf38e76e5, __VMLINUX_SYMBOL_STR(ttm_mem_global_alloc) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xf08fe3ee, __VMLINUX_SYMBOL_STR(ttm_bo_kunmap) },
	{ 0x5226445d, __VMLINUX_SYMBOL_STR(drm_irq_uninstall) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xe5818424, __VMLINUX_SYMBOL_STR(drm_get_pci_dev) },
	{ 0x8e332829, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xf53013ee, __VMLINUX_SYMBOL_STR(drm_sysfs_connector_add) },
	{ 0x187ec525, __VMLINUX_SYMBOL_STR(drm_master_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x788e53bc, __VMLINUX_SYMBOL_STR(ttm_eu_reserve_buffers) },
	{ 0x8eff9111, __VMLINUX_SYMBOL_STR(drm_ht_find_item) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb38e3649, __VMLINUX_SYMBOL_STR(drm_crtc_init) },
	{ 0xa37710d, __VMLINUX_SYMBOL_STR(ttm_lock_init) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x239ab722, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0x5fe1e065, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x2b49dcd4, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xc1c6e66c, __VMLINUX_SYMBOL_STR(fb_deferred_io_cleanup) },
	{ 0x58748994, __VMLINUX_SYMBOL_STR(drm_mode_set_config_internal) },
	{ 0xa5b77488, __VMLINUX_SYMBOL_STR(fb_deferred_io_init) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0xe585093e, __VMLINUX_SYMBOL_STR(ttm_bo_device_release) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x1286ec12, __VMLINUX_SYMBOL_STR(drm_mode_create_dirty_info_property) },
	{ 0x4baa4c4b, __VMLINUX_SYMBOL_STR(drm_crtc_cleanup) },
	{ 0x68e05d57, __VMLINUX_SYMBOL_STR(getrawmonotonic) },
	{ 0x248c273b, __VMLINUX_SYMBOL_STR(ida_remove) },
	{ 0xb86a737d, __VMLINUX_SYMBOL_STR(drm_mode_config_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4c6f5941, __VMLINUX_SYMBOL_STR(ttm_dma_tt_fini) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2e69f650, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x6052860c, __VMLINUX_SYMBOL_STR(ttm_round_pot) },
	{ 0x5182420f, __VMLINUX_SYMBOL_STR(ida_pre_get) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x2196045, __VMLINUX_SYMBOL_STR(ww_mutex_unlock) },
	{ 0x94894449, __VMLINUX_SYMBOL_STR(ttm_base_object_init) },
	{ 0x7681946c, __VMLINUX_SYMBOL_STR(unregister_pm_notifier) },
	{ 0xffa61e3b, __VMLINUX_SYMBOL_STR(drm_framebuffer_lookup) },
	{ 0x87a547c3, __VMLINUX_SYMBOL_STR(sg_alloc_table_from_pages) },
	{ 0x48b5bc15, __VMLINUX_SYMBOL_STR(drm_modeset_lock_all) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x7a21c0a8, __VMLINUX_SYMBOL_STR(cfb_copyarea) },
	{ 0xb1645a2e, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0x564e1aee, __VMLINUX_SYMBOL_STR(ttm_bo_global_init) },
	{ 0x11f42cd9, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4ec7d5b6, __VMLINUX_SYMBOL_STR(ttm_bo_manager_func) },
	{ 0x16c655fd, __VMLINUX_SYMBOL_STR(drm_modeset_unlock_all) },
	{ 0x50d68377, __VMLINUX_SYMBOL_STR(arch_phys_wc_del) },
	{ 0x126c4555, __VMLINUX_SYMBOL_STR(drm_pci_init) },
	{ 0x1ff157c8, __VMLINUX_SYMBOL_STR(drm_framebuffer_init) },
	{ 0x498dcb5e, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0x5e15d54c, __VMLINUX_SYMBOL_STR(ida_init) },
	{ 0xb1b42470, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xc68e98ec, __VMLINUX_SYMBOL_STR(ttm_pool_unpopulate) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x3ea0773c, __VMLINUX_SYMBOL_STR(ida_get_new_above) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x82477240, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xa2531915, __VMLINUX_SYMBOL_STR(ttm_bo_clean_mm) },
	{ 0x489a72c4, __VMLINUX_SYMBOL_STR(drm_mode_crtc_set_gamma_size) },
	{ 0x44cbc5d9, __VMLINUX_SYMBOL_STR(drm_mode_object_find) },
	{ 0x4e8dd264, __VMLINUX_SYMBOL_STR(ttm_bo_global_release) },
	{ 0x2a6e6109, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xf8df4b9, __VMLINUX_SYMBOL_STR(pci_request_region) },
	{ 0x4d6dacf5, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xd8cd4130, __VMLINUX_SYMBOL_STR(drm_mode_vrefresh) },
	{ 0x67db3112, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0xfbc2c5ec, __VMLINUX_SYMBOL_STR(ttm_object_file_release) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xb5540008, __VMLINUX_SYMBOL_STR(drm_global_item_unref) },
	{ 0xdc62bbb5, __VMLINUX_SYMBOL_STR(drm_framebuffer_cleanup) },
	{ 0xa7a9615b, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0x5b5cf8ec, __VMLINUX_SYMBOL_STR(ttm_bo_mmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ttm,drm";

MODULE_ALIAS("pci:v000015ADd00000405sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2FB1B1E5E1189FB045B531C");

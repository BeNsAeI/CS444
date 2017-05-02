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
	{ 0x42595e58, __VMLINUX_SYMBOL_STR(vgacon_text_force) },
	{ 0x53eed159, __VMLINUX_SYMBOL_STR(drm_helper_move_panel_connectors_to_head) },
	{ 0x5358fc36, __VMLINUX_SYMBOL_STR(ring_buffer_discard_commit) },
	{        0, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xa82ded68, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x3ce4c26d, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0xf0922876, __VMLINUX_SYMBOL_STR(drm_prime_gem_destroy) },
	{ 0xe8847947, __VMLINUX_SYMBOL_STR(drm_fb_helper_set_par) },
	{ 0xc2f9c045, __VMLINUX_SYMBOL_STR(timespec_to_jiffies) },
	{ 0x55c629e6, __VMLINUX_SYMBOL_STR(device_remove_bin_file) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x22c2beda, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xb52ee8be, __VMLINUX_SYMBOL_STR(intel_gtt_clear_range) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdb3d9564, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x5d74dbcf, __VMLINUX_SYMBOL_STR(pnp_range_reserved) },
	{ 0x46e72966, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0xfd60df2, __VMLINUX_SYMBOL_STR(drm_get_connector_status_name) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0x405a3e95, __VMLINUX_SYMBOL_STR(drm_calc_timestamping_constants) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xc7798fa8, __VMLINUX_SYMBOL_STR(drm_get_edid) },
	{ 0x8bd8b308, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0xeef2f834, __VMLINUX_SYMBOL_STR(drm_vblank_pre_modeset) },
	{ 0xbafbf0b1, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xeec1850c, __VMLINUX_SYMBOL_STR(drm_crtc_index) },
	{ 0x91fec1cc, __VMLINUX_SYMBOL_STR(drm_rect_calc_vscale) },
	{ 0x762e8791, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x1e0c2be4, __VMLINUX_SYMBOL_STR(ioremap_wc) },
	{ 0xd75fc7ec, __VMLINUX_SYMBOL_STR(drm_calc_vbltimestamp_from_scanoutpos) },
	{ 0x68e1cb19, __VMLINUX_SYMBOL_STR(drm_fb_helper_initial_config) },
	{ 0x78f3d2df, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xbd2dc36e, __VMLINUX_SYMBOL_STR(drm_hdmi_vendor_infoframe_from_display_mode) },
	{ 0x1149f06, __VMLINUX_SYMBOL_STR(drm_edid_to_eld) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x889cc81e, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x767ddb02, __VMLINUX_SYMBOL_STR(set_memory_wc) },
	{ 0x190ed54c, __VMLINUX_SYMBOL_STR(intel_gmch_probe) },
	{ 0x4acd93d3, __VMLINUX_SYMBOL_STR(release_resource) },
	{ 0x691001b5, __VMLINUX_SYMBOL_STR(acpi_evaluate_integer) },
	{ 0x9d6e60b0, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x5a1c4daa, __VMLINUX_SYMBOL_STR(pci_unmap_rom) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xfe53a8d3, __VMLINUX_SYMBOL_STR(drm_gem_dmabuf_release) },
	{ 0x5c511a45, __VMLINUX_SYMBOL_STR(drm_mode_config_cleanup) },
	{ 0x4963c0e1, __VMLINUX_SYMBOL_STR(vga_get) },
	{ 0xe21ada38, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0xdf12a927, __VMLINUX_SYMBOL_STR(acpi_check_dsm) },
	{ 0xf5af56ff, __VMLINUX_SYMBOL_STR(drm_mode_config_reset) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x1918f453, __VMLINUX_SYMBOL_STR(drm_pci_exit) },
	{ 0x440b2f30, __VMLINUX_SYMBOL_STR(cpufreq_cpu_get) },
	{ 0x1db7706b, __VMLINUX_SYMBOL_STR(__copy_user_nocache) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xcde7219f, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x2048b362, __VMLINUX_SYMBOL_STR(drm_mode_destroy) },
	{ 0x4d9c6bc4, __VMLINUX_SYMBOL_STR(drm_match_cea_mode) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xc35a6a00, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xc715d9e0, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xafaf1f28, __VMLINUX_SYMBOL_STR(dma_buf_detach) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x3c02e095, __VMLINUX_SYMBOL_STR(arch_phys_wc_add) },
	{ 0xdb7d40b2, __VMLINUX_SYMBOL_STR(drm_property_create_range) },
	{ 0x5940a096, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xdc8c21f3, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_leave) },
	{ 0xc4000f9f, __VMLINUX_SYMBOL_STR(drm_mm_scan_add_block) },
	{ 0x780fdfd1, __VMLINUX_SYMBOL_STR(intel_enable_gtt) },
	{ 0x1a63af34, __VMLINUX_SYMBOL_STR(vga_switcheroo_process_delayed_switch) },
	{ 0xb54533f7, __VMLINUX_SYMBOL_STR(usecs_to_jiffies) },
	{ 0x9972db48, __VMLINUX_SYMBOL_STR(drm_rect_calc_vscale_relaxed) },
	{ 0x6df8f4cd, __VMLINUX_SYMBOL_STR(pm_qos_add_request) },
	{ 0xe8cd8cbd, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0x526f6f71, __VMLINUX_SYMBOL_STR(drm_rect_calc_hscale_relaxed) },
	{ 0x6d2785b5, __VMLINUX_SYMBOL_STR(pm_qos_remove_request) },
	{ 0x364ec462, __VMLINUX_SYMBOL_STR(drm_get_encoder_name) },
	{ 0x2a9d51cb, __VMLINUX_SYMBOL_STR(acpi_bus_get_device) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x8e2f8a13, __VMLINUX_SYMBOL_STR(drm_plane_init) },
	{ 0xef66e790, __VMLINUX_SYMBOL_STR(drm_get_connector_name) },
	{ 0x9fbb98c, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0xa05f372e, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe79db148, __VMLINUX_SYMBOL_STR(sysfs_create_files) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x19fd1372, __VMLINUX_SYMBOL_STR(pci_get_class) },
	{ 0xb2b689ec, __VMLINUX_SYMBOL_STR(seq_write) },
	{ 0xf68687be, __VMLINUX_SYMBOL_STR(__sg_page_iter_start) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xf0ef15b4, __VMLINUX_SYMBOL_STR(list_sort) },
	{ 0xfbb26d14, __VMLINUX_SYMBOL_STR(drm_gem_free_mmap_offset) },
	{ 0xc9c7eadb, __VMLINUX_SYMBOL_STR(event_triggers_post_call) },
	{ 0x77111ee6, __VMLINUX_SYMBOL_STR(drm_vblank_cleanup) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x5245f6a4, __VMLINUX_SYMBOL_STR(hdmi_infoframe_pack) },
	{ 0x72d412be, __VMLINUX_SYMBOL_STR(cfb_fillrect) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x9621849f, __VMLINUX_SYMBOL_STR(ring_buffer_event_data) },
	{ 0xd5b637d8, __VMLINUX_SYMBOL_STR(drm_kms_helper_hotplug_event) },
	{ 0xfb497216, __VMLINUX_SYMBOL_STR(drm_mm_insert_node_in_range_generic) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x216a3ab7, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x56e364a2, __VMLINUX_SYMBOL_STR(drm_vblank_init) },
	{ 0x6248b0fa, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x56c32cd8, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0x2f368af5, __VMLINUX_SYMBOL_STR(drm_pci_free) },
	{ 0xb95beb55, __VMLINUX_SYMBOL_STR(drm_object_property_set_value) },
	{ 0xf5447b95, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x8e3f919b, __VMLINUX_SYMBOL_STR(pci_bus_alloc_resource) },
	{ 0x44aaf30f, __VMLINUX_SYMBOL_STR(tsc_khz) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x9896d83e, __VMLINUX_SYMBOL_STR(shmem_truncate_range) },
	{ 0xf5ce272b, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0x60b40fd8, __VMLINUX_SYMBOL_STR(copy_user_enhanced_fast_string) },
	{ 0xa2bd908f, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9d9103ab, __VMLINUX_SYMBOL_STR(drm_av_sync_delay) },
	{ 0xffc6c87a, __VMLINUX_SYMBOL_STR(drm_detect_monitor_audio) },
	{ 0x8826c13b, __VMLINUX_SYMBOL_STR(acpi_video_register) },
	{ 0x2d80be4d, __VMLINUX_SYMBOL_STR(drm_mm_init_scan) },
	{ 0x9181602d, __VMLINUX_SYMBOL_STR(set_page_dirty) },
	{ 0x12ab1c9, __VMLINUX_SYMBOL_STR(vga_put) },
	{ 0x34871adf, __VMLINUX_SYMBOL_STR(drm_dp_channel_eq_ok) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x8bd104f5, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0xdc6cb9c7, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x3da171f9, __VMLINUX_SYMBOL_STR(pci_mem_start) },
	{ 0xbecbf4d3, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xd2fb4a42, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x8b1d234a, __VMLINUX_SYMBOL_STR(fb_set_suspend) },
	{ 0xc631580a, __VMLINUX_SYMBOL_STR(console_unlock) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3187ec42, __VMLINUX_SYMBOL_STR(drm_fb_helper_pan_display) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xa96acfcb, __VMLINUX_SYMBOL_STR(drm_rect_debug_print) },
	{ 0xa0c37ab3, __VMLINUX_SYMBOL_STR(drm_handle_vblank) },
	{ 0x91bd57d2, __VMLINUX_SYMBOL_STR(vga_switcheroo_unregister_client) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x88ab6fe3, __VMLINUX_SYMBOL_STR(kgdb_active) },
	{ 0xef6c3f70, __VMLINUX_SYMBOL_STR(round_jiffies_up_relative) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x601eaeb3, __VMLINUX_SYMBOL_STR(drm_fb_helper_restore_fbdev_mode) },
	{ 0x9d5818b, __VMLINUX_SYMBOL_STR(trace_event_buffer_lock_reserve) },
	{ 0x2d4cce8, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x667d8a, __VMLINUX_SYMBOL_STR(drm_mm_init) },
	{ 0x2f384db3, __VMLINUX_SYMBOL_STR(acpi_is_video_device) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2134f4f6, __VMLINUX_SYMBOL_STR(drm_mode_connector_attach_encoder) },
	{ 0x193179a, __VMLINUX_SYMBOL_STR(drm_irq_install) },
	{ 0xe81ef1dd, __VMLINUX_SYMBOL_STR(remove_conflicting_framebuffers) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x13586425, __VMLINUX_SYMBOL_STR(drm_mode_copy) },
	{ 0x26b268db, __VMLINUX_SYMBOL_STR(drm_noop) },
	{ 0xe5b2894f, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x45c92723, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x48193639, __VMLINUX_SYMBOL_STR(acpi_lid_open) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x684a1cc5, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x16a6b92e, __VMLINUX_SYMBOL_STR(cfb_imageblit) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x629c05e1, __VMLINUX_SYMBOL_STR(drm_clflush_sg) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x970e32d, __VMLINUX_SYMBOL_STR(drm_mode_set_name) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xfa2aa703, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xcffe925a, __VMLINUX_SYMBOL_STR(drm_helper_mode_fill_fb_struct) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8f7df3a7, __VMLINUX_SYMBOL_STR(drm_object_attach_property) },
	{ 0x8cedee9a, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0xf5b5d961, __VMLINUX_SYMBOL_STR(drm_mode_create_tv_properties) },
	{ 0x7a890c8, __VMLINUX_SYMBOL_STR(fb_alloc_cmap) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x256474b8, __VMLINUX_SYMBOL_STR(drm_put_dev) },
	{ 0x7023bea8, __VMLINUX_SYMBOL_STR(unregister_acpi_notifier) },
	{ 0xe5772d4a, __VMLINUX_SYMBOL_STR(copy_user_generic_string) },
	{ 0x5831143a, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0x3ae7b2d0, __VMLINUX_SYMBOL_STR(drm_mm_reserve_node) },
	{ 0xafa6829a, __VMLINUX_SYMBOL_STR(drm_gem_dumb_destroy) },
	{ 0x870b5dc0, __VMLINUX_SYMBOL_STR(vmap) },
	{ 0xcbae6c7a, __VMLINUX_SYMBOL_STR(acpi_lid_notifier_unregister) },
	{ 0xad039c54, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x3a32839e, __VMLINUX_SYMBOL_STR(intel_gtt_chipset_flush) },
	{ 0xc1c7063e, __VMLINUX_SYMBOL_STR(pci_map_rom) },
	{ 0x98e47d2, __VMLINUX_SYMBOL_STR(drm_dp_link_train_clock_recovery_delay) },
	{ 0xa77858bb, __VMLINUX_SYMBOL_STR(drm_dp_get_adjust_request_voltage) },
	{ 0x75f478f1, __VMLINUX_SYMBOL_STR(dma_buf_put) },
	{ 0xb0957848, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_var) },
	{ 0x97f16b6c, __VMLINUX_SYMBOL_STR(shmem_read_mapping_page_gfp) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xff784133, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xfbaaf01e, __VMLINUX_SYMBOL_STR(console_lock) },
	{ 0x7cda2a9f, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xd6d36ae7, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x93a6e0b2, __VMLINUX_SYMBOL_STR(io_schedule) },
	{ 0x5e51cd74, __VMLINUX_SYMBOL_STR(swiotlb_nr_tbl) },
	{ 0xa77944d4, __VMLINUX_SYMBOL_STR(drm_send_vblank_event) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xae61b618, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x24fd9f89, __VMLINUX_SYMBOL_STR(drm_select_eld) },
	{ 0xdab72ce2, __VMLINUX_SYMBOL_STR(vga_client_register) },
	{ 0x46d1763c, __VMLINUX_SYMBOL_STR(drm_probe_ddc) },
	{ 0x6b72277b, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0xfb6eedf9, __VMLINUX_SYMBOL_STR(power_group_name) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xf0187927, __VMLINUX_SYMBOL_STR(__sg_page_iter_next) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xd0e30101, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0x54c3faa, __VMLINUX_SYMBOL_STR(drm_framebuffer_unreference) },
	{ 0x326388e, __VMLINUX_SYMBOL_STR(sysfs_merge_group) },
	{ 0x9fc0a160, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0x2a942ab2, __VMLINUX_SYMBOL_STR(drm_mm_insert_node_generic) },
	{ 0x79fb0082, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xa3cf9832, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0xbe001c53, __VMLINUX_SYMBOL_STR(drm_property_add_enum) },
	{ 0xae2cdc38, __VMLINUX_SYMBOL_STR(pid_task) },
	{ 0xbf410ba, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x4fd5cfb9, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xde171c30, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0xd7be2ae6, __VMLINUX_SYMBOL_STR(drm_sysfs_connector_remove) },
	{ 0xfaf61025, __VMLINUX_SYMBOL_STR(dma_buf_unmap_attachment) },
	{ 0xaf770339, __VMLINUX_SYMBOL_STR(sysfs_unmerge_group) },
	{ 0x9bc2db59, __VMLINUX_SYMBOL_STR(drm_debugfs_create_files) },
	{ 0x3d769dfc, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x1616cb30, __VMLINUX_SYMBOL_STR(acpi_evaluate_dsm) },
	{ 0x9745d638, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0xfd63bd20, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0x6dc8fffe, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_enable) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x3121500a, __VMLINUX_SYMBOL_STR(drm_gem_vm_open) },
	{ 0xcdbe51fd, __VMLINUX_SYMBOL_STR(drm_mode_connector_update_edid_property) },
	{ 0xa2ba4b0, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x1d67cb10, __VMLINUX_SYMBOL_STR(drm_gem_vm_close) },
	{ 0x8505a5f2, __VMLINUX_SYMBOL_STR(mark_page_accessed) },
	{ 0x7a45377b, __VMLINUX_SYMBOL_STR(acpi_video_unregister) },
	{ 0xcaef1b77, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xfbdcf23, __VMLINUX_SYMBOL_STR(drm_getsarea) },
	{ 0x4ea1f5a2, __VMLINUX_SYMBOL_STR(drm_gem_object_free) },
	{ 0x9c491f60, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0x4780a2e3, __VMLINUX_SYMBOL_STR(ftrace_event_reg) },
	{ 0xdcc3a419, __VMLINUX_SYMBOL_STR(copy_user_generic_unrolled) },
	{ 0xa452096, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x622f17f7, __VMLINUX_SYMBOL_STR(drm_gem_prime_fd_to_handle) },
	{ 0x98b71c6, __VMLINUX_SYMBOL_STR(fb_dealloc_cmap) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x152e422, __VMLINUX_SYMBOL_STR(drm_vblank_post_modeset) },
	{ 0x83faafd6, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xe266e70d, __VMLINUX_SYMBOL_STR(drm_mode_set_crtcinfo) },
	{ 0xeb096f09, __VMLINUX_SYMBOL_STR(drm_plane_cleanup) },
	{ 0x6a53535, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x97d684f7, __VMLINUX_SYMBOL_STR(drm_property_create_enum) },
	{ 0x4741a933, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x93f5d518, __VMLINUX_SYMBOL_STR(drm_mode_create) },
	{ 0x2be34200, __VMLINUX_SYMBOL_STR(drm_gem_mmap) },
	{ 0xea248cef, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xd311eb77, __VMLINUX_SYMBOL_STR(drm_vblank_off) },
	{ 0x6f36c782, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xf996014d, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0xdde83545, __VMLINUX_SYMBOL_STR(intel_gtt_get) },
	{ 0xa02295a7, __VMLINUX_SYMBOL_STR(dma_buf_map_attachment) },
	{ 0x8d148c2a, __VMLINUX_SYMBOL_STR(drm_clflush_pages) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x1bdc381d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x50d2592d, __VMLINUX_SYMBOL_STR(hex_dump_to_buffer) },
	{ 0x25bc3481, __VMLINUX_SYMBOL_STR(drm_mode_create_scaling_mode_property) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x973fa82e, __VMLINUX_SYMBOL_STR(register_acpi_notifier) },
	{ 0x40d04664, __VMLINUX_SYMBOL_STR(console_trylock) },
	{ 0x3ba4df83, __VMLINUX_SYMBOL_STR(drm_framebuffer_unregister_private) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x182e011e, __VMLINUX_SYMBOL_STR(drm_fb_helper_check_var) },
	{ 0x8b5c7817, __VMLINUX_SYMBOL_STR(drm_gem_private_object_init) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x84e924ba, __VMLINUX_SYMBOL_STR(drm_dp_get_adjust_request_pre_emphasis) },
	{ 0xda5d03dc, __VMLINUX_SYMBOL_STR(drm_fb_helper_blank) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xe6f46e6e, __VMLINUX_SYMBOL_STR(drm_clflush_virt_range) },
	{ 0xf47a9f23, __VMLINUX_SYMBOL_STR(vga_switcheroo_client_fb_set) },
	{ 0x5226445d, __VMLINUX_SYMBOL_STR(drm_irq_uninstall) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xe5818424, __VMLINUX_SYMBOL_STR(drm_get_pci_dev) },
	{ 0x8e332829, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x368d25c5, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0xb01b1db8, __VMLINUX_SYMBOL_STR(intel_gtt_insert_sg_entries) },
	{ 0xf53013ee, __VMLINUX_SYMBOL_STR(drm_sysfs_connector_add) },
	{ 0x2ff063b5, __VMLINUX_SYMBOL_STR(acpi_get_name) },
	{ 0x544b0c11, __VMLINUX_SYMBOL_STR(acpi_lid_notifier_register) },
	{ 0xb6d848d, __VMLINUX_SYMBOL_STR(drm_mode_debug_printmodeline) },
	{ 0x4776e26b, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x63e8b46, __VMLINUX_SYMBOL_STR(set_pages_wb) },
	{ 0x69af23e1, __VMLINUX_SYMBOL_STR(drm_vblank_get) },
	{ 0x163251c8, __VMLINUX_SYMBOL_STR(drm_dp_link_train_channel_eq_delay) },
	{ 0x50fad434, __VMLINUX_SYMBOL_STR(round_jiffies_up) },
	{ 0xc278b8a6, __VMLINUX_SYMBOL_STR(drm_gem_object_lookup) },
	{ 0xc66b5ac9, __VMLINUX_SYMBOL_STR(drm_pci_alloc) },
	{ 0x919bb0e1, __VMLINUX_SYMBOL_STR(drm_fb_helper_hotplug_event) },
	{ 0x374e0d31, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x81ba930c, __VMLINUX_SYMBOL_STR(drm_mm_init_scan_with_range) },
	{ 0xb81b9c2f, __VMLINUX_SYMBOL_STR(device_create_bin_file) },
	{ 0x3b9d009a, __VMLINUX_SYMBOL_STR(drm_format_plane_cpp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1a770ac3, __VMLINUX_SYMBOL_STR(drm_detect_hdmi_monitor) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb38e3649, __VMLINUX_SYMBOL_STR(drm_crtc_init) },
	{ 0x34457f3c, __VMLINUX_SYMBOL_STR(cpufreq_cpu_put) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x720f398c, __VMLINUX_SYMBOL_STR(dma_buf_attach) },
	{ 0x4373a19f, __VMLINUX_SYMBOL_STR(drm_gem_prime_handle_to_fd) },
	{ 0x24fcb3b4, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x10726915, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x91052ec0, __VMLINUX_SYMBOL_STR(drm_gem_object_init) },
	{ 0x239ab722, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0x5fe1e065, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xb5bb4211, __VMLINUX_SYMBOL_STR(sysfs_remove_files) },
	{ 0x2b49dcd4, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xb2f74fb6, __VMLINUX_SYMBOL_STR(intel_gmch_remove) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x886da220, __VMLINUX_SYMBOL_STR(drm_gem_create_mmap_offset) },
	{ 0xa67f004b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x14a9a178, __VMLINUX_SYMBOL_STR(drm_get_format_name) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x1043e6db, __VMLINUX_SYMBOL_STR(vm_mmap) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x4baa4c4b, __VMLINUX_SYMBOL_STR(drm_crtc_cleanup) },
	{ 0xa28078b2, __VMLINUX_SYMBOL_STR(drm_edid_duplicate) },
	{ 0x7a7c30df, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x68e05d57, __VMLINUX_SYMBOL_STR(getrawmonotonic) },
	{ 0xa9bd2676, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0x6cd59235, __VMLINUX_SYMBOL_STR(i2c_bit_algo) },
	{ 0xb86a737d, __VMLINUX_SYMBOL_STR(drm_mode_config_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x94961283, __VMLINUX_SYMBOL_STR(vunmap) },
	{ 0x8c51cf1, __VMLINUX_SYMBOL_STR(drm_helper_hpd_irq_event) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x614728d3, __VMLINUX_SYMBOL_STR(drm_hdmi_avi_infoframe_from_display_mode) },
	{ 0xec0d5040, __VMLINUX_SYMBOL_STR(unmap_mapping_range) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x689c023c, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x801678, __VMLINUX_SYMBOL_STR(flush_scheduled_work) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xc683d84b, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x721b1851, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0xfcd6d2bf, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0x63988ee5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xce3a7195, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0xe6602e9f, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x679f1650, __VMLINUX_SYMBOL_STR(vga_switcheroo_register_client) },
	{        0, __VMLINUX_SYMBOL_STR(compat_alloc_user_space) },
	{ 0x6900d335, __VMLINUX_SYMBOL_STR(drm_rect_clip_scaled) },
	{ 0xe33e5228, __VMLINUX_SYMBOL_STR(filter_check_discard) },
	{ 0x68c7263, __VMLINUX_SYMBOL_STR(ioremap_cache) },
	{ 0xe2b1c13e, __VMLINUX_SYMBOL_STR(drm_mode_equal) },
	{ 0x99452213, __VMLINUX_SYMBOL_STR(i2c_dp_aux_add_bus) },
	{ 0x3310bf11, __VMLINUX_SYMBOL_STR(pm_qos_update_request) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x312ca88d, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xa8d6809d, __VMLINUX_SYMBOL_STR(drm_dp_bw_code_to_link_rate) },
	{ 0xf37f74ff, __VMLINUX_SYMBOL_STR(set_pages_uc) },
	{ 0xb0d768a4, __VMLINUX_SYMBOL_STR(drm_property_destroy) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xbdfe91c0, __VMLINUX_SYMBOL_STR(drm_debugfs_remove_files) },
	{ 0x5987ec9d, __VMLINUX_SYMBOL_STR(drm_fb_helper_fini) },
	{ 0x48b5bc15, __VMLINUX_SYMBOL_STR(drm_modeset_lock_all) },
	{ 0xe2ef97e4, __VMLINUX_SYMBOL_STR(drm_mm_takedown) },
	{ 0x91607d95, __VMLINUX_SYMBOL_STR(set_memory_wb) },
	{ 0x792c151, __VMLINUX_SYMBOL_STR(dma_buf_export_named) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x68444928, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x2d50570f, __VMLINUX_SYMBOL_STR(drm_rect_calc_hscale) },
	{ 0x7a21c0a8, __VMLINUX_SYMBOL_STR(cfb_copyarea) },
	{ 0xb1645a2e, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0x117c823b, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{        0, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x11f42cd9, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xef724dd, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0xf147dcb2, __VMLINUX_SYMBOL_STR(hdmi_spd_infoframe_init) },
	{ 0x16c655fd, __VMLINUX_SYMBOL_STR(drm_modeset_unlock_all) },
	{ 0x1e3a88fb, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x50d68377, __VMLINUX_SYMBOL_STR(arch_phys_wc_del) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xa061864a, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x6bd45d60, __VMLINUX_SYMBOL_STR(drm_fb_helper_setcmap) },
	{ 0x126c4555, __VMLINUX_SYMBOL_STR(drm_pci_init) },
	{ 0xd98904b7, __VMLINUX_SYMBOL_STR(drm_property_create) },
	{ 0x1ff157c8, __VMLINUX_SYMBOL_STR(drm_framebuffer_init) },
	{ 0x498dcb5e, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0x49fabf0d, __VMLINUX_SYMBOL_STR(drm_mm_remove_node) },
	{ 0x3610222c, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_init) },
	{ 0x3e882943, __VMLINUX_SYMBOL_STR(pcibios_align_resource) },
	{ 0xb1b42470, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xadba87ec, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0x495886c0, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_fix) },
	{ 0x3ac1fef9, __VMLINUX_SYMBOL_STR(drm_mode_legacy_fb_format) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xedc3b4e6, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0x489a72c4, __VMLINUX_SYMBOL_STR(drm_mode_crtc_set_gamma_size) },
	{ 0x538e0913, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_disable) },
	{ 0x274a2a3, __VMLINUX_SYMBOL_STR(drm_vblank_put) },
	{ 0x44cbc5d9, __VMLINUX_SYMBOL_STR(drm_mode_object_find) },
	{ 0x70db434f, __VMLINUX_SYMBOL_STR(ftrace_raw_output_prep) },
	{ 0x18952ecc, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_enter) },
	{ 0x4d6dacf5, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x498d293a, __VMLINUX_SYMBOL_STR(trace_buffer_unlock_commit) },
	{ 0xca25e09d, __VMLINUX_SYMBOL_STR(drm_fb_helper_init) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x53877e3e, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0xfef06546, __VMLINUX_SYMBOL_STR(drm_fb_helper_single_add_all_connectors) },
	{ 0x5f3ba815, __VMLINUX_SYMBOL_STR(vm_insert_pfn) },
	{ 0xd8cd4130, __VMLINUX_SYMBOL_STR(drm_mode_vrefresh) },
	{ 0xefdf9b69, __VMLINUX_SYMBOL_STR(drm_mm_scan_remove_block) },
	{ 0x2e7a4300, __VMLINUX_SYMBOL_STR(drm_rgb_quant_range_selectable) },
	{ 0x67db3112, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0xc8ae0970, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_fini) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xf96ec70, __VMLINUX_SYMBOL_STR(drm_dp_clock_recovery_ok) },
	{ 0xdc62bbb5, __VMLINUX_SYMBOL_STR(drm_framebuffer_cleanup) },
	{ 0xa7a9615b, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm_kms_helper,drm,i2c-core,video,i2c-algo-bit";

MODULE_ALIAS("pci:v00008086d00003577sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002562sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003582sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000358Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002572sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002582sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000258Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002592sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002772sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000027A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000027AEsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002972sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002982sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002992sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029B2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029C2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029D2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A42sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E32sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E42sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E92sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A001sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A011sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000042sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000046sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000102sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000112sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000122sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000010Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000106sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000116sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000126sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000016Asv0000152Dsd00008990bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000156sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000166sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000152sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000162sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000015Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000016Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000402sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000412sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000422sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000406sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000416sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000426sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F30sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F31sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F32sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F33sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000157sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000155sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001602sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001606sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001612sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001616sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001622sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001626sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Dsv*sd*bc03sc*i*");

MODULE_INFO(srcversion, "6F2B0F40BD0C147DE9EC26C");

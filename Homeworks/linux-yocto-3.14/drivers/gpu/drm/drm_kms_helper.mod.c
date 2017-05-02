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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfd60df2, __VMLINUX_SYMBOL_STR(drm_get_connector_status_name) },
	{ 0x405a3e95, __VMLINUX_SYMBOL_STR(drm_calc_timestamping_constants) },
	{ 0xeec1850c, __VMLINUX_SYMBOL_STR(drm_crtc_index) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xefd8bcf7, __VMLINUX_SYMBOL_STR(drm_mode_create_from_cmdline_mode) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x2048b362, __VMLINUX_SYMBOL_STR(drm_mode_destroy) },
	{ 0x4d974b9c, __VMLINUX_SYMBOL_STR(register_sysrq_key) },
	{ 0xf1421d13, __VMLINUX_SYMBOL_STR(drm_mode_sort) },
	{ 0x364ec462, __VMLINUX_SYMBOL_STR(drm_get_encoder_name) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xef66e790, __VMLINUX_SYMBOL_STR(drm_get_connector_name) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x26d43b12, __VMLINUX_SYMBOL_STR(drm_mode_parse_command_line_for_connector) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x920e31a2, __VMLINUX_SYMBOL_STR(drm_plane_force_disable) },
	{ 0x758a3812, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_unregister) },
	{ 0x8e2c415d, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0xb95beb55, __VMLINUX_SYMBOL_STR(drm_object_property_set_value) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xdc6cb9c7, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xaa9087c0, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xd2335101, __VMLINUX_SYMBOL_STR(drm_fb_get_bpp_depth) },
	{ 0x7a4e7297, __VMLINUX_SYMBOL_STR(drm_edid_block_valid) },
	{ 0x88ab6fe3, __VMLINUX_SYMBOL_STR(kgdb_active) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xa9c75290, __VMLINUX_SYMBOL_STR(drm_mode_find_dmt) },
	{ 0xab781570, __VMLINUX_SYMBOL_STR(fb_get_options) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8cedee9a, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0x9bc8057e, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x37a00cfb, __VMLINUX_SYMBOL_STR(drm_mode_width) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xa3cf9832, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0xf593fb41, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x1f8544b8, __VMLINUX_SYMBOL_STR(panic_timeout) },
	{ 0x9745d638, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0xcdbe51fd, __VMLINUX_SYMBOL_STR(drm_mode_connector_update_edid_property) },
	{ 0x20645642, __VMLINUX_SYMBOL_STR(drm_debug) },
	{ 0x9e22af00, __VMLINUX_SYMBOL_STR(drm_mode_validate_size) },
	{ 0x78dd8dda, __VMLINUX_SYMBOL_STR(drm_mode_connector_list_update) },
	{ 0xe266e70d, __VMLINUX_SYMBOL_STR(drm_mode_set_crtcinfo) },
	{ 0xb1c3a01a, __VMLINUX_SYMBOL_STR(oops_in_progress) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb6725ac3, __VMLINUX_SYMBOL_STR(drm_mode_prune_invalid) },
	{ 0x1d189644, __VMLINUX_SYMBOL_STR(drm_mode_height) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x500b6dd7, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_register) },
	{ 0xe1e8aae0, __VMLINUX_SYMBOL_STR(drm_sysfs_hotplug_event) },
	{ 0x4476e9e2, __VMLINUX_SYMBOL_STR(panic_notifier_list) },
	{ 0xb6d848d, __VMLINUX_SYMBOL_STR(drm_mode_debug_printmodeline) },
	{ 0x1cf1dd50, __VMLINUX_SYMBOL_STR(drm_add_modes_noedid) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x80d380dc, __VMLINUX_SYMBOL_STR(drm_warn_on_modeset_not_all_locked) },
	{ 0x58748994, __VMLINUX_SYMBOL_STR(drm_mode_set_config_internal) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe2b1c13e, __VMLINUX_SYMBOL_STR(drm_mode_equal) },
	{ 0x3e017515, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x48b5bc15, __VMLINUX_SYMBOL_STR(drm_modeset_lock_all) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x16c655fd, __VMLINUX_SYMBOL_STR(drm_modeset_unlock_all) },
	{ 0x498dcb5e, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0xcbc9557f, __VMLINUX_SYMBOL_STR(unregister_sysrq_key) },
	{ 0xf82fecbd, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x85f5e2aa, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0xd8cd4130, __VMLINUX_SYMBOL_STR(drm_mode_vrefresh) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,i2c-core";


MODULE_INFO(srcversion, "6451042E7D5D9B962F989B1");

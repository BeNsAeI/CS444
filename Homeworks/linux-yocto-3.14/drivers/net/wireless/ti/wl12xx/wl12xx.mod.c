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
	{ 0x6e53b464, __VMLINUX_SYMBOL_STR(wl12xx_cmd_build_probe_req) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc7d50f35, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_nvs) },
	{ 0x53dff67d, __VMLINUX_SYMBOL_STR(wl12xx_debug_level) },
	{ 0xded359da, __VMLINUX_SYMBOL_STR(wlcore_set_key) },
	{ 0x85a5b36c, __VMLINUX_SYMBOL_STR(wl1271_acx_init_mem_config) },
	{ 0xbafbf0b1, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x69ee7e59, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xf6233879, __VMLINUX_SYMBOL_STR(wlcore_event_beacon_loss) },
	{ 0x3f03958a, __VMLINUX_SYMBOL_STR(wlcore_event_dummy_packet) },
	{ 0x88c4cf08, __VMLINUX_SYMBOL_STR(wlcore_event_inactive_sta) },
	{ 0xa9e8c0bb, __VMLINUX_SYMBOL_STR(wlcore_event_ba_rx_constraint) },
	{ 0x633824b0, __VMLINUX_SYMBOL_STR(wl1271_acx_pm_config) },
	{ 0xb54533f7, __VMLINUX_SYMBOL_STR(usecs_to_jiffies) },
	{ 0xa0424c29, __VMLINUX_SYMBOL_STR(wlcore_calc_packet_alignment) },
	{ 0xa13f76a5, __VMLINUX_SYMBOL_STR(wlcore_event_rssi_trigger) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x796ba329, __VMLINUX_SYMBOL_STR(wlcore_cmd_wait_for_event_or_timeout) },
	{ 0x1c3ada4c, __VMLINUX_SYMBOL_STR(wlcore_probe) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xc9f19b48, __VMLINUX_SYMBOL_STR(wlcore_alloc_hw) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf5447b95, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x2e8dbffd, __VMLINUX_SYMBOL_STR(wl1271_acx_set_ht_capabilities) },
	{ 0xcce9b035, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2fe4ccb, __VMLINUX_SYMBOL_STR(wl1271_cmd_configure) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x731267be, __VMLINUX_SYMBOL_STR(wl1271_cmd_data_path) },
	{ 0x103651e5, __VMLINUX_SYMBOL_STR(wl12xx_acx_mem_cfg) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x3dc5e7d2, __VMLINUX_SYMBOL_STR(wlcore_event_sched_scan_completed) },
	{ 0x972efb9, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_firmware) },
	{ 0x3b1f17f0, __VMLINUX_SYMBOL_STR(wl1271_acx_sleep_auth) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb75d8935, __VMLINUX_SYMBOL_STR(wlcore_set_partition) },
	{ 0x594ca33b, __VMLINUX_SYMBOL_STR(wlcore_enable_interrupts) },
	{ 0x2fa84f, __VMLINUX_SYMBOL_STR(wl1271_cmd_test) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x793369, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x8461ff8e, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x25d47832, __VMLINUX_SYMBOL_STR(wlcore_event_channel_switch) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xc4a9d256, __VMLINUX_SYMBOL_STR(wlcore_disable_interrupts) },
	{ 0x8d033939, __VMLINUX_SYMBOL_STR(wlcore_remove) },
	{ 0x2281fa45, __VMLINUX_SYMBOL_STR(wlcore_event_max_tx_failure) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2fa72247, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_results) },
	{ 0x6cdf7829, __VMLINUX_SYMBOL_STR(wlcore_event_soft_gemini_sense) },
	{ 0xa44b863f, __VMLINUX_SYMBOL_STR(wlcore_free_hw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x93e8b835, __VMLINUX_SYMBOL_STR(wlcore_tx_complete) },
	{ 0xd39bb505, __VMLINUX_SYMBOL_STR(wl1271_format_buffer) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x62ce75bc, __VMLINUX_SYMBOL_STR(wl1271_debugfs_update_stats) },
	{ 0x1eb6a544, __VMLINUX_SYMBOL_STR(wlcore_set_scan_chan_params) },
	{ 0x2933e6e3, __VMLINUX_SYMBOL_STR(wlcore_boot_run_firmware) },
	{ 0x4e30ee82, __VMLINUX_SYMBOL_STR(wlcore_translate_addr) },
	{ 0xe24cf564, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_ssid_list) },
	{ 0xdea500f0, __VMLINUX_SYMBOL_STR(wlcore_event_roc_complete) },
	{ 0xc41081d9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xf3ff1fe3, __VMLINUX_SYMBOL_STR(wl1271_cmd_send) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xcba9ee38, __VMLINUX_SYMBOL_STR(wl1271_tx_min_rate_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211";

MODULE_ALIAS("platform:wl12xx");

MODULE_INFO(srcversion, "04E1EA292CADAFD587FD5E1");

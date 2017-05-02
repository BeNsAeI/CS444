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
	{ 0x2141da78, __VMLINUX_SYMBOL_STR(ar9003_paprd_is_done) },
	{ 0x8a81120e, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0x19e81cc4, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0xeba7ef4d, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x22c2beda, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x7828f7a0, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x612f0fd0, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x31d8557, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0x399f8b58, __VMLINUX_SYMBOL_STR(ar9003_mci_send_wlan_channels) },
	{ 0xfe8f2038, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xa05c2007, __VMLINUX_SYMBOL_STR(ath9k_hw_setantenna) },
	{ 0x2d6bd640, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x247c171f, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0x2589c31d, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xdd096c28, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xae49d36f, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x70d774c3, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0xda97955b, __VMLINUX_SYMBOL_STR(ath9k_hw_numtxpending) },
	{ 0xd2ad96b0, __VMLINUX_SYMBOL_STR(ar9003_paprd_setup_gain_table) },
	{ 0xcbd87368, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xf54e9f10, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0x938adc6e, __VMLINUX_SYMBOL_STR(ath9k_hw_set_interrupts) },
	{ 0xea54b200, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0x40e46338, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0xb65f4fd0, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_mci) },
	{ 0xc15c8611, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0x5b09c15b, __VMLINUX_SYMBOL_STR(ar9003_paprd_enable) },
	{ 0x42ce966c, __VMLINUX_SYMBOL_STR(ath9k_hw_getchan_noise) },
	{ 0x989eee17, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xe8a45dc, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0x2de74403, __VMLINUX_SYMBOL_STR(ath9k_hw_computetxtime) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xb9fd4b2, __VMLINUX_SYMBOL_STR(ath9k_hw_disable_interrupts) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xc09f3795, __VMLINUX_SYMBOL_STR(ath9k_hw_bstuck_nfcal) },
	{ 0x4cae90dc, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x169b3def, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x8d8232b4, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x1fc4284c, __VMLINUX_SYMBOL_STR(ath9k_hw_gettxbuf) },
	{ 0xdcc73d, __VMLINUX_SYMBOL_STR(dfs_pattern_detector_init) },
	{ 0x57e700bb, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0x1423d569, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa98bd90c, __VMLINUX_SYMBOL_STR(ath9k_hw_wow_apply_pattern) },
	{ 0x19aca1ba, __VMLINUX_SYMBOL_STR(pcie_capability_clear_and_set_word) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3aa2d52a, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x1e5621ec, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x1488394, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0x34021db7, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0x8a9e34aa, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x1e11a325, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x7865b1ae, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_gpio_input) },
	{ 0xb0103d0e, __VMLINUX_SYMBOL_STR(ath9k_hw_kill_interrupts) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x1a123ca5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xf9f2f6cf, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x25218eae, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0xab71b0f3, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xaef63160, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x393a04be, __VMLINUX_SYMBOL_STR(ath9k_hw_wow_wakeup) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x53ce73a8, __VMLINUX_SYMBOL_STR(ath9k_hw_process_rxdesc_edma) },
	{ 0xf0a62b79, __VMLINUX_SYMBOL_STR(ar9003_paprd_populate_single_table) },
	{ 0x825cdc10, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xac955abe, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x5264e61a, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0xa03c15e1, __VMLINUX_SYMBOL_STR(ath_gen_timer_isr) },
	{ 0xafaefdbd, __VMLINUX_SYMBOL_STR(ath9k_hw_rxprocdesc) },
	{ 0x8112a47, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x85deca69, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_2wire) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x27b02b9f, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0xf76720d2, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0xfc0dfd6b, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_dbg_info) },
	{ 0xf0843fc2, __VMLINUX_SYMBOL_STR(ar9003_paprd_create_curve) },
	{ 0xbe0e500f, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xbcd0a0c4, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xa8c9b2df, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0xd37d3808, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x22d86d89, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0xa7580b5f, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0x4e2481d5, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xae61b618, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x4bee5cd5, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbccb214e, __VMLINUX_SYMBOL_STR(ath9k_hw_addrxbuf_edma) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xbc640a0a, __VMLINUX_SYMBOL_STR(ieee80211_find_sta_by_ifaddr) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xe1b35c01, __VMLINUX_SYMBOL_STR(ath9k_hw_setup_statusring) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xe2d0cf17, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xefd3b435, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x3fa89889, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x60b19351, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x2387f9f5, __VMLINUX_SYMBOL_STR(ar9003_mci_get_next_gpm_offset) },
	{ 0x37e9ce0c, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0x8461ff8e, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xe2796f6d, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x3cb8d99e, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0x78a9df16, __VMLINUX_SYMBOL_STR(ath9k_hw_puttxbuf) },
	{ 0xf7cc73f, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x1b372372, __VMLINUX_SYMBOL_STR(ar9003_mci_state) },
	{ 0x5616ef3d, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_scheme) },
	{ 0xf192fab4, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0x4ec918b6, __VMLINUX_SYMBOL_STR(ath9k_hw_wow_enable) },
	{ 0x9c5998d3, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x629fbd7e, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x153e8f5e, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0x91fc76f5, __VMLINUX_SYMBOL_STR(ath9k_hw_wow_event_to_string) },
	{ 0xbad3c4b, __VMLINUX_SYMBOL_STR(ath9k_hw_abortpcurecv) },
	{ 0x4aa168e, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0x1cab58a, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xd2981357, __VMLINUX_SYMBOL_STR(ath9k_cmn_count_streams) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x93183823, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x9183f682, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x9376f2, __VMLINUX_SYMBOL_STR(ieee80211_sta_set_buffered) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x7174ca1, __VMLINUX_SYMBOL_STR(ar9003_mci_get_interrupt) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6a590b3f, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0x58eba83d, __VMLINUX_SYMBOL_STR(ieee80211_send_bar) },
	{ 0xdf74a7b9, __VMLINUX_SYMBOL_STR(ath9k_hw_updatetxtriglevel) },
	{ 0x1a0027e5, __VMLINUX_SYMBOL_STR(ath_hw_cycle_counters_update) },
	{ 0xa4576072, __VMLINUX_SYMBOL_STR(ar9003_mci_set_bt_version) },
	{ 0xecf1fda1, __VMLINUX_SYMBOL_STR(ath9k_hw_set_rx_bufsize) },
	{ 0xbbfc5a12, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0x1003545d, __VMLINUX_SYMBOL_STR(ar9003_is_paprd_enabled) },
	{ 0x95c334f3, __VMLINUX_SYMBOL_STR(ar9003_get_pll_sqsum_dvc) },
	{ 0x6a3e18d, __VMLINUX_SYMBOL_STR(ar9003_mci_send_message) },
	{ 0xa7ade03d, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0xd02a4824, __VMLINUX_SYMBOL_STR(ar9003_mci_cleanup) },
	{ 0x41c96142, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x93bbb8eb, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x90f0b4a5, __VMLINUX_SYMBOL_STR(ath9k_hw_txstart) },
	{ 0x877f0f06, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x149033c0, __VMLINUX_SYMBOL_STR(ath9k_hw_check_alive) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5360218b, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_concur_txprio) },
	{ 0x67cd141a, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa50c60f, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0xfa2362ed, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x849f2dce, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0x3dbc5760, __VMLINUX_SYMBOL_STR(ar9003_mci_setup) },
	{ 0xde3850e8, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x159a515, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x9c5e6334, __VMLINUX_SYMBOL_STR(ieee80211_sta_eosp) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x575a0bb0, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0xa67f004b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xb14c7feb, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x2444783d, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x158ebe6b, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x83d4b756, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0xd100211d, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7719d133, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0x50c997cf, __VMLINUX_SYMBOL_STR(ath9k_hw_check_nav) },
	{ 0xe784dcb2, __VMLINUX_SYMBOL_STR(ath9k_hw_putrxbuf) },
	{ 0x63988ee5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x47e52f94, __VMLINUX_SYMBOL_STR(ath_rxbuf_alloc) },
	{ 0x19e305dc, __VMLINUX_SYMBOL_STR(ar9003_paprd_init_table) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xfbed5ae, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0x3b637e92, __VMLINUX_SYMBOL_STR(ath9k_hw_setuprxdesc) },
	{ 0xae08ceb4, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xcb9f28fc, __VMLINUX_SYMBOL_STR(ath9k_hw_abort_tx_dma) },
	{ 0x2c536fe, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x52ebeb8b, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x58e60f8e, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xe78528e6, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x821c1a3, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_check) },
	{ 0x5cdb10, __VMLINUX_SYMBOL_STR(ath9k_hw_enable_interrupts) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x25ca2fcf, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x3c0a96a2, __VMLINUX_SYMBOL_STR(ath9k_hw_intrpend) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x68c40671, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf82fecbd, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x61f349d3, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x92d12f59, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0x8ae17a54, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x8b736bab, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x49c2a727, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txpowerlimit) },
	{ 0xf70022f0, __VMLINUX_SYMBOL_STR(ath9k_hw_stop_dma_queue) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath9k_hw,mac80211,ath9k_common,cfg80211,ath";

MODULE_ALIAS("pci:v0000168Cd00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000027sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A3Bsd00001C71bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000105Bsd0000E01Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A32sd00000306bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000185Fsd0000309Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd00001536bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv00001A3Bsd00002C37bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002086bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001237bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002126bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd0000126Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002152bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E075bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003122bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004105bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004106bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C706bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C680bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C708bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003218bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003219bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002C97bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002100bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001C56sd00004001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006627bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006628bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Fsd00007197bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001186bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F86bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001195bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F95bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C00bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C01bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001043sd0000850Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002116bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006661bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000168Csd00003117bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000017AAsd00003214bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001969sd00000091bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002110bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001043sd0000850Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006631bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006641bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000103Csd00001864bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000063bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000064bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000010CFsd00001783bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002003bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002176bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E068bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd000006B2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000842bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00006671bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002811bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002812bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A1bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003025bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E069bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000622bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000672bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000662bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd000006A2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000682bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd000018E3bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd0000217Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd00002005bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000652bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000612bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000832bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000692bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002130bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002182bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Fsd00007202bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002810bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A120bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E07Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E081bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00004026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001043sd000085F2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3282444D7641B8511136CE6");

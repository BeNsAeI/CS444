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
	{ 0xaa9087c0, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x10f2dfb1, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x3d5fe666, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x3a584de9, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xf6286227, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x6336dcfd, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x82a403ca, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x5d327ce3, __VMLINUX_SYMBOL_STR(rndis_tx_fixup) },
	{ 0x511b2d0f, __VMLINUX_SYMBOL_STR(rndis_rx_fixup) },
	{ 0x96b6a22c, __VMLINUX_SYMBOL_STR(rndis_status) },
	{ 0x40317c71, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x3ffa73b2, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x11270251, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x2bd821da, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xc7b36047, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x457c7335, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7e3db271, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0x44921367, __VMLINUX_SYMBOL_STR(cfg80211_connect_result) },
	{ 0x68c19318, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x5d807e3f, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xb3397009, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x56f209a8, __VMLINUX_SYMBOL_STR(cfg80211_cqm_rssi_notify) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x6fdbf879, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x3c75cda5, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_width) },
	{ 0x85f5e2aa, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0x64197178, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xfb4a887d, __VMLINUX_SYMBOL_STR(usbnet_resume_rx) },
	{ 0xec8439b9, __VMLINUX_SYMBOL_STR(usbnet_purge_paused_rxq) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xbdc2374b, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x96460d2f, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0xe2fb6a97, __VMLINUX_SYMBOL_STR(generic_rndis_bind) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x71d2c220, __VMLINUX_SYMBOL_STR(wiphy_new) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xe6c07d4e, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0xeeb32178, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x7c3bc208, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0x4eb582d9, __VMLINUX_SYMBOL_STR(rndis_unbind) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7d52f354, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xdbef41f4, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbe193f66, __VMLINUX_SYMBOL_STR(rndis_command) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcdc0ca07, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0xbddeaeea, __VMLINUX_SYMBOL_STR(cfg80211_pmksa_candidate_notify) },
	{ 0x7c7bb44, __VMLINUX_SYMBOL_STR(usbnet_pause_rx) },
	{ 0x3be903d, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xfcb087f0, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,rndis_host,cfg80211";

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");

MODULE_INFO(srcversion, "A73F9EB25E2F59952788DD4");

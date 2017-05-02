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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xaf6686bf, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x20607be8, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0x751e9d74, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0x41ee04ea, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0xd42264, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xaeec4030, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x1cec2253, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0xaa6f7122, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0x718ea15d, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0xe96b45c9, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0xbf952ace, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0x9c94938e, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0x7779fae9, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0xd1605a54, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0x7df5c650, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x661e1724, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0x8b85c527, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x1fe157d3, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0xfcd5a6c5, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0xf0dd4d26, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0xb8cafc47, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0x49514836, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0x1f9bc39c, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0xf66917e1, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0xa78a3a40, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0xb1391323, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0x2a6b6cfd, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0x5dc4fd86, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0x3c828cb8, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0xc7b36047, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x457c7335, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x13144e5e, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xef242a53, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf79dfc, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27977c75, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x11e519bc, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x1a123ca5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xffdcaa20, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2x00usb";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BEA9CB2F4433DD75913BC26");

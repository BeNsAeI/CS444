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
	{ 0x13144e5e, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1cec2253, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xef48f0f, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf79dfc, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xd29b009f, __VMLINUX_SYMBOL_STR(crc_itu_t_table) },
	{ 0x6d356209, __VMLINUX_SYMBOL_STR(crc_itu_t) },
	{ 0x1a123ca5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d0cf17, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xef242a53, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x27977c75, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x70a05bd2, __VMLINUX_SYMBOL_STR(rt2x00usb_regbusy_read) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xffdcaa20, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2x00usb,crc-itu-t";

MODULE_ALIAS("usb:v07B8pB21Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18C5p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0722d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1723d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1724d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp705Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp905Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp905Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631pC019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00D8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00D9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00F4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0119d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0137d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v178Dp02BEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp002Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7318d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p3701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p800Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1472p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p4600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6874d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA874d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p7318d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2573d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2671d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0812p3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6196d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6229d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6238d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p4471d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p7100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p002Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p90ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p9712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p31F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6933p5001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p200Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB50d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7167p3840d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp001Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3415d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A785181160A7F96075B57F4");

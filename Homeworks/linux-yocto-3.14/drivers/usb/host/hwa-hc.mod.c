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
	{ 0x59c4121f, __VMLINUX_SYMBOL_STR(wusbhc_rh_start_port_reset) },
	{ 0xb3a4b3a1, __VMLINUX_SYMBOL_STR(wusbhc_rh_control) },
	{ 0x5d5a2ed4, __VMLINUX_SYMBOL_STR(wusbhc_rh_status_data) },
	{ 0xc7b36047, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x457c7335, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x11e519bc, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6e860b79, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x119ff51f, __VMLINUX_SYMBOL_STR(wusbhc_b_create) },
	{ 0x30fb4c96, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0x130eb96b, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x532127f0, __VMLINUX_SYMBOL_STR(wa_create) },
	{ 0xf1c8b350, __VMLINUX_SYMBOL_STR(wusbhc_create) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfe2e17d7, __VMLINUX_SYMBOL_STR(wusb_et_name) },
	{ 0x9924c496, __VMLINUX_SYMBOL_STR(__usb_get_extra_descriptor) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xa4d85231, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x202bedc6, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xbd816f0, __VMLINUX_SYMBOL_STR(wa_process_errored_transfers_run) },
	{ 0x122f15ac, __VMLINUX_SYMBOL_STR(wa_urb_enqueue_run) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4a298a19, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0x69e27c7a, __VMLINUX_SYMBOL_STR(bitmap_copy_le) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbb6bf5e, __VMLINUX_SYMBOL_STR(wusb_cluster_id_get) },
	{ 0xd139f368, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xb725d128, __VMLINUX_SYMBOL_STR(wusb_cluster_id_put) },
	{ 0x979acb03, __VMLINUX_SYMBOL_STR(usb_get_current_frame_number) },
	{ 0xb355ceb, __VMLINUX_SYMBOL_STR(wa_urb_enqueue) },
	{ 0x68643971, __VMLINUX_SYMBOL_STR(wa_urb_dequeue) },
	{ 0xea4188cd, __VMLINUX_SYMBOL_STR(rpipe_ep_disable) },
	{ 0x5df43e7f, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0xafd8440c, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x4f05906f, __VMLINUX_SYMBOL_STR(wusbhc_b_destroy) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd93b0c11, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x83ea165d, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0xd5bd675d, __VMLINUX_SYMBOL_STR(uwb_rc_put) },
	{ 0xe290f01e, __VMLINUX_SYMBOL_STR(wusbhc_destroy) },
	{ 0x1975e6be, __VMLINUX_SYMBOL_STR(__wa_destroy) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wusbcore,wusb-wa,uwb";

MODULE_ALIAS("usb:v13DCp5310d*dc*dsc*dp*icE0isc02ip01in*");
MODULE_ALIAS("usb:v13DCp5611d*dc*dsc*dp*icE0isc02ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc02ip01in*");

MODULE_INFO(srcversion, "F62EB235D97A42FCD435FC3");

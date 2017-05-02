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
	{ 0xa68ee404, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x4eecd3a4, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x4a7cabcb, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0xbb656ad6, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x91d1e5da, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0xe3ab979d, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0xb7e379aa, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x10f2dfb1, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xec8b66fa, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x3d5fe666, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x3a584de9, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xf6286227, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x6336dcfd, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x82a403ca, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x11270251, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x2bd821da, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xc7b36047, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x457c7335, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xbba275e3, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3ffa73b2, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x330cfc49, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_no_resume) },
	{ 0x4c9cec59, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xfcb087f0, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x18150f2, __VMLINUX_SYMBOL_STR(usbnet_defer_kevent) },
	{ 0x98053460, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xea11c617, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xe2d0cf17, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x40317c71, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf2f388e4, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1497ccf2, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x8b784a9e, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc1e27320, __VMLINUX_SYMBOL_STR(usbnet_read_cmd_nopm) },
	{ 0x790d5587, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xd6e04352, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_nopm) },
	{ 0x29022939, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x215ebd78, __VMLINUX_SYMBOL_STR(bitrev16) },
	{ 0xa4511467, __VMLINUX_SYMBOL_STR(crc16) },
	{ 0x108b93a4, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x8ae17a54, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3be903d, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0x802d0e93, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7d52f354, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x2307e12c, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x1a123ca5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x1423d569, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x450df313, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v0424p9500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9505d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424pEC00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9903d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9905d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9906d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9907d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9908d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9909d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E08d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2FA9BFB0B352CDA15EB7D8F");

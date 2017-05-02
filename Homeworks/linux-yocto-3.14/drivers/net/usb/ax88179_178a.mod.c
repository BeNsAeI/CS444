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
	{ 0x7f3a29d0, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x4eecd3a4, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x4a7cabcb, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0xbb656ad6, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x10f2dfb1, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x3d5fe666, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xf6286227, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x6336dcfd, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x82a403ca, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x11270251, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x2bd821da, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xc7b36047, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x457c7335, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xbba275e3, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xf2f388e4, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x2307e12c, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0x802d0e93, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfcb087f0, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x3ffa73b2, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x40317c71, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xe870b92a, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xfa2a47e6, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0x5d807e3f, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xd6e04352, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_nopm) },
	{ 0x29022939, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7d52f354, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xc1e27320, __VMLINUX_SYMBOL_STR(usbnet_read_cmd_nopm) },
	{ 0x790d5587, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x108b93a4, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x1497ccf2, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xcd261969, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0xe2d0cf17, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x98053460, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xea11c617, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x1a123ca5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x1423d569, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x41c96142, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "76A3B8EBD187A8970B310F9");

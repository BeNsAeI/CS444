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
	{ 0xa68ee404, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x4eecd3a4, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x4a7cabcb, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0xbb656ad6, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0xe3ab979d, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0xb7e379aa, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x10f2dfb1, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xec8b66fa, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x3d5fe666, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xf6286227, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x6336dcfd, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x82a403ca, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x3ffa73b2, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x11270251, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x2bd821da, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xc7b36047, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x457c7335, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x40317c71, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xbba275e3, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0x802d0e93, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x91d1e5da, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x2307e12c, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x108b93a4, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x790d5587, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x29022939, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x3be903d, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xe870b92a, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1a123ca5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v9710p7832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0021d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8304C82BA1FAE5770C1DB51");

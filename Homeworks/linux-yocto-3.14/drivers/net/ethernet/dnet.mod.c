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
	{ 0xa6cf237a, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0x7f3a29d0, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x72197e07, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x3d5fe666, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x3a584de9, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xc41081d9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xcce9b035, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xbdc2374b, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x563c844f, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6060cfa4, __VMLINUX_SYMBOL_STR(phy_connect) },
	{ 0x32e1d8c3, __VMLINUX_SYMBOL_STR(mdiobus_register) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7eade4d1, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
	{ 0xcf33151b, __VMLINUX_SYMBOL_STR(phy_register_fixup_for_uid) },
	{ 0x3d414693, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x24e8a9c7, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xb5b8dfeb, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xb1b23ebc, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x8f177327, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xb5d6cb9e, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0x542cb27c, __VMLINUX_SYMBOL_STR(phy_start_aneg) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xee1be2c, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0xa31300f5, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x843fd691, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xab6f5d7a, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x54a4fd3e, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0x57241723, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0xdb290822, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf425d9f7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x114403af, __VMLINUX_SYMBOL_STR(phy_ethtool_gset) },
	{ 0xc4ee4177, __VMLINUX_SYMBOL_STR(phy_ethtool_sset) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x4acc34a9, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0x56721741, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xefbc12e4, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x51d741cd, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe8cec96c, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0x404133e2, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A51A398AF1AC26E502EB00F");

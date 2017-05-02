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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x72197e07, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x3d5fe666, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x3a584de9, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xe2337087, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0x809b3735, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x742f5665, __VMLINUX_SYMBOL_STR(pcmcia_parse_tuple) },
	{ 0xb5b8dfeb, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3d414693, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x24f50a03, __VMLINUX_SYMBOL_STR(pcmcia_get_mac_from_cis) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe84d9df4, __VMLINUX_SYMBOL_STR(pcmcia_get_tuple) },
	{ 0xacfde77b, __VMLINUX_SYMBOL_STR(pcmcia_map_mem_page) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xbaca65b1, __VMLINUX_SYMBOL_STR(pcmcia_request_window) },
	{ 0x8e1d0b39, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xb1312a3d, __VMLINUX_SYMBOL_STR(pcmcia_loop_tuple) },
	{ 0x11f2e989, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0x1208b60, __VMLINUX_SYMBOL_STR(pcmcia_request_irq) },
	{ 0x703015f0, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe5998f20, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xdb290822, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf425d9f7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xee1be2c, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x312ed10d, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x37d6500f, __VMLINUX_SYMBOL_STR(pcmcia_dev_present) },
	{ 0x4133792, __VMLINUX_SYMBOL_STR(pcmcia_fixup_iowidth) },
	{ 0x49f0074d, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xf82fecbd, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x3e017515, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xd21843c2, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x64197178, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x7d52f354, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb5bfcb7f, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0x108b93a4, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xfcb087f0, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x1497ccf2, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xcd261969, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xf2f388e4, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x1e497a7d, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x56721741, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xefbc12e4, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x486f0d81, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x2238268, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x3be903d, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0x802d0e93, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pcmcia:m0109c0501f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0140c000Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb04CD2988pc46A52D63pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb0143B773pc46A52D63pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb856D66C8pcBD6C43EFpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb52D21E1EpcBD6C43EFpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paDD9989BEpb662C394Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb52D21E1Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa0C2F80CDpb656947B9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa0C2F80CDpbDC9BA5EDpc*pd*");
MODULE_ALIAS("pcmcia:m016Cc0020f*fn00pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m016Cc0023f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa23C78A9Dpb00B2E941pcCEF397FBpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa78F308DCpbDCEA68BCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE59365C8pb6A2161D1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6A26D1CFpbC16CE9C5pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa58D93FC4pb244734E9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa33234748pb3C95B953pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paA2CD8E6Dpb42DA662Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0C2F80CDpbB3466314pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0C2F80CDpb194B650Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5DpbDCEA68BCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa4EF00B21pb844BE9E9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC4F8B18Bpb4A0EEB2Dpc*pd*");

MODULE_INFO(srcversion, "11B03499940DF5B2749E39C");

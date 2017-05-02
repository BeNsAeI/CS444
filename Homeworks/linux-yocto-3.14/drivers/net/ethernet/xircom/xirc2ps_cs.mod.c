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
	{ 0x49f0074d, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x37d6500f, __VMLINUX_SYMBOL_STR(pcmcia_dev_present) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xacfde77b, __VMLINUX_SYMBOL_STR(pcmcia_map_mem_page) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xbaca65b1, __VMLINUX_SYMBOL_STR(pcmcia_request_window) },
	{ 0x6479aabd, __VMLINUX_SYMBOL_STR(pcmcia_write_config_byte) },
	{ 0xb1312a3d, __VMLINUX_SYMBOL_STR(pcmcia_loop_tuple) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x3d414693, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x11f2e989, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0x1208b60, __VMLINUX_SYMBOL_STR(pcmcia_request_irq) },
	{ 0x703015f0, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0x24f50a03, __VMLINUX_SYMBOL_STR(pcmcia_get_mac_from_cis) },
	{ 0xe84d9df4, __VMLINUX_SYMBOL_STR(pcmcia_get_tuple) },
	{ 0xb5b8dfeb, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xfcb087f0, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xee1be2c, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0xe5998f20, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xdb290822, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf425d9f7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xd21843c2, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0xef48f0f, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x312ed10d, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x56721741, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xefbc12e4, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x486f0d81, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x2238268, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pcmcia:m0089c110Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0138c110Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pc0EA978EApd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pc80609023pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pcA650C32Apd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pc76DF1D29pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pcF1403719pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pbECA401BFpc*pd*");
MODULE_ALIAS("pcmcia:m01BFc010Af*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1B3B94FEpb*pcF381C1A2pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc0EC0AC37pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc947D9073pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc2464A6E3pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc3E08D609pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pcF7188E46pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54F7C49Cpb9FD2F0A2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54F7C49CpbEFE96769pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa816CC815pb174397DBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa44A09D9CpbB44DEECFpc*pd*");

MODULE_INFO(srcversion, "E1D9D9B704744891E7944F0");

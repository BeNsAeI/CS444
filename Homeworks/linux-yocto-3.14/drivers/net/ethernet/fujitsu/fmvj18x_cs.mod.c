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
	{ 0x4c66aa5c, __VMLINUX_SYMBOL_STR(pcmcia_release_window) },
	{ 0x703015f0, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0x24f50a03, __VMLINUX_SYMBOL_STR(pcmcia_get_mac_from_cis) },
	{ 0xfcb087f0, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x3d414693, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xacfde77b, __VMLINUX_SYMBOL_STR(pcmcia_map_mem_page) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xbaca65b1, __VMLINUX_SYMBOL_STR(pcmcia_request_window) },
	{ 0x11f2e989, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0x1208b60, __VMLINUX_SYMBOL_STR(pcmcia_request_irq) },
	{ 0xd21843c2, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe84d9df4, __VMLINUX_SYMBOL_STR(pcmcia_get_tuple) },
	{ 0xb5b8dfeb, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xee1be2c, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0xe5998f20, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xdb290822, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf425d9f7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x37d6500f, __VMLINUX_SYMBOL_STR(pcmcia_dev_present) },
	{ 0xef48f0f, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x312ed10d, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x56721741, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xefbc12e4, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x486f0d81, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x2238268, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x49f0074d, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x3be903d, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x802d0e93, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pcmcia:m0004c0004f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa528C88C4pb74F91E59pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa53AF556Epb877F9922pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF47E6C66pb877F9922pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6EE5A3D8pb5BAF31DBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6EE5A3D8pb3F04875Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB8451188pb12939BA2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF4F43949pb773910F4pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8CEF4D3Apb075FC7B6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8CEF4D3ApbBCCF43E6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa85C10E17pbD9413666pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1EAE9475pb8FA0EE70pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1EAE9475pb7683BC9Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa58D8FEE2pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2599F454pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8F4005DApb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa90888080pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa1EAE9475pbD9A93BEDpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa18DF0BA0pb831B1064pc*pd*");
MODULE_ALIAS("pcmcia:m0105c0D0Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0105c0E0Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0032c0E01f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0032c0A05f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0032c0B05f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0032c1101f*fn*pfn00pa*pb*pc*pd*");

MODULE_INFO(srcversion, "C12F695CFA1918350F4393C");

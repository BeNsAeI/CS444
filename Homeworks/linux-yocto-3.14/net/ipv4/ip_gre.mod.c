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
	{ 0x16970961, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x5c9d871, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x3d5fe666, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x3a584de9, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xcb1cc150, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0xc1cf8d3, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x52016b68, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xb47d70ac, __VMLINUX_SYMBOL_STR(gre_cisco_unregister) },
	{ 0xf302a719, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x4b29b310, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xceb64dcf, __VMLINUX_SYMBOL_STR(gre_cisco_register) },
	{ 0x9d17fd2c, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9619381f, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0xcdfa85bc, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xa022f037, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xc35a4e64, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xa8f676e8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8b094287, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x1d15c81b, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe2d0cf17, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x41c96142, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xffb2b3af, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xd204b1cb, __VMLINUX_SYMBOL_STR(ip_mc_dec_group) },
	{ 0xdc4d9e64, __VMLINUX_SYMBOL_STR(inetdev_by_index) },
	{ 0x8221e6e6, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x6596d0fa, __VMLINUX_SYMBOL_STR(ip_mc_inc_group) },
	{ 0xdbd6dcfb, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x32476389, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xfe7b7bfe, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x912c9337, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x6221d95f, __VMLINUX_SYMBOL_STR(gre_build_header) },
	{ 0x6597fd09, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x57091c6d, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel";


MODULE_INFO(srcversion, "8037E2C87550D45B08F7A26");

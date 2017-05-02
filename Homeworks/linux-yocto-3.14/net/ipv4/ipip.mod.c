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
	{ 0xc1cf8d3, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x16970961, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x5c9d871, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0xcb1cc150, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0xf302a719, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x52016b68, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xda7c09ad, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0x4b29b310, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xe876ecae, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0x9d17fd2c, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa022f037, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x9619381f, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x3ffd5bea, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x595f7f20, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0xb9fc8a0f, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x6893a348, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcdfa85bc, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x8221e6e6, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0xfe7b7bfe, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x912c9337, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0xffb2b3af, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xc35a4e64, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x6597fd09, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x8b094287, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x1d15c81b, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xa8f676e8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";


MODULE_INFO(srcversion, "34807A3F825887DFF12350E");

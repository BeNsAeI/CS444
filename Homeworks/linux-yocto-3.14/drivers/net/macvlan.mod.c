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
	{ 0x2cb48c0d, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x76ea27a1, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x5bd07776, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0xa4268599, __VMLINUX_SYMBOL_STR(dev_get_nest_level) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xeddc2117, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0x2c03cf4b, __VMLINUX_SYMBOL_STR(dev_mc_add_excl) },
	{ 0x40bf24a5, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xce112422, __VMLINUX_SYMBOL_STR(dev_uc_add_excl) },
	{ 0xea11c617, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x7bfff091, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0xbd877aa8, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0x96451439, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xe5998f20, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf419bb48, __VMLINUX_SYMBOL_STR(ip_check_defrag) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x7f3a29d0, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x7c94b14e, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0x56721741, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x6742e1b7, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0xa8f676e8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xc5ef6d8d, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x71f44730, __VMLINUX_SYMBOL_STR(ndo_dflt_fdb_dump) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xc0aab2a4, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0xf302a719, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xf423191a, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x924e8652, __VMLINUX_SYMBOL_STR(eth_header_cache_update) },
	{ 0x73032782, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x7376dd99, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x473b0085, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0xaa0c9387, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x57091c6d, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xa2898c1, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb19a5453, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xc6121fd4, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x3d5fe666, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x754c516b, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcf5660c2, __VMLINUX_SYMBOL_STR(eth_header_cache) },
	{ 0x4b29b310, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x41ad6c86, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x6ab892c4, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x8d961a26, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x3bbc4772, __VMLINUX_SYMBOL_STR(dev_queue_xmit_accel) },
	{ 0x84329680, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8bc91409, __VMLINUX_SYMBOL_STR(eth_rebuild_header) },
	{ 0x5c050ff4, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "80C57FBC836E7DC933E2E61");

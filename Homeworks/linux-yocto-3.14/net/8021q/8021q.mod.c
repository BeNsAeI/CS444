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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x40a02a45, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0x5bd07776, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x78f3d2df, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xa4268599, __VMLINUX_SYMBOL_STR(dev_get_nest_level) },
	{ 0x1c8505d0, __VMLINUX_SYMBOL_STR(garp_uninit_applicant) },
	{ 0xb96f9db1, __VMLINUX_SYMBOL_STR(vlan_dev_vlan_id) },
	{ 0xeddc2117, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0xcde7219f, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xc35a6a00, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x9fc66aad, __VMLINUX_SYMBOL_STR(garp_request_join) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xf0995fe, __VMLINUX_SYMBOL_STR(vlan_uses_dev) },
	{ 0x5d807e3f, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xa05f372e, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xbdc2374b, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xb896dddc, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x7bfff091, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0xbd877aa8, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0xd19c4f69, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xb53bf885, __VMLINUX_SYMBOL_STR(linkwatch_fire_event) },
	{ 0x96451439, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xd5f7bb81, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0x7e82e485, __VMLINUX_SYMBOL_STR(garp_init_applicant) },
	{ 0xa2bd908f, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x69cb3ee7, __VMLINUX_SYMBOL_STR(proc_remove) },
	{ 0x25df9d98, __VMLINUX_SYMBOL_STR(vlan_ioctl_set) },
	{ 0x7e7547b1, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x5306cf09, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x9fc4d620, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7f3a29d0, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{        0, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xe0dcd88f, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0x7c94b14e, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0x56721741, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xe6546dc0, __VMLINUX_SYMBOL_STR(garp_register_application) },
	{ 0xa8f676e8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xc5ef6d8d, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd96e46d, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0xcd9a0c0e, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0xc0aab2a4, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0xf302a719, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xf423191a, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xecc35f84, __VMLINUX_SYMBOL_STR(garp_request_leave) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0xa06749e6, __VMLINUX_SYMBOL_STR(arp_find) },
	{ 0x73032782, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x473b0085, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x874a8ab7, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x50d24064, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xaa0c9387, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x57091c6d, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xa2898c1, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x4e228a09, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1cbca63c, __VMLINUX_SYMBOL_STR(garp_unregister_application) },
	{ 0xb19a5453, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xc6121fd4, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x7d52f354, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x9f8b7cbf, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x3d5fe666, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x7a7c30df, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x754c516b, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa8506ff4, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x4b29b310, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x41ad6c86, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x6ab892c4, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8d961a26, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x84329680, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x5c050ff4, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xaf582bae, __VMLINUX_SYMBOL_STR(dev_get_stats) },
	{ 0xfae0472b, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=garp";


MODULE_INFO(srcversion, "E18B25C5EBB97870F257B5F");

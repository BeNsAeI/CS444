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
	{ 0xfebe26c4, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x50dc7041, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xf554888b, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xafe84b68, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x1a47621f, __VMLINUX_SYMBOL_STR(macvlan_dellink) },
	{ 0xc9dc0d71, __VMLINUX_SYMBOL_STR(skb_flow_dissect) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x40bf24a5, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x48e4ea04, __VMLINUX_SYMBOL_STR(zerocopy_sg_from_iovec) },
	{ 0x2606504f, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xfec77fc2, __VMLINUX_SYMBOL_STR(macvlan_common_newlink) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x73eeeb5b, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x5446d35d, __VMLINUX_SYMBOL_STR(sock_alloc_send_pskb) },
	{ 0x1f354bf0, __VMLINUX_SYMBOL_STR(macvlan_link_register) },
	{ 0x92d050df, __VMLINUX_SYMBOL_STR(iov_pages) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x19444627, __VMLINUX_SYMBOL_STR(memcpy_fromiovecend) },
	{ 0x821eeccd, __VMLINUX_SYMBOL_STR(skb_partial_csum_set) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xb121f9f5, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x20458cc2, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7ad5d5b5, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0xd36257ba, __VMLINUX_SYMBOL_STR(memcpy_toiovecend) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x324973ef, __VMLINUX_SYMBOL_STR(skb_copy_datagram_const_iovec) },
	{ 0x8db22c9c, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x6dcbae38, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x4fd5cfb9, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x8d130cf9, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xf302a719, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xcaef1b77, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xc448ec4f, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xc0b65a74, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x6f36c782, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xa20f4bed, __VMLINUX_SYMBOL_STR(macvlan_common_setup) },
	{ 0x7376dd99, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x37ef01d4, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9624857c, __VMLINUX_SYMBOL_STR(ipv6_proxy_select_ident) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x5a4896a8, __VMLINUX_SYMBOL_STR(__put_user_2) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x7bcaa12b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x8f9c199c, __VMLINUX_SYMBOL_STR(__get_user_2) },
	{ 0x8542b099, __VMLINUX_SYMBOL_STR(skb_copy_datagram_from_iovec) },
	{ 0x8d961a26, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x84329680, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2bb672f0, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=macvlan";


MODULE_INFO(srcversion, "A0C79BCC35F07A38615EBFF");

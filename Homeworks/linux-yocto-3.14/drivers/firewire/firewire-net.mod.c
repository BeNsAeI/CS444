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
	{ 0xa82ded68, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa9850bf0, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xce7ba0b6, __VMLINUX_SYMBOL_STR(fw_send_request) },
	{ 0x5d807e3f, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xea11c617, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xbdc2374b, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xc0c9fe33, __VMLINUX_SYMBOL_STR(fw_bus_type) },
	{ 0x1423d569, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf244b76, __VMLINUX_SYMBOL_STR(fw_iso_context_start) },
	{ 0x5ce1f58e, __VMLINUX_SYMBOL_STR(fw_iso_context_queue_flush) },
	{ 0xf425d9f7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xe5998f20, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x7cc4a5d, __VMLINUX_SYMBOL_STR(printk_timed_ratelimit) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x645b715f, __VMLINUX_SYMBOL_STR(fw_core_add_descriptor) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7f3a29d0, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x56721741, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xd477d6e2, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x3d414693, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xd6d36ae7, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0xbbd72176, __VMLINUX_SYMBOL_STR(fw_iso_buffer_destroy) },
	{ 0xe2d0cf17, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x8e1d0b39, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xc27c42da, __VMLINUX_SYMBOL_STR(fw_iso_context_queue) },
	{ 0x4741a933, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa06749e6, __VMLINUX_SYMBOL_STR(arp_find) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x874a8ab7, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x851ba04, __VMLINUX_SYMBOL_STR(fw_core_add_address_handler) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x24fcb3b4, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x4f593a2b, __VMLINUX_SYMBOL_STR(fw_iso_context_stop) },
	{ 0x43cbeeb3, __VMLINUX_SYMBOL_STR(fw_core_remove_address_handler) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2d04d58f, __VMLINUX_SYMBOL_STR(fw_iso_context_create) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xefbc12e4, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xee1be2c, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x65052017, __VMLINUX_SYMBOL_STR(fw_iso_buffer_init) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x90863005, __VMLINUX_SYMBOL_STR(fw_high_memory_region) },
	{ 0x5ba70610, __VMLINUX_SYMBOL_STR(fw_iso_context_destroy) },
	{ 0x334f1757, __VMLINUX_SYMBOL_STR(fw_send_response) },
	{ 0x4d0f641, __VMLINUX_SYMBOL_STR(fw_core_remove_descriptor) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=firewire-core";

MODULE_ALIAS("ieee1394:ven*mo*sp0000005Ever00000001*");
MODULE_ALIAS("ieee1394:ven*mo*sp0000005Ever00000002*");

MODULE_INFO(srcversion, "9BF5BB70998B256BDCE3990");

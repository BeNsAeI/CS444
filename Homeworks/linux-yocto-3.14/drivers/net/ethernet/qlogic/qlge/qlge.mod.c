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
	{        0, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xfcb087f0, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xef48f0f, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x17795916, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xd75e8b96, __VMLINUX_SYMBOL_STR(pcie_set_readrq) },
	{ 0x54a4fd3e, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xc4541d1f, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0xb54533f7, __VMLINUX_SYMBOL_STR(usecs_to_jiffies) },
	{ 0x5d807e3f, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xbdc2374b, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xd7edd9, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0x1423d569, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x70c53eca, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x274dc2b, __VMLINUX_SYMBOL_STR(netif_get_num_default_rss_queues) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd10904a9, __VMLINUX_SYMBOL_STR(netdev_alert) },
	{ 0x9ebd7713, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf425d9f7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x27c33efe, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0xc28ffb0e, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf0d23fcd, __VMLINUX_SYMBOL_STR(pci_enable_msix) },
	{ 0xa34a77f7, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7f3a29d0, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x56721741, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x3d414693, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x57241723, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4a7f08a3, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xcb936d3a, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x318a461d, __VMLINUX_SYMBOL_STR(netdev_printk) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0x24e8a9c7, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x3d769dfc, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x49f0074d, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x27ea06fa, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xea248cef, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x2238268, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xa31300f5, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb290822, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x41c96142, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x64197178, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x5fe1e065, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x7d52f354, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x3d5fe666, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2e69f650, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xc683d84b, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x63988ee5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x312ca88d, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xbab0fe1b, __VMLINUX_SYMBOL_STR(napi_get_frags) },
	{ 0xefbc12e4, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xef724dd, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0xff099500, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xee1be2c, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x570e467d, __VMLINUX_SYMBOL_STR(napi_gro_frags) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xb5b8dfeb, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x97b20acf, __VMLINUX_SYMBOL_STR(netdev_crit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001077d00008012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00008000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "418E6836A9DB39F91275E5A");

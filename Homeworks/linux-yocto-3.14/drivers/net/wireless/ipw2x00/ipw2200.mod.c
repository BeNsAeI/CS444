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
	{ 0x77333844, __VMLINUX_SYMBOL_STR(iw_handler_get_thrspy) },
	{ 0x4bf10e46, __VMLINUX_SYMBOL_STR(iw_handler_set_thrspy) },
	{ 0xdcda7462, __VMLINUX_SYMBOL_STR(iw_handler_get_spy) },
	{ 0x742f649a, __VMLINUX_SYMBOL_STR(iw_handler_set_spy) },
	{ 0xd098a438, __VMLINUX_SYMBOL_STR(cfg80211_wext_giwname) },
	{ 0x3a584de9, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x212775ac, __VMLINUX_SYMBOL_STR(libipw_change_mtu) },
	{ 0x3d5fe666, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x59418aa4, __VMLINUX_SYMBOL_STR(libipw_xmit) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe09a184b, __VMLINUX_SYMBOL_STR(driver_remove_file) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe578d242, __VMLINUX_SYMBOL_STR(driver_create_file) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x96460d2f, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0xab30892f, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1aca5c53, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x2e69f650, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x63988ee5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9523a43, __VMLINUX_SYMBOL_STR(libipw_networks_age) },
	{ 0xcb9ecf19, __VMLINUX_SYMBOL_STR(libipw_set_geo) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x3e017515, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x1a123ca5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x54fdeb16, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xe5998f20, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe2d0cf17, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x1423d569, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x2e2353d, __VMLINUX_SYMBOL_STR(libipw_rx) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x1cab58a, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xf6d59165, __VMLINUX_SYMBOL_STR(libipw_freq_to_channel) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xee1be2c, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0x7c3bc208, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0x70c53eca, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x51b9a7be, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x70735b3d, __VMLINUX_SYMBOL_STR(libipw_txb_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd7edd9, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xff099500, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x2238268, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x7f06316a, __VMLINUX_SYMBOL_STR(libipw_wx_set_encode) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0x6c93d1e, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf82fecbd, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x3d414693, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x26e62058, __VMLINUX_SYMBOL_STR(alloc_libipw) },
	{ 0xb64d4978, __VMLINUX_SYMBOL_STR(free_libipw) },
	{ 0xefbc12e4, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x5d807e3f, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xbdc2374b, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x8088bac8, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x4038db5d, __VMLINUX_SYMBOL_STR(libipw_rx_mgt) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0xad039c54, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x77194a19, __VMLINUX_SYMBOL_STR(libipw_wx_get_scan) },
	{ 0x58e745b4, __VMLINUX_SYMBOL_STR(libipw_wx_get_encode) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x3176b42d, __VMLINUX_SYMBOL_STR(libipw_wx_set_encodeext) },
	{ 0x2a3fc22c, __VMLINUX_SYMBOL_STR(libipw_wx_get_encodeext) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x5f266b01, __VMLINUX_SYMBOL_STR(libipw_channel_to_index) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x2d0f99e5, __VMLINUX_SYMBOL_STR(print_ssid) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x9183f682, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xfce20516, __VMLINUX_SYMBOL_STR(libipw_is_valid_channel) },
	{ 0xdd69e24a, __VMLINUX_SYMBOL_STR(libipw_get_geo) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xae61b618, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x49f0074d, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xa34a77f7, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x5fe1e065, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211,libipw,lib80211";

MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002701bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002702bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002711bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002712bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002721bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002722bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002731bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002732bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002741bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv0000103Csd00002741bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002742bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002751bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002752bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002753bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002754bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002761bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002762bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004221sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004223sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004224sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "743C1D496825C286F776DCB");

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
	{ 0x212775ac, __VMLINUX_SYMBOL_STR(libipw_change_mtu) },
	{ 0x3d5fe666, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x59418aa4, __VMLINUX_SYMBOL_STR(libipw_xmit) },
	{ 0x6d2785b5, __VMLINUX_SYMBOL_STR(pm_qos_remove_request) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x6df8f4cd, __VMLINUX_SYMBOL_STR(pm_qos_add_request) },
	{ 0x1423d569, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x4038db5d, __VMLINUX_SYMBOL_STR(libipw_rx_mgt) },
	{ 0x2e2353d, __VMLINUX_SYMBOL_STR(libipw_rx) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xab30892f, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x3d414693, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x96460d2f, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0xdd69e24a, __VMLINUX_SYMBOL_STR(libipw_get_geo) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2e69f650, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x26e62058, __VMLINUX_SYMBOL_STR(alloc_libipw) },
	{ 0xa061864a, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xae61b618, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x49f0074d, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xa34a77f7, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0x8c183cbe, __VMLINUX_SYMBOL_STR(iowrite16) },
	{ 0x3e017515, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x9523a43, __VMLINUX_SYMBOL_STR(libipw_networks_age) },
	{ 0xcb9ecf19, __VMLINUX_SYMBOL_STR(libipw_set_geo) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xee1be2c, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x70c53eca, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xb64d4978, __VMLINUX_SYMBOL_STR(free_libipw) },
	{ 0x7c3bc208, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0x684a1cc5, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xefbc12e4, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xf82fecbd, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x51b9a7be, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x5fe1e065, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x2238268, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x3310bf11, __VMLINUX_SYMBOL_STR(pm_qos_update_request) },
	{ 0xd7edd9, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf425d9f7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x77194a19, __VMLINUX_SYMBOL_STR(libipw_wx_get_scan) },
	{ 0x7f06316a, __VMLINUX_SYMBOL_STR(libipw_wx_set_encode) },
	{ 0x58e745b4, __VMLINUX_SYMBOL_STR(libipw_wx_get_encode) },
	{ 0x3176b42d, __VMLINUX_SYMBOL_STR(libipw_wx_set_encodeext) },
	{ 0x2a3fc22c, __VMLINUX_SYMBOL_STR(libipw_wx_get_encodeext) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5d807e3f, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xad039c54, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbdc2374b, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x70735b3d, __VMLINUX_SYMBOL_STR(libipw_txb_free) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9183f682, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8088bac8, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libipw,cfg80211";

MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002520bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002521bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002524bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002525bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002526bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002522bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002523bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002527bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002528bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002529bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd0000252Bbc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd0000252Cbc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd0000252Dbc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002550bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002551bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002553bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002554bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002555bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002560bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002562bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002563bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002561bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002565bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002566bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002567bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002570bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002580bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002582bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002583bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002581bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002585bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002586bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002587bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002590bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002592bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002591bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002593bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002596bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002598bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd000025A0bc*sc*i*");

MODULE_INFO(srcversion, "1E59B480EEECDA544D3782D");

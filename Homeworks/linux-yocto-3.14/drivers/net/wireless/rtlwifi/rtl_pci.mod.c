#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x43804739, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbaf7a2cc, __VMLINUX_SYMBOL_STR(ieee80211_rx_irqsafe) },
	{ 0x22c2beda, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x149a597a, __VMLINUX_SYMBOL_STR(rtl_swlps_beacon) },
	{ 0x57792897, __VMLINUX_SYMBOL_STR(rtl_deinit_deferred_work) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x216a5c83, __VMLINUX_SYMBOL_STR(rtl_deinit_core) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4cae90dc, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x57e700bb, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xd7edd9, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0x1423d569, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x70c53eca, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xea27b50d, __VMLINUX_SYMBOL_STR(read_efuse_byte) },
	{ 0x51b9a7be, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf425d9f7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x25218eae, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd2b1f48a, __VMLINUX_SYMBOL_STR(rtl_global_var) },
	{ 0x684a1cc5, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xab30892f, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x77c30d28, __VMLINUX_SYMBOL_STR(rtl_init_core) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x2298941b, __VMLINUX_SYMBOL_STR(rtl_action_proc) },
	{ 0x43572900, __VMLINUX_SYMBOL_STR(rtl_dbgp_flag_init) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x6b4de810, __VMLINUX_SYMBOL_STR(rtl_lps_change_work_callback) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xe9dfcb06, __VMLINUX_SYMBOL_STR(rtl_init_rx_config) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xe2d0cf17, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xc0b65a74, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x241dedc1, __VMLINUX_SYMBOL_STR(rtl_tid_to_ac) },
	{ 0x1bdc381d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x850a6637, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0xb1d9f39a, __VMLINUX_SYMBOL_STR(rtl_ops) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2600a8a4, __VMLINUX_SYMBOL_STR(rtl_deinit_rfkill) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc322ea5, __VMLINUX_SYMBOL_STR(rtl_p2p_info) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa50c60f, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0xa67f004b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x5d397d50, __VMLINUX_SYMBOL_STR(rtl_attribute_group) },
	{ 0x7c96c0e0, __VMLINUX_SYMBOL_STR(rtl_recognize_peer) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2e69f650, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x7719d133, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0x63988ee5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xe6875fe6, __VMLINUX_SYMBOL_STR(rtl_init_rfkill) },
	{ 0x52ebeb8b, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x7bcaa12b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xa061864a, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x69a6c5d4, __VMLINUX_SYMBOL_STR(rtl_tx_mgmt_proc) },
	{ 0x5b44e046, __VMLINUX_SYMBOL_STR(rtl_beacon_statistic) },
	{ 0x92d12f59, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,rtlwifi";


MODULE_INFO(srcversion, "B07D1002FC86501951333AE");

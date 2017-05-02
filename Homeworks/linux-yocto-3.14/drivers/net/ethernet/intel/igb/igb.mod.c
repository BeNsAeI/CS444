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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xfcb087f0, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc4dc87, __VMLINUX_SYMBOL_STR(timecounter_init) },
	{ 0x4a1d60a6, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xb46f0348, __VMLINUX_SYMBOL_STR(pci_enable_sriov) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x4f2d8a16, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0xce6b9adf, __VMLINUX_SYMBOL_STR(pci_sriov_set_totalvfs) },
	{ 0xef48f0f, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x17795916, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xfbb5e1e6, __VMLINUX_SYMBOL_STR(node_data) },
	{ 0x54a4fd3e, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xdd3dd17f, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xc4541d1f, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0x5d807e3f, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xae1eb8ff, __VMLINUX_SYMBOL_STR(pci_disable_sriov) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xbdc2374b, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xd7edd9, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0xd6cf1548, __VMLINUX_SYMBOL_STR(driver_for_each_device) },
	{ 0x1423d569, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x216a3ab7, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x6248b0fa, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x2447533c, __VMLINUX_SYMBOL_STR(ktime_get_real) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0xf54bf722, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x9ebd7713, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3be903d, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xf425d9f7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x27c33efe, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0xe115e19e, __VMLINUX_SYMBOL_STR(ptp_clock_unregister) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x93a60b71, __VMLINUX_SYMBOL_STR(dca3_get_tag) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x65ff9b0e, __VMLINUX_SYMBOL_STR(devm_hwmon_device_register_with_groups) },
	{ 0x8d47ab47, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0xac34ecec, __VMLINUX_SYMBOL_STR(dca_register_notify) },
	{ 0xf0d23fcd, __VMLINUX_SYMBOL_STR(pci_enable_msix) },
	{ 0xa34a77f7, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x1a33ab9, __VMLINUX_SYMBOL_STR(dca_unregister_notify) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa00aca2a, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x56721741, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x3d414693, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4a7f08a3, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0xcb936d3a, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0xfd67cb5a, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xfb5f776b, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0x24e8a9c7, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xbcf56bdd, __VMLINUX_SYMBOL_STR(ptp_clock_register) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xf976058b, __VMLINUX_SYMBOL_STR(dca_add_requester) },
	{ 0x1534f51f, __VMLINUX_SYMBOL_STR(dev_open) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x74954462, __VMLINUX_SYMBOL_STR(timecounter_read) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xf4c46ad3, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0x83faafd6, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xc0bf6ead, __VMLINUX_SYMBOL_STR(timecounter_cyc2time) },
	{ 0x49f0074d, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x27ea06fa, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xea248cef, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0x2238268, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x1cab58a, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x1bdc381d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xa31300f5, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1ab2f3f7, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x121c8d9f, __VMLINUX_SYMBOL_STR(pm_schedule_suspend) },
	{ 0xdb290822, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x41c96142, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x64197178, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x5fe1e065, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x7d52f354, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x3d5fe666, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xf7d10f83, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4f0ac61a, __VMLINUX_SYMBOL_STR(ptp_clock_index) },
	{ 0xc683d84b, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x63988ee5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xbd5983b5, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0xb4c7d18b, __VMLINUX_SYMBOL_STR(pci_num_vf) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xd154ae4, __VMLINUX_SYMBOL_STR(pci_prepare_to_sleep) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0x312ca88d, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefbc12e4, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x1537dea5, __VMLINUX_SYMBOL_STR(i2c_bit_add_bus) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xbbbcb888, __VMLINUX_SYMBOL_STR(pci_vfs_assigned) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xef724dd, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0xee1be2c, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xa061864a, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x6f2f87be, __VMLINUX_SYMBOL_STR(dca_remove_requester) },
	{ 0x2917796b, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x843fd691, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xbaa641d0, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0x25ca2fcf, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x60a8cb84, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0xabc0da2e, __VMLINUX_SYMBOL_STR(pci_request_selected_regions) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x1724b91b, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xfa33d6a6, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbb0c8375, __VMLINUX_SYMBOL_STR(pcie_capability_write_word) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x8ae17a54, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x92d12f59, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xb5b8dfeb, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-core,ptp,dca,i2c-algo-bit";

MODULE_ALIAS("pci:v00008086d00001F40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001539sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001536sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001537sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001538sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000157Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000157Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001521sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001523sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001524sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001527sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001510sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001516sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000438sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000043Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000043Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001518sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001526sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A9EB4314070BD3E371CFD42");

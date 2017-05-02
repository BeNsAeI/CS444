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
	{ 0xa6cf237a, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0x3d5fe666, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x54a4fd3e, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0x57241723, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0xdb290822, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xa34a77f7, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x49f0074d, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x4a7f08a3, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0xee1be2c, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1423d569, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf425d9f7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0x8b7e3e80, __VMLINUX_SYMBOL_STR(pci_clear_master) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x2238268, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xbdc2374b, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x843fd691, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x6c93d1e, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0xd7edd9, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0x3d414693, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xdf8925e8, __VMLINUX_SYMBOL_STR(pci_pme_active) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa061864a, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x2e69f650, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x24e8a9c7, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xb5b8dfeb, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x70c53eca, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x56721741, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0x684a1cc5, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0xefbc12e4, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xd154ae4, __VMLINUX_SYMBOL_STR(pci_prepare_to_sleep) },
	{ 0x5fe1e065, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xbaa641d0, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0x3e017515, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xf82fecbd, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x108b93a4, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0xf2f388e4, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xcd261969, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x99ea69c2, __VMLINUX_SYMBOL_STR(mii_check_link) },
	{ 0x1e497a7d, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x1497ccf2, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x8ae17a54, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xfcb087f0, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x64197178, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x318a461d, __VMLINUX_SYMBOL_STR(netdev_printk) },
	{ 0xa31300f5, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v00008086d00001029sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001030sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001031sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001032sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001033sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001034sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001038sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001039sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Bsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Csv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Dsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Esv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001050sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001051sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001052sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001053sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001054sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001055sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001056sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001057sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001059sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001064sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001065sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001066sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001067sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001068sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001069sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000106Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000106Bsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001091sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001092sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001093sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001094sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001095sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d000010FEsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001209sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001229sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00002449sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00002459sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000245Dsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d000027DCsv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "801DC80A4C01A648787025E");

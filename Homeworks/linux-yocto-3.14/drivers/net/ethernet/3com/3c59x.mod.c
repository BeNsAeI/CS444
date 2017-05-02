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
	{ 0xa6cf237a, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0x7f3a29d0, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x72197e07, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x3d5fe666, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x3a584de9, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x594bf15b, __VMLINUX_SYMBOL_STR(ioport_map) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xbfc177bc, __VMLINUX_SYMBOL_STR(iowrite32_rep) },
	{ 0x843fd691, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xb5bfcb7f, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xee1be2c, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x2238268, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xefbc12e4, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xe5998f20, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xdb290822, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x3f0546a8, __VMLINUX_SYMBOL_STR(ioread32_rep) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf425d9f7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x70c53eca, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x684a1cc5, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x2e69f650, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xd7edd9, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0xa67f004b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x22c2beda, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xa061864a, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x56721741, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x3d414693, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xcdca3691, __VMLINUX_SYMBOL_STR(nr_irqs) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xb5b8dfeb, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x49f0074d, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xa34a77f7, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbdc2374b, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5d807e3f, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8b784a9e, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x4a7f08a3, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x8ae17a54, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x5fe1e065, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x108b93a4, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x1497ccf2, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xcd261969, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xcf602cc0, __VMLINUX_SYMBOL_STR(pci_bus_type) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xf2f388e4, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8c183cbe, __VMLINUX_SYMBOL_STR(iowrite16) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v000010B7d00005900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005920sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005970sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005950sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005951sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005952sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d0000900Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d0000905Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00007646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005B57sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005057sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005157sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005257sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006564sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00001201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00001202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009210sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D25A5F9BA81F2C56C208B93");

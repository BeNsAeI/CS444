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
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xfcb087f0, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x54a4fd3e, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x5d807e3f, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xbdc2374b, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xd7edd9, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0x1423d569, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x70c53eca, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1a123ca5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xf425d9f7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7f3a29d0, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x56721741, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x3d414693, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x57241723, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb5bfcb7f, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0x24e8a9c7, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x49f0074d, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x2238268, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xa31300f5, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xdb290822, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x41c96142, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x64197178, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1aca5c53, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x3d5fe666, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2e69f650, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xc683d84b, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x63988ee5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xefbc12e4, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xef724dd, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0xee1be2c, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x30e90d20, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xb5b8dfeb, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00001048sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000109Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001B48sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "16486977DCE9D973CEABEAB");

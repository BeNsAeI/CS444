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
	{ 0xad625eaf, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x237e1d00, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x7c640527, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x4f500192, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x1cab58a, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x1188bc1e, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xe8107a51, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x5454c983, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0xe2d0cf17, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x4544d89a, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x7bcaa12b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x6772404c, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0x1b1a51df, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0x25ca2fcf, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x28b5fb0, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xaa281bb0, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x44cdc7aa, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xf56181aa, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xe96618d5, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xe769e743, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x46958bfb, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xb121f9f5, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc0b65a74, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x1a7cb6a8, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0xe2a73688, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,bluetooth";

MODULE_ALIAS("sdio:c02v*d*");
MODULE_ALIAS("sdio:c03v*d*");
MODULE_ALIAS("sdio:c09v*d*");

MODULE_INFO(srcversion, "279853D597594F161355581");

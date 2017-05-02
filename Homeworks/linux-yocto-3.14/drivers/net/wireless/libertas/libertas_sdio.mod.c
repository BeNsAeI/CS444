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
	{ 0xe769e743, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0xe8107a51, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4a1d60a6, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x20e04fa, __VMLINUX_SYMBOL_STR(lbs_resume) },
	{ 0x4544d89a, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0xaa281bb0, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x28b5fb0, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x68b10df8, __VMLINUX_SYMBOL_STR(lbs_stop_card) },
	{ 0x216a3ab7, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xd10904a9, __VMLINUX_SYMBOL_STR(netdev_alert) },
	{ 0x4887835d, __VMLINUX_SYMBOL_STR(__lbs_cmd) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2415f964, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xf425d9f7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe3af64ed, __VMLINUX_SYMBOL_STR(lbs_start_card) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x14620226, __VMLINUX_SYMBOL_STR(lbs_queue_event) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xf4adedb5, __VMLINUX_SYMBOL_STR(lbs_get_firmware_async) },
	{ 0x9f3cfca8, __VMLINUX_SYMBOL_STR(lbs_cmd_copyback) },
	{ 0xdabc7280, __VMLINUX_SYMBOL_STR(lbs_suspend) },
	{ 0xf64277de, __VMLINUX_SYMBOL_STR(lbs_debug) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x1188bc1e, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xad625eaf, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x4ba68ead, __VMLINUX_SYMBOL_STR(lbs_remove_card) },
	{ 0x5e47b0eb, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0xa6cbef2d, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x24ac07d5, __VMLINUX_SYMBOL_STR(lbs_process_rxed_packet) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe96618d5, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x6a7f2db9, __VMLINUX_SYMBOL_STR(lbs_host_to_card_done) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa64158dc, __VMLINUX_SYMBOL_STR(sdio_align_size) },
	{ 0x917e913b, __VMLINUX_SYMBOL_STR(lbs_add_card) },
	{ 0x9204ab3e, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x8e7889a9, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x64197178, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xdf53e4e7, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x237e1d00, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x46958bfb, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x86cc62c3, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xf56181aa, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x44cdc7aa, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xfb8805d6, __VMLINUX_SYMBOL_STR(lbs_notify_command_response) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,libertas";

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "A4088678DEBA6EEDE186DDB");

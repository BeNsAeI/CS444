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
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4a1d60a6, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x2589c31d, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xaa281bb0, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xced6ec44, __VMLINUX_SYMBOL_STR(wl1251_free_hw) },
	{ 0x65fc486e, __VMLINUX_SYMBOL_STR(sdio_writeb_readb) },
	{ 0x28b5fb0, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x216a3ab7, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xfa7f3156, __VMLINUX_SYMBOL_STR(wl12xx_get_platform_data) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xad625eaf, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xbc477a2, __VMLINUX_SYMBOL_STR(irq_set_irq_type) },
	{ 0xe96618d5, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x7522f3ba, __VMLINUX_SYMBOL_STR(irq_modify_status) },
	{ 0x9e98b6c4, __VMLINUX_SYMBOL_STR(wl1251_init_ieee80211) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x431d8303, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x237e1d00, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x403c0bd6, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0x46958bfb, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x3c52eed7, __VMLINUX_SYMBOL_STR(wl1251_alloc_hw) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x86cc62c3, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xf56181aa, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x44cdc7aa, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,mac80211,wl1251";

MODULE_ALIAS("sdio:c*v104Cd9066*");

MODULE_INFO(srcversion, "608D4511A275A6680EF6909");

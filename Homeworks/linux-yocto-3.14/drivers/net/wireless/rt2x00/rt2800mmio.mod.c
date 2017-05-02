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
	{ 0x4fa6d551, __VMLINUX_SYMBOL_STR(rt2800_disable_wpdma) },
	{ 0x682de35d, __VMLINUX_SYMBOL_STR(rt2x00lib_beacondone) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0xc821d22e, __VMLINUX_SYMBOL_STR(rt2800_config) },
	{ 0x9160d73, __VMLINUX_SYMBOL_STR(rt2800_get_txwi_rxwi_size) },
	{ 0x49e689d7, __VMLINUX_SYMBOL_STR(rt2x00lib_pretbtt) },
	{ 0x823cb113, __VMLINUX_SYMBOL_STR(rt2800_wait_wpdma_ready) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x6353563f, __VMLINUX_SYMBOL_STR(rt2800_process_rxwi) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x156d006, __VMLINUX_SYMBOL_STR(rt2x00queue_for_each_entry) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xc40bc0ba, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xeafa47e7, __VMLINUX_SYMBOL_STR(rt2x00mmio_rxdone) },
	{ 0xb6adc413, __VMLINUX_SYMBOL_STR(rt2800_txdone_entry) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xe80d07ca, __VMLINUX_SYMBOL_STR(rt2800_enable_radio) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2800lib,rt2x00lib,rt2x00mmio";


MODULE_INFO(srcversion, "9DB96A2B235AF050F52CE8F");

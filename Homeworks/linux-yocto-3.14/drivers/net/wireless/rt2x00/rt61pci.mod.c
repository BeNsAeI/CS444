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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xaf6686bf, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x20607be8, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0x751e9d74, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0x41ee04ea, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0xd42264, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xaeec4030, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0xaa6f7122, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0x718ea15d, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0xe96b45c9, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0xbf952ace, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0x7779fae9, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0xd1605a54, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0x7df5c650, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x661e1724, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0x8b85c527, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x1fe157d3, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0xfcd5a6c5, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0xf0dd4d26, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0xbb03a0fb, __VMLINUX_SYMBOL_STR(rt2x00mmio_flush_queue) },
	{ 0xdb6a85f0, __VMLINUX_SYMBOL_STR(rt2x00mmio_uninitialize) },
	{ 0xf72ce00c, __VMLINUX_SYMBOL_STR(rt2x00mmio_initialize) },
	{ 0x6bf2e225, __VMLINUX_SYMBOL_STR(rt2x00pci_resume) },
	{ 0xe22dffe7, __VMLINUX_SYMBOL_STR(rt2x00pci_suspend) },
	{ 0x9ea301a8, __VMLINUX_SYMBOL_STR(rt2x00pci_remove) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xeafa47e7, __VMLINUX_SYMBOL_STR(rt2x00mmio_rxdone) },
	{ 0x682de35d, __VMLINUX_SYMBOL_STR(rt2x00lib_beacondone) },
	{ 0x6558c0f9, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone) },
	{ 0xc40bc0ba, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0xa16f5cb0, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone_noinfo) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x27cb133b, __VMLINUX_SYMBOL_STR(eeprom_93cx6_multiread) },
	{ 0xd29b009f, __VMLINUX_SYMBOL_STR(crc_itu_t_table) },
	{ 0x6d356209, __VMLINUX_SYMBOL_STR(crc_itu_t) },
	{ 0x1bdc381d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x1423d569, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xef48f0f, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2dba276a, __VMLINUX_SYMBOL_STR(__iowrite32_copy) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6c423090, __VMLINUX_SYMBOL_STR(rt2x00mmio_regbusy_read) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1cec2253, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0xc65efc16, __VMLINUX_SYMBOL_STR(rt2x00pci_probe) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2x00mmio,rt2x00pci,eeprom_93cx6,crc-itu-t";

MODULE_ALIAS("pci:v00001814d00000301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000401sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B2E58AA85300457A6660CC6");

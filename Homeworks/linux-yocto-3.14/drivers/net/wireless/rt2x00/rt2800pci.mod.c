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
	{ 0xd42264, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xaeec4030, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x700880ba, __VMLINUX_SYMBOL_STR(rt2800_get_survey) },
	{ 0x639c3ebe, __VMLINUX_SYMBOL_STR(rt2800_ampdu_action) },
	{ 0x29788cc7, __VMLINUX_SYMBOL_STR(rt2800_get_tsf) },
	{ 0x41cf4980, __VMLINUX_SYMBOL_STR(rt2800_conf_tx) },
	{ 0x1ae4d9a4, __VMLINUX_SYMBOL_STR(rt2x00mac_sta_remove) },
	{ 0x54683e89, __VMLINUX_SYMBOL_STR(rt2x00mac_sta_add) },
	{ 0x2cd58315, __VMLINUX_SYMBOL_STR(rt2800_set_rts_threshold) },
	{ 0xffd7c0d0, __VMLINUX_SYMBOL_STR(rt2800_get_tkip_seq) },
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
	{ 0x64e30b3b, __VMLINUX_SYMBOL_STR(rt2800mmio_get_txwi) },
	{ 0x573ec96e, __VMLINUX_SYMBOL_STR(rt2800mmio_init_registers) },
	{ 0x6c423090, __VMLINUX_SYMBOL_STR(rt2x00mmio_regbusy_read) },
	{ 0x492e34b6, __VMLINUX_SYMBOL_STR(rt2800_sta_remove) },
	{ 0xcebb904a, __VMLINUX_SYMBOL_STR(rt2800_sta_add) },
	{ 0xc821d22e, __VMLINUX_SYMBOL_STR(rt2800_config) },
	{ 0x6df6946, __VMLINUX_SYMBOL_STR(rt2800_config_ant) },
	{ 0xfafd4819, __VMLINUX_SYMBOL_STR(rt2800_config_erp) },
	{ 0x75843268, __VMLINUX_SYMBOL_STR(rt2800_config_intf) },
	{ 0x64cc4d67, __VMLINUX_SYMBOL_STR(rt2800_config_filter) },
	{ 0x3fd0e051, __VMLINUX_SYMBOL_STR(rt2800_config_pairwise_key) },
	{ 0x9fa125a4, __VMLINUX_SYMBOL_STR(rt2800_config_shared_key) },
	{ 0x8a59cfe5, __VMLINUX_SYMBOL_STR(rt2800mmio_fill_rxdone) },
	{ 0x4c617488, __VMLINUX_SYMBOL_STR(rt2800_clear_beacon) },
	{ 0x685f18ef, __VMLINUX_SYMBOL_STR(rt2800_write_beacon) },
	{ 0x5e13b4cd, __VMLINUX_SYMBOL_STR(rt2800_write_tx_data) },
	{ 0xa8986b2f, __VMLINUX_SYMBOL_STR(rt2800mmio_write_tx_desc) },
	{ 0xbb03a0fb, __VMLINUX_SYMBOL_STR(rt2x00mmio_flush_queue) },
	{ 0xf66b1ceb, __VMLINUX_SYMBOL_STR(rt2800mmio_stop_queue) },
	{ 0xf16f157, __VMLINUX_SYMBOL_STR(rt2800mmio_kick_queue) },
	{ 0xc7da4e2e, __VMLINUX_SYMBOL_STR(rt2800mmio_start_queue) },
	{ 0x6c34432a, __VMLINUX_SYMBOL_STR(rt2800_vco_calibration) },
	{ 0x60e7e22f, __VMLINUX_SYMBOL_STR(rt2800_gain_calibration) },
	{ 0xf97d6daf, __VMLINUX_SYMBOL_STR(rt2800_link_tuner) },
	{ 0x2f2bd141, __VMLINUX_SYMBOL_STR(rt2800_reset_tuner) },
	{ 0xab263221, __VMLINUX_SYMBOL_STR(rt2800_link_stats) },
	{ 0x271a5a0e, __VMLINUX_SYMBOL_STR(rt2800_rfkill_poll) },
	{ 0x38320068, __VMLINUX_SYMBOL_STR(rt2800mmio_clear_entry) },
	{ 0xa5896860, __VMLINUX_SYMBOL_STR(rt2800mmio_get_entry_state) },
	{ 0xdb6a85f0, __VMLINUX_SYMBOL_STR(rt2x00mmio_uninitialize) },
	{ 0xf72ce00c, __VMLINUX_SYMBOL_STR(rt2x00mmio_initialize) },
	{ 0xe55443b, __VMLINUX_SYMBOL_STR(rt2800_load_firmware) },
	{ 0x1264c015, __VMLINUX_SYMBOL_STR(rt2800_check_firmware) },
	{ 0xa00d37c, __VMLINUX_SYMBOL_STR(rt2800_probe_hw) },
	{ 0xc6a1455e, __VMLINUX_SYMBOL_STR(rt2800mmio_autowake_tasklet) },
	{ 0x92c0bcd1, __VMLINUX_SYMBOL_STR(rt2800mmio_rxdone_tasklet) },
	{ 0x2505789d, __VMLINUX_SYMBOL_STR(rt2800mmio_tbtt_tasklet) },
	{ 0xfad1430, __VMLINUX_SYMBOL_STR(rt2800mmio_pretbtt_tasklet) },
	{ 0xe28f94c7, __VMLINUX_SYMBOL_STR(rt2800mmio_txstatus_tasklet) },
	{ 0x5fa4db64, __VMLINUX_SYMBOL_STR(rt2800mmio_interrupt) },
	{ 0xaf03b6c0, __VMLINUX_SYMBOL_STR(rt2800mmio_queue_init) },
	{ 0x6bf2e225, __VMLINUX_SYMBOL_STR(rt2x00pci_resume) },
	{ 0xe22dffe7, __VMLINUX_SYMBOL_STR(rt2x00pci_suspend) },
	{ 0x9ea301a8, __VMLINUX_SYMBOL_STR(rt2x00pci_remove) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x9f5384e1, __VMLINUX_SYMBOL_STR(rt2800mmio_toggle_irq) },
	{ 0xf2f7b26a, __VMLINUX_SYMBOL_STR(rt2800mmio_enable_radio) },
	{ 0xcf2b2aa4, __VMLINUX_SYMBOL_STR(rt2800_mcu_request) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2dba276a, __VMLINUX_SYMBOL_STR(__iowrite32_copy) },
	{ 0x1b54c3f5, __VMLINUX_SYMBOL_STR(rt2800_read_eeprom_efuse) },
	{ 0x27cb133b, __VMLINUX_SYMBOL_STR(eeprom_93cx6_multiread) },
	{ 0xeb56c32b, __VMLINUX_SYMBOL_STR(rt2800_efuse_detect) },
	{ 0xc65efc16, __VMLINUX_SYMBOL_STR(rt2x00pci_probe) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2800lib,rt2800mmio,rt2x00mmio,rt2x00pci,eeprom_93cx6";

MODULE_ALIAS("pci:v00001814d00000601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000781sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007708sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007728sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007738sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007748sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007758sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007768sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001462d0000891Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A3Bd00001059sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007722sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003592sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003593sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000359Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3C7746DD6C1FC7D7AEE619C");

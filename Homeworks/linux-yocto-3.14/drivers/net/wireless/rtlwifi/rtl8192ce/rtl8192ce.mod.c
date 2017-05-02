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
	{ 0x647c476a, __VMLINUX_SYMBOL_STR(rtl_cam_delete_one_entry) },
	{ 0xb0e8de7, __VMLINUX_SYMBOL_STR(rtl_fw_cb) },
	{ 0x845ef911, __VMLINUX_SYMBOL_STR(rtl_pci_probe) },
	{ 0x10a7133e, __VMLINUX_SYMBOL_STR(rtl_cam_get_free_entry) },
	{ 0x1f2b155, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_rfpath_switch) },
	{ 0x927e373, __VMLINUX_SYMBOL_STR(_rtl92c_phy_fw_rf_serial_read) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xfa02b53c, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_txpower_level) },
	{ 0xb718148f, __VMLINUX_SYMBOL_STR(rtl92c_set_fw_rsvdpagepkt) },
	{ 0x79441a59, __VMLINUX_SYMBOL_STR(rtl92c_dm_check_txpower_tracking) },
	{ 0xd69fbf39, __VMLINUX_SYMBOL_STR(rtl_ps_disable_nic) },
	{ 0x65a67181, __VMLINUX_SYMBOL_STR(rtl92c_dm_watchdog) },
	{ 0x2e092c2, __VMLINUX_SYMBOL_STR(_rtl92c_phy_init_bb_rf_register_definition) },
	{ 0x2957084c, __VMLINUX_SYMBOL_STR(_rtl92c_phy_rf_serial_write) },
	{ 0x77a651f0, __VMLINUX_SYMBOL_STR(rtl_get_tcb_desc) },
	{ 0xd3c55a02, __VMLINUX_SYMBOL_STR(_rtl92c_phy_rf_serial_read) },
	{ 0x323a5b2, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_bw_mode) },
	{ 0xfdaf88f7, __VMLINUX_SYMBOL_STR(rtl92c_phy_lc_calibrate) },
	{ 0xb3314d48, __VMLINUX_SYMBOL_STR(_rtl92c_phy_calculate_bit_shift) },
	{ 0x61f2d56c, __VMLINUX_SYMBOL_STR(rtl_efuse_shadow_map_update) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x79188a02, __VMLINUX_SYMBOL_STR(rtl_query_rxpwrpercentage) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x675b05f9, __VMLINUX_SYMBOL_STR(rtl_cam_add_one_entry) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x73b52c45, __VMLINUX_SYMBOL_STR(rtl_phy_scan_operation_backup) },
	{ 0x23eb32bc, __VMLINUX_SYMBOL_STR(rtl92c_dm_init_edca_turbo) },
	{ 0xb8eb903d, __VMLINUX_SYMBOL_STR(rtl92c_phy_iq_calibrate) },
	{ 0x47836760, __VMLINUX_SYMBOL_STR(rtl92c_dm_init) },
	{ 0x6a2beb0a, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_bb_reg) },
	{ 0xcd98ad9f, __VMLINUX_SYMBOL_STR(rtl_pci_resume) },
	{ 0x4bf40b68, __VMLINUX_SYMBOL_STR(rtl_ps_enable_nic) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xca13a27b, __VMLINUX_SYMBOL_STR(rtl92c_firmware_selfreset) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x87075321, __VMLINUX_SYMBOL_STR(rtl92c_dm_rf_saving) },
	{ 0x53bcfa52, __VMLINUX_SYMBOL_STR(rtl92c_set_fw_pwrmode_cmd) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xb0e6569d, __VMLINUX_SYMBOL_STR(_rtl92c_phy_fw_rf_serial_write) },
	{ 0x60b19351, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x52d1c275, __VMLINUX_SYMBOL_STR(rtl_pci_suspend) },
	{ 0xf4a21ce9, __VMLINUX_SYMBOL_STR(rtlwifi_rate_mapping) },
	{ 0xc47110e8, __VMLINUX_SYMBOL_STR(rtl92c_set_fw_joinbss_report_cmd) },
	{ 0xffbbab07, __VMLINUX_SYMBOL_STR(rtl92c_download_fw) },
	{ 0xfd030b59, __VMLINUX_SYMBOL_STR(rtl_pci_disconnect) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x4348e584, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_io_cmd) },
	{ 0xb9de0fe1, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x49b05e36, __VMLINUX_SYMBOL_STR(rtl_cam_mark_invalid) },
	{ 0xe9b548d6, __VMLINUX_SYMBOL_STR(rtl92c_phy_rf_config) },
	{ 0x1f309d68, __VMLINUX_SYMBOL_STR(rtl_cam_del_entry) },
	{ 0x68ec6510, __VMLINUX_SYMBOL_STR(rtl92c_set_p2p_ps_offload_cmd) },
	{ 0x9a80c149, __VMLINUX_SYMBOL_STR(rtl_cam_empty_entry) },
	{ 0xf61da2f1, __VMLINUX_SYMBOL_STR(rtl92ce_phy_set_rf_on) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xf5b9b8db, __VMLINUX_SYMBOL_STR(rtl92c_phy_query_bb_reg) },
	{ 0x5e8ee522, __VMLINUX_SYMBOL_STR(_rtl92c_store_pwrIndex_diffrate_offset) },
	{ 0x8e8af3d8, __VMLINUX_SYMBOL_STR(rtl_cam_reset_all_entry) },
	{ 0xfd3cb05a, __VMLINUX_SYMBOL_STR(rtl_process_phyinfo) },
	{ 0xa3a3875b, __VMLINUX_SYMBOL_STR(efuse_read_1byte) },
	{ 0x266ccfda, __VMLINUX_SYMBOL_STR(_rtl92c_phy_bb8192c_config_parafile) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x734e2454, __VMLINUX_SYMBOL_STR(rtl92c_fill_h2c_cmd) },
	{ 0xe4ce9770, __VMLINUX_SYMBOL_STR(rtl92c_phy_sw_chnl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,rtl_pci,rtl8192c-common,mac80211";

MODULE_ALIAS("pci:v000010ECd00008191sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008178sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008177sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008176sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "577486CDF8772459D81B4AD");

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
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd69fbf39, __VMLINUX_SYMBOL_STR(rtl_ps_disable_nic) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x77a651f0, __VMLINUX_SYMBOL_STR(rtl_get_tcb_desc) },
	{ 0x61f2d56c, __VMLINUX_SYMBOL_STR(rtl_efuse_shadow_map_update) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x79188a02, __VMLINUX_SYMBOL_STR(rtl_query_rxpwrpercentage) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x675b05f9, __VMLINUX_SYMBOL_STR(rtl_cam_add_one_entry) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x207fbb70, __VMLINUX_SYMBOL_STR(rtl_evm_db_to_percentage) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x73b52c45, __VMLINUX_SYMBOL_STR(rtl_phy_scan_operation_backup) },
	{ 0xf425d9f7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xcd98ad9f, __VMLINUX_SYMBOL_STR(rtl_pci_resume) },
	{ 0x4bf40b68, __VMLINUX_SYMBOL_STR(rtl_ps_enable_nic) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xde98f58e, __VMLINUX_SYMBOL_STR(rtl_signal_scale_mapping) },
	{ 0x60b19351, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x52d1c275, __VMLINUX_SYMBOL_STR(rtl_pci_suspend) },
	{ 0xf4a21ce9, __VMLINUX_SYMBOL_STR(rtlwifi_rate_mapping) },
	{ 0xfd030b59, __VMLINUX_SYMBOL_STR(rtl_pci_disconnect) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd75ecda, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb9de0fe1, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x49b05e36, __VMLINUX_SYMBOL_STR(rtl_cam_mark_invalid) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1f309d68, __VMLINUX_SYMBOL_STR(rtl_cam_del_entry) },
	{ 0x9a80c149, __VMLINUX_SYMBOL_STR(rtl_cam_empty_entry) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x8e8af3d8, __VMLINUX_SYMBOL_STR(rtl_cam_reset_all_entry) },
	{ 0xfd3cb05a, __VMLINUX_SYMBOL_STR(rtl_process_phyinfo) },
	{ 0xa4a60ba7, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa3a3875b, __VMLINUX_SYMBOL_STR(efuse_read_1byte) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,rtl_pci,mac80211";

MODULE_ALIAS("pci:v000010ECd00008179sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4D0248920A8ABAB530716AA");

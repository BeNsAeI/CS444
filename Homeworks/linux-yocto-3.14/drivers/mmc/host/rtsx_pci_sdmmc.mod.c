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
	{ 0xc41081d9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xcce9b035, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x9c57ca26, __VMLINUX_SYMBOL_STR(rtsx_pci_transfer_data) },
	{ 0xfaa78916, __VMLINUX_SYMBOL_STR(rtsx_pci_send_cmd_no_wait) },
	{ 0xf196337f, __VMLINUX_SYMBOL_STR(rtsx_pci_write_ppbuf) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1bdc26cf, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x20df4c2, __VMLINUX_SYMBOL_STR(rtsx_pci_switch_clock) },
	{ 0xc48cfc53, __VMLINUX_SYMBOL_STR(rtsx_pci_card_pull_ctl_disable) },
	{ 0x8d0f5180, __VMLINUX_SYMBOL_STR(rtsx_pci_card_power_off) },
	{ 0x8f8d6771, __VMLINUX_SYMBOL_STR(rtsx_pci_card_power_on) },
	{ 0x66746428, __VMLINUX_SYMBOL_STR(rtsx_pci_card_pull_ctl_enable) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2c748226, __VMLINUX_SYMBOL_STR(rtsx_pci_switch_output_voltage) },
	{ 0xeeac3fd8, __VMLINUX_SYMBOL_STR(rtsx_pci_read_register) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x1926ab78, __VMLINUX_SYMBOL_STR(rtsx_pci_card_exclusive_check) },
	{ 0x2505fc66, __VMLINUX_SYMBOL_STR(rtsx_pci_write_register) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xdfbc1389, __VMLINUX_SYMBOL_STR(rtsx_pci_card_exist) },
	{ 0x88cbe293, __VMLINUX_SYMBOL_STR(rtsx_pci_start_run) },
	{ 0xe00ab4b4, __VMLINUX_SYMBOL_STR(rtsx_pci_read_ppbuf) },
	{ 0xb1c1862d, __VMLINUX_SYMBOL_STR(rtsx_pci_send_cmd) },
	{ 0x38c52fd7, __VMLINUX_SYMBOL_STR(rtsx_pci_add_cmd) },
	{ 0x8e7889a9, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x60848b61, __VMLINUX_SYMBOL_STR(mmc_alloc_host) },
	{ 0x2e5b1a41, __VMLINUX_SYMBOL_STR(mmc_detect_change) },
	{ 0xf2c8af6b, __VMLINUX_SYMBOL_STR(mmc_free_host) },
	{ 0xdf53e4e7, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6847a938, __VMLINUX_SYMBOL_STR(mmc_request_done) },
	{ 0xb5622faf, __VMLINUX_SYMBOL_STR(rtsx_pci_complete_unfinished_transfer) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtsx_pci,mmc_core";

MODULE_ALIAS("platform:rtsx_pci_sdmmc");

MODULE_INFO(srcversion, "3464EC41C9B04903E5B9F08");

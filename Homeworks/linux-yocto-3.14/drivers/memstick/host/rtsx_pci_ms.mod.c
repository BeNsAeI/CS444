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
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8f8d6771, __VMLINUX_SYMBOL_STR(rtsx_pci_card_power_on) },
	{ 0x66746428, __VMLINUX_SYMBOL_STR(rtsx_pci_card_pull_ctl_enable) },
	{ 0xc48cfc53, __VMLINUX_SYMBOL_STR(rtsx_pci_card_pull_ctl_disable) },
	{ 0x8d0f5180, __VMLINUX_SYMBOL_STR(rtsx_pci_card_power_off) },
	{ 0x1926ab78, __VMLINUX_SYMBOL_STR(rtsx_pci_card_exclusive_check) },
	{ 0xedee657b, __VMLINUX_SYMBOL_STR(memstick_add_host) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xf2aa8127, __VMLINUX_SYMBOL_STR(memstick_alloc_host) },
	{ 0x2588d213, __VMLINUX_SYMBOL_STR(memstick_detect_change) },
	{ 0x9c57ca26, __VMLINUX_SYMBOL_STR(rtsx_pci_transfer_data) },
	{ 0xfaa78916, __VMLINUX_SYMBOL_STR(rtsx_pci_send_cmd_no_wait) },
	{ 0x20df4c2, __VMLINUX_SYMBOL_STR(rtsx_pci_switch_clock) },
	{ 0x88cbe293, __VMLINUX_SYMBOL_STR(rtsx_pci_start_run) },
	{ 0x2505fc66, __VMLINUX_SYMBOL_STR(rtsx_pci_write_register) },
	{ 0xeeac3fd8, __VMLINUX_SYMBOL_STR(rtsx_pci_read_register) },
	{ 0xb1c1862d, __VMLINUX_SYMBOL_STR(rtsx_pci_send_cmd) },
	{ 0x38c52fd7, __VMLINUX_SYMBOL_STR(rtsx_pci_add_cmd) },
	{ 0x9071507e, __VMLINUX_SYMBOL_STR(memstick_free_host) },
	{ 0x5b4e99d2, __VMLINUX_SYMBOL_STR(memstick_remove_host) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x38975b70, __VMLINUX_SYMBOL_STR(memstick_next_req) },
	{ 0xb5622faf, __VMLINUX_SYMBOL_STR(rtsx_pci_complete_unfinished_transfer) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9bcf63c3, __VMLINUX_SYMBOL_STR(memstick_suspend_host) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x10030269, __VMLINUX_SYMBOL_STR(memstick_resume_host) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtsx_pci,memstick";

MODULE_ALIAS("platform:rtsx_pci_ms");

MODULE_INFO(srcversion, "34822FA6052029C2E441698");

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
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x1535ad9b, __VMLINUX_SYMBOL_STR(cb710_sg_dwiter_read_next_block) },
	{ 0x1baac85, __VMLINUX_SYMBOL_STR(sg_miter_stop) },
	{ 0x2291aaaa, __VMLINUX_SYMBOL_STR(sg_miter_start) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x5fd510e9, __VMLINUX_SYMBOL_STR(cb710_pci_update_config_reg) },
	{ 0x8e7889a9, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x60848b61, __VMLINUX_SYMBOL_STR(mmc_alloc_host) },
	{ 0xdbbe46ed, __VMLINUX_SYMBOL_STR(cb710_sg_dwiter_write_next_block) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x6847a938, __VMLINUX_SYMBOL_STR(mmc_request_done) },
	{ 0x2e5b1a41, __VMLINUX_SYMBOL_STR(mmc_detect_change) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0xf2c8af6b, __VMLINUX_SYMBOL_STR(mmc_free_host) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x625a4e95, __VMLINUX_SYMBOL_STR(cb710_set_irq_handler) },
	{ 0xdf53e4e7, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x8c183cbe, __VMLINUX_SYMBOL_STR(iowrite16) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cb710,mmc_core";


MODULE_INFO(srcversion, "B0FBB7FA699679823C69C4D");

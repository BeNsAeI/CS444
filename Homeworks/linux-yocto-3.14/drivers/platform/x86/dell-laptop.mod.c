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
	{ 0xcde7219f, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xa2bd908f, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7a7c30df, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xfd6293c2, __VMLINUX_SYMBOL_STR(boot_tvec_bases) },
	{ 0xf593fb41, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xadba87ec, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0xb14c7feb, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x641370af, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc41081d9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x535557d0, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x7f670e4, __VMLINUX_SYMBOL_STR(platform_device_del) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xd9e13248, __VMLINUX_SYMBOL_STR(i8042_remove_filter) },
	{ 0xe8cd8cbd, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0xa91b5561, __VMLINUX_SYMBOL_STR(acpi_video_backlight_support) },
	{ 0xf5447b95, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x69ee7e59, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xdd096c28, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xbd3fa324, __VMLINUX_SYMBOL_STR(i8042_install_filter) },
	{ 0x4cabed9, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0x19972677, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x81e6b37f, __VMLINUX_SYMBOL_STR(dmi_get_system_info) },
	{        0, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x9f28736c, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x406b83bd, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xcce9b035, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x56947347, __VMLINUX_SYMBOL_STR(dmi_walk) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0xc0763484, __VMLINUX_SYMBOL_STR(rfkill_blocked) },
	{ 0x8a490c90, __VMLINUX_SYMBOL_STR(rfkill_set_sw_state) },
	{ 0x4fdee897, __VMLINUX_SYMBOL_STR(i8042_command) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x97999817, __VMLINUX_SYMBOL_STR(rfkill_set_hw_state) },
	{ 0xa05f372e, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2c208607, __VMLINUX_SYMBOL_STR(power_supply_is_system_supplied) },
	{ 0xa75079d6, __VMLINUX_SYMBOL_STR(dcdbas_smi_request) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
	{ 0x85f5e2aa, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0x78f3d2df, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill,dcdbas";

MODULE_ALIAS("dmi*:svn*DellInc.*:ct*8*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*9*:");
MODULE_ALIAS("dmi*:svn*DellComputerCorporation*:ct*8*:");

MODULE_INFO(srcversion, "19A4EC0E941BF22C5C98A8F");

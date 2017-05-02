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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xfd6293c2, __VMLINUX_SYMBOL_STR(boot_tvec_bases) },
	{ 0xf593fb41, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xbec968e2, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xc41081d9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x535557d0, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x7f670e4, __VMLINUX_SYMBOL_STR(platform_device_del) },
	{ 0x69ee7e59, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xed0d3520, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x9f28736c, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x406b83bd, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xcce9b035, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x776b584a, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xc00d2030, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xe8ffc674, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x3ecf6cfc, __VMLINUX_SYMBOL_STR(wmi_install_notify_handler) },
	{ 0x27621d88, __VMLINUX_SYMBOL_STR(sparse_keymap_setup) },
	{ 0x7c0c0c6b, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x7a45377b, __VMLINUX_SYMBOL_STR(acpi_video_unregister) },
	{ 0xa91b5561, __VMLINUX_SYMBOL_STR(acpi_video_backlight_support) },
	{ 0x5b271d86, __VMLINUX_SYMBOL_STR(acpi_video_dmi_promote_vendor) },
	{ 0xdf0da3cc, __VMLINUX_SYMBOL_STR(acpi_get_devices) },
	{ 0xfb882fb7, __VMLINUX_SYMBOL_STR(wmi_query_block) },
	{ 0x56947347, __VMLINUX_SYMBOL_STR(dmi_walk) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb14c7feb, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xadba87ec, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe8cd8cbd, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0xdd096c28, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0x4cabed9, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0x19972677, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0x97999817, __VMLINUX_SYMBOL_STR(rfkill_set_hw_state) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xc9d4d6d1, __VMLINUX_SYMBOL_STR(wmi_has_guid) },
	{ 0x1b8b95ad, __VMLINUX_SYMBOL_STR(i8042_unlock_chip) },
	{ 0x4fdee897, __VMLINUX_SYMBOL_STR(i8042_command) },
	{ 0x17f341a0, __VMLINUX_SYMBOL_STR(i8042_lock_chip) },
	{ 0xb4a806ac, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xae85caa4, __VMLINUX_SYMBOL_STR(sparse_keymap_free) },
	{ 0xb5a6ebe2, __VMLINUX_SYMBOL_STR(wmi_remove_notify_handler) },
	{ 0x268e8663, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x7cda2a9f, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x8a490c90, __VMLINUX_SYMBOL_STR(rfkill_set_sw_state) },
	{ 0x314ef42d, __VMLINUX_SYMBOL_STR(sparse_keymap_report_event) },
	{ 0x5fd39754, __VMLINUX_SYMBOL_STR(sparse_keymap_entry_from_scancode) },
	{ 0x876d29f1, __VMLINUX_SYMBOL_STR(wmi_get_event_data) },
	{ 0x81b10bc2, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xba2d8594, __VMLINUX_SYMBOL_STR(ec_read) },
	{ 0x44a81d5f, __VMLINUX_SYMBOL_STR(acpi_evaluate_object) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x561c634a, __VMLINUX_SYMBOL_STR(wmi_evaluate_method) },
	{ 0x876dafc3, __VMLINUX_SYMBOL_STR(ec_write) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wmi,sparse-keymap,video,rfkill";


MODULE_INFO(srcversion, "7BA6D6BBD388497412A5B7C");

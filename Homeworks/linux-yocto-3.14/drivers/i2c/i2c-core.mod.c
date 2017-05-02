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
	{ 0xecbf3d5e, __VMLINUX_SYMBOL_STR(acpi_device_uevent_modalias) },
	{ 0xfcd181e, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0xdc6699cb, __VMLINUX_SYMBOL_STR(acpi_dev_free_resource_list) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa9850bf0, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xee3bedfc, __VMLINUX_SYMBOL_STR(acpi_dev_pm_attach) },
	{ 0x53294a04, __VMLINUX_SYMBOL_STR(rt_mutex_lock) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x4d7b995f, __VMLINUX_SYMBOL_STR(pm_generic_restore) },
	{ 0xbd0e2233, __VMLINUX_SYMBOL_STR(acpi_device_modalias) },
	{ 0xf6748423, __VMLINUX_SYMBOL_STR(__i2c_board_lock) },
	{ 0xf816c866, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x4462d6f7, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x2a9d51cb, __VMLINUX_SYMBOL_STR(acpi_bus_get_device) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x29a8110, __VMLINUX_SYMBOL_STR(acpi_match_device) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xc2cafe1d, __VMLINUX_SYMBOL_STR(pm_generic_freeze) },
	{ 0x294fdc61, __VMLINUX_SYMBOL_STR(acpi_bus_get_status) },
	{ 0x22ede969, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xd431db1e, __VMLINUX_SYMBOL_STR(class_compat_create_link) },
	{ 0x50e7193a, __VMLINUX_SYMBOL_STR(__i2c_first_dynamic_bus_num) },
	{ 0x20dcf5b3, __VMLINUX_SYMBOL_STR(class_compat_remove_link) },
	{ 0xd477d6e2, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x24282ce0, __VMLINUX_SYMBOL_STR(rt_mutex_trylock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xd395f139, __VMLINUX_SYMBOL_STR(rt_mutex_unlock) },
	{ 0x4fd5cfb9, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x7fc478e, __VMLINUX_SYMBOL_STR(acpi_dev_resource_interrupt) },
	{ 0xefd3b435, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x9eceebff, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0xcaef1b77, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xd2a653e0, __VMLINUX_SYMBOL_STR(pm_generic_suspend) },
	{ 0x8d7d4a22, __VMLINUX_SYMBOL_STR(pm_generic_runtime_suspend) },
	{ 0x725c9955, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe40ced87, __VMLINUX_SYMBOL_STR(bus_for_each_dev) },
	{ 0x6f36c782, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x4aff7de5, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x99b3b7e2, __VMLINUX_SYMBOL_STR(acpi_dev_get_resources) },
	{ 0x304e80ab, __VMLINUX_SYMBOL_STR(pm_generic_resume) },
	{ 0xeedf4a92, __VMLINUX_SYMBOL_STR(pm_generic_runtime_resume) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x4994dbfa, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x32c3cb4e, __VMLINUX_SYMBOL_STR(class_compat_register) },
	{ 0x343bdf1, __VMLINUX_SYMBOL_STR(__i2c_board_list) },
	{ 0x1bf0fb99, __VMLINUX_SYMBOL_STR(bus_for_each_drv) },
	{ 0xf8a9d764, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0xeb10a48f, __VMLINUX_SYMBOL_STR(pm_generic_poweroff) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x687934e9, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x7a066e89, __VMLINUX_SYMBOL_STR(pm_generic_thaw) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xcdbd6a0f, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xe5883bd9, __VMLINUX_SYMBOL_STR(class_compat_unregister) },
	{ 0x71936b47, __VMLINUX_SYMBOL_STR(acpi_dev_pm_detach) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x5f419491, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0xbaaea7eb, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xfb80c7a0, __VMLINUX_SYMBOL_STR(acpi_walk_namespace) },
	{ 0xbb47f84c, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xa7f92105, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1308B7491155072924BB634");

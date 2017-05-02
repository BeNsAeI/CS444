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
	{ 0xaa9087c0, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xef5e3f03, __VMLINUX_SYMBOL_STR(configfs_unregister_subsystem) },
	{ 0xd401d397, __VMLINUX_SYMBOL_STR(unregister_console) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x9dca41f4, __VMLINUX_SYMBOL_STR(register_console) },
	{ 0x3260ea86, __VMLINUX_SYMBOL_STR(configfs_register_subsystem) },
	{ 0x115c8169, __VMLINUX_SYMBOL_STR(config_group_init) },
	{ 0xc56a27f4, __VMLINUX_SYMBOL_STR(netpoll_parse_options) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xd1e3b15c, __VMLINUX_SYMBOL_STR(config_item_init_type_name) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0x25c677c4, __VMLINUX_SYMBOL_STR(mac_pton) },
	{ 0xc0ec8efc, __VMLINUX_SYMBOL_STR(netpoll_send_udp) },
	{ 0xb1c3a01a, __VMLINUX_SYMBOL_STR(oops_in_progress) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe4d140a5, __VMLINUX_SYMBOL_STR(netpoll_setup) },
	{ 0x7a974e2b, __VMLINUX_SYMBOL_STR(netpoll_print_options) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x1b6314fd, __VMLINUX_SYMBOL_STR(in_aton) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xe57878a1, __VMLINUX_SYMBOL_STR(in6_pton) },
	{ 0x4841bdee, __VMLINUX_SYMBOL_STR(strnchr) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xea75b8bb, __VMLINUX_SYMBOL_STR(netpoll_cleanup) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x544e2a01, __VMLINUX_SYMBOL_STR(__netpoll_cleanup) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x343b1e34, __VMLINUX_SYMBOL_STR(config_item_put) },
	{ 0xd8276ff9, __VMLINUX_SYMBOL_STR(config_item_get) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=configfs";


MODULE_INFO(srcversion, "601D42CB4355651E46B6582");

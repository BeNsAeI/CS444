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
	{ 0x79fb0082, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x384f5810, __VMLINUX_SYMBOL_STR(ipmi_smi_watcher_unregister) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0xb7a19cc2, __VMLINUX_SYMBOL_STR(ipmi_smi_watcher_register) },
	{ 0x5bc3cb08, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x2830542b, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x2bb672f0, __VMLINUX_SYMBOL_STR(__class_create) },
	{        0, __VMLINUX_SYMBOL_STR(compat_alloc_user_space) },
	{ 0xfcb77cfd, __VMLINUX_SYMBOL_STR(ipmi_free_recv_msg) },
	{ 0x1a10c898, __VMLINUX_SYMBOL_STR(ipmi_set_maintenance_mode) },
	{ 0x804f922a, __VMLINUX_SYMBOL_STR(ipmi_addr_length) },
	{ 0x5e80f37c, __VMLINUX_SYMBOL_STR(ipmi_unregister_for_cmd) },
	{ 0x524f6f51, __VMLINUX_SYMBOL_STR(ipmi_get_my_address) },
	{ 0x16dcec76, __VMLINUX_SYMBOL_STR(ipmi_set_my_address) },
	{ 0xe0fa83f2, __VMLINUX_SYMBOL_STR(ipmi_register_for_cmd) },
	{ 0xa2a98b91, __VMLINUX_SYMBOL_STR(ipmi_get_maintenance_mode) },
	{ 0x5fcdcc05, __VMLINUX_SYMBOL_STR(ipmi_get_my_LUN) },
	{ 0xa28a2ace, __VMLINUX_SYMBOL_STR(ipmi_set_gets_events) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xe6ab72a6, __VMLINUX_SYMBOL_STR(ipmi_set_my_LUN) },
	{ 0x1348760d, __VMLINUX_SYMBOL_STR(ipmi_request_settime) },
	{ 0xe4f4665b, __VMLINUX_SYMBOL_STR(ipmi_validate_addr) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xd672047e, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x423b776a, __VMLINUX_SYMBOL_STR(ipmi_create_user) },
	{ 0x8c8ee770, __VMLINUX_SYMBOL_STR(ipmi_destroy_user) },
	{ 0xc35f508f, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x6dcbae38, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x73eeeb5b, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipmi_msghandler";


MODULE_INFO(srcversion, "88071320C916C44BC0DC4BB");

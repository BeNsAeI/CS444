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
	{ 0x8d2e268b, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0xaa9087c0, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xb6f2ba3e, __VMLINUX_SYMBOL_STR(unregister_mtd_user) },
	{ 0xf8a13e82, __VMLINUX_SYMBOL_STR(register_mtd_user) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x755e21fd, __VMLINUX_SYMBOL_STR(mtd_read) },
	{ 0xf8fe3d0b, __VMLINUX_SYMBOL_STR(kmsg_dump_register) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0xc0d26387, __VMLINUX_SYMBOL_STR(kmsg_dump_unregister) },
	{ 0x52ef4b41, __VMLINUX_SYMBOL_STR(mtd_block_markbad) },
	{ 0xfb8cf6f8, __VMLINUX_SYMBOL_STR(mtd_block_isbad) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xb8f797fc, __VMLINUX_SYMBOL_STR(mtd_erase) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x450fb522, __VMLINUX_SYMBOL_STR(kmsg_dump_get_buffer) },
	{ 0x3a14836e, __VMLINUX_SYMBOL_STR(mtd_write) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xa9f31eab, __VMLINUX_SYMBOL_STR(mtd_panic_write) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6C8D4996F25AF527FF8D158");

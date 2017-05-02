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
	{ 0xbf410ba, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x53877e3e, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0xd2fb4a42, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0xbafbf0b1, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x1f1988f7, __VMLINUX_SYMBOL_STR(hwpoison_filter_flags_value) },
	{ 0x9d6052b3, __VMLINUX_SYMBOL_STR(debugfs_create_u64) },
	{ 0x1edc21cb, __VMLINUX_SYMBOL_STR(hwpoison_filter_flags_mask) },
	{ 0xae6eaf93, __VMLINUX_SYMBOL_STR(hwpoison_filter_dev_minor) },
	{ 0x117c7305, __VMLINUX_SYMBOL_STR(hwpoison_filter_dev_major) },
	{ 0xbec968e2, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xf5447b95, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x69ee7e59, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x641370af, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x3a38dc65, __VMLINUX_SYMBOL_STR(memory_failure) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd69b294a, __VMLINUX_SYMBOL_STR(shake_page) },
	{ 0xb1cf3c4e, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0x154c8b30, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xf29a5948, __VMLINUX_SYMBOL_STR(hwpoison_filter) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xa408512b, __VMLINUX_SYMBOL_STR(PageHuge) },
	{ 0x1e000879, __VMLINUX_SYMBOL_STR(hwpoison_filter_enable) },
	{ 0x4604a43a, __VMLINUX_SYMBOL_STR(mem_section) },
	{ 0xb907513f, __VMLINUX_SYMBOL_STR(unpoison_memory) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xedc3b4e6, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DB05A11D7585ECA23311872");

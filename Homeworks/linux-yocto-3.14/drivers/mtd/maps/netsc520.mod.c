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
	{ 0x5e7b8a7f, __VMLINUX_SYMBOL_STR(map_destroy) },
	{ 0xf07c775, __VMLINUX_SYMBOL_STR(mtd_device_unregister) },
	{ 0x64ab3d26, __VMLINUX_SYMBOL_STR(mtd_device_parse_register) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xa7e8739f, __VMLINUX_SYMBOL_STR(do_map_probe) },
	{ 0x1d4289fd, __VMLINUX_SYMBOL_STR(simple_map_init) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FB8CC37420BEAB6441F6EC2");

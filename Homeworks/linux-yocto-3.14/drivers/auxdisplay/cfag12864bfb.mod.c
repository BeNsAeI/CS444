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
	{ 0xa4c94175, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0x90088c76, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0x98fd5e60, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0xf29a389d, __VMLINUX_SYMBOL_STR(fb_sys_write) },
	{ 0x40c308d0, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0xecb2e5d, __VMLINUX_SYMBOL_STR(cfag12864b_disable) },
	{ 0xf593fb41, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xc41081d9, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x535557d0, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x9f28736c, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x406b83bd, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xcce9b035, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x3389f926, __VMLINUX_SYMBOL_STR(cfag12864b_enable) },
	{ 0x2ff9464, __VMLINUX_SYMBOL_STR(cfag12864b_isinited) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9bc8057e, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x2b49dcd4, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x563e1c8b, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xc48e9d95, __VMLINUX_SYMBOL_STR(cfag12864b_buffer) },
	{ 0x9d6e60b0, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0xa7a9615b, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sysimgblt,syscopyarea,sysfillrect,fb_sys_fops,cfag12864b";


MODULE_INFO(srcversion, "7F7ADEA35B42406FA272ED3");

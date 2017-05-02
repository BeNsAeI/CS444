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
	{ 0xe2337087, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0x809b3735, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0xd21843c2, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2d85b091, __VMLINUX_SYMBOL_STR(orinoco_if_add) },
	{ 0x57fc0323, __VMLINUX_SYMBOL_STR(orinoco_init) },
	{ 0x11f2e989, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0x1208b60, __VMLINUX_SYMBOL_STR(pcmcia_request_irq) },
	{ 0xffe27bca, __VMLINUX_SYMBOL_STR(orinoco_interrupt) },
	{ 0xdb0cbd65, __VMLINUX_SYMBOL_STR(hermes_struct_init) },
	{ 0x594bf15b, __VMLINUX_SYMBOL_STR(ioport_map) },
	{ 0x703015f0, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0x6dadf8f8, __VMLINUX_SYMBOL_STR(alloc_orinocodev) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x6479aabd, __VMLINUX_SYMBOL_STR(pcmcia_write_config_byte) },
	{ 0x5461a480, __VMLINUX_SYMBOL_STR(pcmcia_read_config_byte) },
	{ 0x37d6500f, __VMLINUX_SYMBOL_STR(pcmcia_dev_present) },
	{ 0xdc6aa45e, __VMLINUX_SYMBOL_STR(free_orinocodev) },
	{ 0x33d69484, __VMLINUX_SYMBOL_STR(orinoco_if_del) },
	{ 0xfc39e32f, __VMLINUX_SYMBOL_STR(ioport_unmap) },
	{ 0x486f0d81, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xc910ee3a, __VMLINUX_SYMBOL_STR(orinoco_down) },
	{ 0x62f1e5f2, __VMLINUX_SYMBOL_STR(orinoco_up) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=orinoco";

MODULE_ALIAS("pcmcia:m026Cc0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0104c0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa816CC815pb6FBF459Apc*pd*");

MODULE_INFO(srcversion, "EEC80756281ABF565EB2E9A");

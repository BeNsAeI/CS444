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
	{ 0xe2337087, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0x809b3735, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0xd21843c2, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0xaec3240e, __VMLINUX_SYMBOL_STR(b1pcmcia_addcard_m1) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf14bf8b1, __VMLINUX_SYMBOL_STR(b1pcmcia_addcard_b1) },
	{ 0xea620116, __VMLINUX_SYMBOL_STR(b1pcmcia_addcard_m2) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x11f2e989, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0x703015f0, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x486f0d81, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0x29562993, __VMLINUX_SYMBOL_STR(b1pcmcia_delcard) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=b1pcmcia";

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa95D42008pb845DC335pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa95D42008pb81E10430pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa95D42008pb18E8558Apc*pd*");

MODULE_INFO(srcversion, "1B9F3A1E6F8139264737AF8");

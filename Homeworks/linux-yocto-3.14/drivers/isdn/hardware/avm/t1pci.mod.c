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
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x4403fcf, __VMLINUX_SYMBOL_STR(unregister_capi_driver) },
	{ 0x9f823278, __VMLINUX_SYMBOL_STR(register_capi_driver) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x1ccbc990, __VMLINUX_SYMBOL_STR(attach_capi_ctr) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x49a4d3c, __VMLINUX_SYMBOL_STR(b1dmactl_proc_fops) },
	{ 0x6eea6806, __VMLINUX_SYMBOL_STR(b1dma_reset_ctr) },
	{ 0xa091aa95, __VMLINUX_SYMBOL_STR(b1dma_load_firmware) },
	{ 0x80eb8d28, __VMLINUX_SYMBOL_STR(b1dma_send_message) },
	{ 0xec1c53ec, __VMLINUX_SYMBOL_STR(b1dma_release_appl) },
	{ 0x7f132fbf, __VMLINUX_SYMBOL_STR(b1dma_register_appl) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xd6f9f1ea, __VMLINUX_SYMBOL_STR(b1dma_interrupt) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x99fb49f6, __VMLINUX_SYMBOL_STR(t1pci_detect) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x79d2ca65, __VMLINUX_SYMBOL_STR(avmcard_dma_alloc) },
	{ 0xbe7fca6d, __VMLINUX_SYMBOL_STR(b1_alloc_card) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xce473f45, __VMLINUX_SYMBOL_STR(b1_free_card) },
	{ 0x1491d554, __VMLINUX_SYMBOL_STR(avmcard_dma_free) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x4cf00023, __VMLINUX_SYMBOL_STR(detach_capi_ctr) },
	{ 0xc79e97ee, __VMLINUX_SYMBOL_STR(b1dma_reset) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,b1dma,b1";

MODULE_ALIAS("pci:v00001244d00001200sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EBC22941C17FA965CAE979D");

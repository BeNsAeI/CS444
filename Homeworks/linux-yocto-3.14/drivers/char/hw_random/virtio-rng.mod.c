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
	{ 0xb495fd54, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0xf5b4a06, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x5d77952d, __VMLINUX_SYMBOL_STR(hwrng_register) },
	{ 0x6cd6cdaf, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x9af370d2, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x511ab427, __VMLINUX_SYMBOL_STR(wait_for_completion_killable) },
	{ 0x6bc072, __VMLINUX_SYMBOL_STR(hwrng_unregister) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x80db3c00, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000004v*");

MODULE_INFO(srcversion, "DF50B1CA0474C9D14FEEF23");

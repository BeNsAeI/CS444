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
	{ 0x3ce4c26d, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x46e72966, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x1918f453, __VMLINUX_SYMBOL_STR(drm_pci_exit) },
	{ 0x203fc1aa, __VMLINUX_SYMBOL_STR(drm_ati_pcigart_cleanup) },
	{ 0x8795e1e2, __VMLINUX_SYMBOL_STR(drm_mmap) },
	{ 0x27260fad, __VMLINUX_SYMBOL_STR(drm_core_ioremap_wc) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x56e364a2, __VMLINUX_SYMBOL_STR(drm_vblank_init) },
	{ 0x8e2c415d, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x2277e34f, __VMLINUX_SYMBOL_STR(drm_ati_pcigart_init) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xa0c37ab3, __VMLINUX_SYMBOL_STR(drm_handle_vblank) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x79fb0082, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xf593fb41, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x9745d638, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0xcd5893f9, __VMLINUX_SYMBOL_STR(drm_core_ioremapfree) },
	{ 0xfbdcf23, __VMLINUX_SYMBOL_STR(drm_getsarea) },
	{ 0x6a53535, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x5226445d, __VMLINUX_SYMBOL_STR(drm_irq_uninstall) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{        0, __VMLINUX_SYMBOL_STR(compat_alloc_user_space) },
	{ 0x3e017515, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x126c4555, __VMLINUX_SYMBOL_STR(drm_pci_init) },
	{ 0x498dcb5e, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xf82fecbd, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x4d6dacf5, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x67db3112, __VMLINUX_SYMBOL_STR(drm_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";


MODULE_INFO(srcversion, "7BB6D8354CD81A8030D18C9");

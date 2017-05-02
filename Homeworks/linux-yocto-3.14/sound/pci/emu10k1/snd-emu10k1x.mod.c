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
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x24a94b26, __VMLINUX_SYMBOL_STR(snd_info_get_line) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xa87a48ea, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_step) },
	{ 0x6861699f, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x5661821b, __VMLINUX_SYMBOL_STR(snd_card_create) },
	{ 0x6e060f0, __VMLINUX_SYMBOL_STR(snd_dma_alloc_pages) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xe21e7e7a, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x50f7648d, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0xa6073010, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x4af832c6, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xac5d8ac8, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x7112e7f6, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x2ae3deaa, __VMLINUX_SYMBOL_STR(release_and_free_resource) },
	{ 0xaa8385f6, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xc1bb9da4, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0xfa25b6fd, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0x4b015768, __VMLINUX_SYMBOL_STR(snd_iprintf) },
	{ 0x1bdc381d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x4e1b99f, __VMLINUX_SYMBOL_STR(snd_pcm_std_chmaps) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xc5da98c1, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xba942c8d, __VMLINUX_SYMBOL_STR(snd_dma_free_pages) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x524af7f6, __VMLINUX_SYMBOL_STR(snd_ac97_bus) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x5e82474e, __VMLINUX_SYMBOL_STR(snd_ac97_mixer) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x63988ee5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xdc8ae4c4, __VMLINUX_SYMBOL_STR(snd_card_proc_new) },
	{ 0x14d8c740, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0xd30b6ca5, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xb1488af3, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xfb4a82f1, __VMLINUX_SYMBOL_STR(snd_pcm_add_chmap_ctls) },
	{ 0xf8600731, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x1a11bee5, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0xc2d93161, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xfab482c3, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-pcm,snd-rawmidi,snd-ac97-codec";

MODULE_ALIAS("pci:v00001102d00000006sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5F27DC5C7168343C1AE169C");

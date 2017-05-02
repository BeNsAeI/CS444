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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x6861699f, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x5661821b, __VMLINUX_SYMBOL_STR(snd_card_create) },
	{ 0x6e060f0, __VMLINUX_SYMBOL_STR(snd_dma_alloc_pages) },
	{ 0x83967e59, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_msbits) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x39bf9301, __VMLINUX_SYMBOL_STR(_snd_pcm_hw_param_setempty) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x70c53eca, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xe21e7e7a, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa6073010, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x617ae9cf, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xac5d8ac8, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x335d8496, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x683099eb, __VMLINUX_SYMBOL_STR(snd_hwdep_new) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xaa8385f6, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x94098ff8, __VMLINUX_SYMBOL_STR(snd_interval_list) },
	{ 0xc1bb9da4, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x4b015768, __VMLINUX_SYMBOL_STR(snd_iprintf) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x2dce194e, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x1bdc381d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x6d334118, __VMLINUX_SYMBOL_STR(__get_user_8) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xc5da98c1, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xba942c8d, __VMLINUX_SYMBOL_STR(snd_dma_free_pages) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xb595fe27, __VMLINUX_SYMBOL_STR(snd_pcm_set_sync) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa67f004b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x4cda566, __VMLINUX_SYMBOL_STR(snd_interval_refine) },
	{ 0x2e69f650, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x3e017515, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xdc8ae4c4, __VMLINUX_SYMBOL_STR(snd_card_proc_new) },
	{ 0xd30b6ca5, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xb1488af3, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xf8600731, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x1a11bee5, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0xc2d93161, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xef3398d4, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_empty) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf82fecbd, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xfab482c3, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd,snd-rawmidi,snd-hwdep";

MODULE_ALIAS("pci:v000010EEd00003FC5sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C7D681FEA23C47A4D57E49A");

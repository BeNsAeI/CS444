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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{        0, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xebeb12f8, __VMLINUX_SYMBOL_STR(snd_ac97_read) },
	{ 0x407536ed, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_noresample) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x1689514c, __VMLINUX_SYMBOL_STR(__snd_util_memblk_new) },
	{ 0x6861699f, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x5661821b, __VMLINUX_SYMBOL_STR(snd_card_create) },
	{ 0x6e060f0, __VMLINUX_SYMBOL_STR(snd_dma_alloc_pages) },
	{ 0xeb100589, __VMLINUX_SYMBOL_STR(snd_device_free) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xf647b817, __VMLINUX_SYMBOL_STR(snd_util_memhdr_free) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x70c53eca, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x38334fa9, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages) },
	{ 0xe21e7e7a, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x4a35647, __VMLINUX_SYMBOL_STR(__snd_util_mem_free) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x50f7648d, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0xbbba4504, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0xb550b14e, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xa6073010, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x39affa8a, __VMLINUX_SYMBOL_STR(snd_pcm_suspend_all) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xd9fc7b62, __VMLINUX_SYMBOL_STR(snd_pcm_sgbuf_ops_page) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4af832c6, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x26caee14, __VMLINUX_SYMBOL_STR(snd_ac97_update) },
	{ 0xa34a77f7, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x617ae9cf, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x31c42b0e, __VMLINUX_SYMBOL_STR(snd_timer_new) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbfb3f5f4, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xac5d8ac8, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x335d8496, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0x3971b4df, __VMLINUX_SYMBOL_STR(snd_ecards_limit) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x184a2c03, __VMLINUX_SYMBOL_STR(snd_cards) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x683099eb, __VMLINUX_SYMBOL_STR(snd_hwdep_new) },
	{ 0x7112e7f6, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xaa8385f6, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x3b4ceb4a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x8ddc4708, __VMLINUX_SYMBOL_STR(snd_util_memhdr_new) },
	{ 0xe6e3b875, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xc1bb9da4, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0xe758a342, __VMLINUX_SYMBOL_STR(__snd_util_mem_alloc) },
	{ 0xfa25b6fd, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0x4b015768, __VMLINUX_SYMBOL_STR(snd_iprintf) },
	{ 0xf4d97c40, __VMLINUX_SYMBOL_STR(snd_ac97_suspend) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xea248cef, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x1bdc381d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x32a16ae, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x986ff10, __VMLINUX_SYMBOL_STR(snd_ctl_remove_id) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xc5da98c1, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xba942c8d, __VMLINUX_SYMBOL_STR(snd_dma_free_pages) },
	{ 0x374e0d31, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc24a88b2, __VMLINUX_SYMBOL_STR(snd_ctl_find_id) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x524af7f6, __VMLINUX_SYMBOL_STR(snd_ac97_bus) },
	{ 0xa9c17d56, __VMLINUX_SYMBOL_STR(snd_ctl_remove) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5fe1e065, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x5e82474e, __VMLINUX_SYMBOL_STR(snd_ac97_mixer) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e69f650, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x308418d2, __VMLINUX_SYMBOL_STR(snd_timer_interrupt) },
	{ 0x63988ee5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xd666bbc5, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x3e017515, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xdc8ae4c4, __VMLINUX_SYMBOL_STR(snd_card_proc_new) },
	{ 0x14d8c740, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0xd30b6ca5, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xb1488af3, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xb0bcb423, __VMLINUX_SYMBOL_STR(snd_seq_device_new) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf8600731, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x209ee99d, __VMLINUX_SYMBOL_STR(snd_ac97_resume) },
	{ 0x1a11bee5, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0xb1eaabc, __VMLINUX_SYMBOL_STR(snd_ac97_write_cache) },
	{ 0xc2d93161, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf82fecbd, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xfab482c3, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x2b441951, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-ac97-codec,snd-util-mem,snd,snd-rawmidi,snd-timer,snd-hwdep,snd-seq-device";

MODULE_ALIAS("pci:v00001102d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000008sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A2460671D33263D904EC4C1");

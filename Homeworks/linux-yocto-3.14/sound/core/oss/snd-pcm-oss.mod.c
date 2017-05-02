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
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x24a94b26, __VMLINUX_SYMBOL_STR(snd_info_get_line) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x5e7f4920, __VMLINUX_SYMBOL_STR(snd_pcm_format_set_silence) },
	{ 0xafd37bca, __VMLINUX_SYMBOL_STR(snd_card_unref) },
	{ 0x9a2d39e6, __VMLINUX_SYMBOL_STR(snd_card_file_remove) },
	{ 0x17bca8db, __VMLINUX_SYMBOL_STR(snd_pcm_lib_write) },
	{ 0xe1c72b77, __VMLINUX_SYMBOL_STR(snd_pcm_release_substream) },
	{ 0xf7f1b666, __VMLINUX_SYMBOL_STR(snd_pcm_notify) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x2606504f, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x4f816e9b, __VMLINUX_SYMBOL_STR(snd_pcm_format_big_endian) },
	{ 0xdc9cd206, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xe3307475, __VMLINUX_SYMBOL_STR(snd_pcm_hw_refine) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x198788b4, __VMLINUX_SYMBOL_STR(snd_lookup_oss_minor_data) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xc35f03f9, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x20dc8e1f, __VMLINUX_SYMBOL_STR(snd_pcm_link_rwlock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x1d027e4b, __VMLINUX_SYMBOL_STR(snd_pcm_format_signed) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x52e3e4a5, __VMLINUX_SYMBOL_STR(snd_pcm_hw_param_value) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xfa2aa703, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x94597e83, __VMLINUX_SYMBOL_STR(snd_pcm_hw_param_last) },
	{ 0x8df3789f, __VMLINUX_SYMBOL_STR(snd_oss_info_register) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe2856f7, __VMLINUX_SYMBOL_STR(snd_pcm_mmap_data) },
	{ 0x6ef8fcd8, __VMLINUX_SYMBOL_STR(snd_pcm_format_linear) },
	{ 0x4b015768, __VMLINUX_SYMBOL_STR(snd_iprintf) },
	{ 0xa01280bf, __VMLINUX_SYMBOL_STR(snd_mixer_oss_ioctl_card) },
	{ 0x725c9955, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x74843f0e, __VMLINUX_SYMBOL_STR(snd_pcm_lib_writev) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x15a9ecbb, __VMLINUX_SYMBOL_STR(snd_card_file_add) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x5300ac58, __VMLINUX_SYMBOL_STR(snd_pcm_lib_readv) },
	{ 0xd01e2cb4, __VMLINUX_SYMBOL_STR(snd_register_oss_device) },
	{ 0x33f538a9, __VMLINUX_SYMBOL_STR(snd_pcm_open_substream) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x650f8603, __VMLINUX_SYMBOL_STR(snd_pcm_format_silence_64) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x878db332, __VMLINUX_SYMBOL_STR(snd_unregister_oss_device) },
	{ 0x3796bdcc, __VMLINUX_SYMBOL_STR(snd_pcm_format_little_endian) },
	{ 0x68a24153, __VMLINUX_SYMBOL_STR(snd_pcm_format_physical_width) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x4cda566, __VMLINUX_SYMBOL_STR(snd_interval_refine) },
	{ 0x9e6d79f8, __VMLINUX_SYMBOL_STR(snd_info_get_str) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x283dfe3, __VMLINUX_SYMBOL_STR(_snd_pcm_hw_params_any) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa61aa028, __VMLINUX_SYMBOL_STR(snd_pcm_format_unsigned) },
	{ 0x29d51aac, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xb1e04a32, __VMLINUX_SYMBOL_STR(snd_pcm_kernel_ioctl) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xbfd1ae53, __VMLINUX_SYMBOL_STR(snd_info_register) },
	{ 0x94fe3b06, __VMLINUX_SYMBOL_STR(snd_pcm_hw_param_first) },
	{ 0xbb47f84c, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xfbb15c32, __VMLINUX_SYMBOL_STR(_raw_read_lock_irq) },
	{ 0xcba85a56, __VMLINUX_SYMBOL_STR(snd_pcm_lib_read) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd,snd-mixer-oss";


MODULE_INFO(srcversion, "1F7E97360380D4FB2DE8546");

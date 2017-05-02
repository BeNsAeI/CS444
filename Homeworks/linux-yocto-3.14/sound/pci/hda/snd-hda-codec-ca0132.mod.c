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
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3799e107, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable) },
	{ 0x942531df, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_prepare) },
	{ 0x2eb9fc58, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x6e704e58, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_stereo) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x80fb104a, __VMLINUX_SYMBOL_STR(snd_hda_jack_add_kctls) },
	{ 0x1f6be80c, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x778bc6e3, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put) },
	{ 0xc72ef905, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0xbf5e5e9, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9e1cc3be, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get) },
	{ 0x7820542, __VMLINUX_SYMBOL_STR(snd_hda_add_codec_preset) },
	{ 0x8e4c6826, __VMLINUX_SYMBOL_STR(snd_hda_calc_stream_format) },
	{ 0x7d0bd8a9, __VMLINUX_SYMBOL_STR(snd_hda_codec_write) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfa935d45, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_in_ctls) },
	{ 0x9fd59d8c, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x5346708a, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0x569c2011, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0x417fd320, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0xb3deebb4, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_share_sw) },
	{ 0x39c347cf, __VMLINUX_SYMBOL_STR(snd_hda_ctl_add) },
	{ 0x3348e1fd, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_close) },
	{ 0xa68d7bfe, __VMLINUX_SYMBOL_STR(snd_hda_create_dig_out_ctls) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xc5da98c1, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5b7ebe58, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_cleanup) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc6c10eed, __VMLINUX_SYMBOL_STR(__snd_hda_codec_cleanup_stream) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x89395a48, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_open) },
	{ 0x74acd37a, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get_from_tag) },
	{ 0x3e017515, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xf0e59923, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0x846a8773, __VMLINUX_SYMBOL_STR(snd_hda_codec_setup_stream) },
	{ 0x56927719, __VMLINUX_SYMBOL_STR(snd_hda_power_save) },
	{ 0xa9d7a398, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x884197ba, __VMLINUX_SYMBOL_STR(snd_hda_jack_report_sync) },
	{ 0x5f235890, __VMLINUX_SYMBOL_STR(snd_hda_delete_codec_preset) },
	{ 0xf82fecbd, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xc5f75528, __VMLINUX_SYMBOL_STR(snd_hda_codec_read) },
	{ 0xc684943e, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x3e59bcb4, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_update) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec,snd";


MODULE_INFO(srcversion, "39C6187CDEBEE1C4CFC0160");

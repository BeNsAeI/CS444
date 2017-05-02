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
	{ 0xac2c791f, __VMLINUX_SYMBOL_STR(snd_hda_gen_free) },
	{ 0x942531df, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_prepare) },
	{ 0x375cacd5, __VMLINUX_SYMBOL_STR(snd_hda_input_mux_info) },
	{ 0x2eb9fc58, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x565d9f49, __VMLINUX_SYMBOL_STR(snd_hda_ch_mode_put) },
	{ 0x29154f0b, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0x32f6915, __VMLINUX_SYMBOL_STR(snd_hda_input_mux_put) },
	{ 0x1f6be80c, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0x6af8430e, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x3879134f, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0x778bc6e3, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put) },
	{ 0xc72ef905, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0x9e1cc3be, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get) },
	{ 0x7820542, __VMLINUX_SYMBOL_STR(snd_hda_add_codec_preset) },
	{ 0x41aaaea4, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_prepare) },
	{ 0xdfb9d63f, __VMLINUX_SYMBOL_STR(snd_hda_ch_mode_get) },
	{ 0x2762c620, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_cleanup) },
	{ 0xfa935d45, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_in_ctls) },
	{ 0xbb7a3304, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x9fd59d8c, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0xb05215de, __VMLINUX_SYMBOL_STR(snd_hda_find_mixer_ctl) },
	{ 0x417fd320, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0xb3deebb4, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_share_sw) },
	{ 0xa0f0077c, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_open) },
	{ 0x3348e1fd, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_close) },
	{ 0xa68d7bfe, __VMLINUX_SYMBOL_STR(snd_hda_create_dig_out_ctls) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa29691b, __VMLINUX_SYMBOL_STR(snd_hda_check_board_config) },
	{ 0xc6c10eed, __VMLINUX_SYMBOL_STR(__snd_hda_codec_cleanup_stream) },
	{ 0xedb52ce9, __VMLINUX_SYMBOL_STR(snd_hda_ch_mode_info) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x89395a48, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_open) },
	{ 0xf0e59923, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0x846a8773, __VMLINUX_SYMBOL_STR(snd_hda_codec_setup_stream) },
	{ 0x874ef639, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0x294a2dd0, __VMLINUX_SYMBOL_STR(snd_hda_add_nid) },
	{ 0xa9d7a398, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x5f235890, __VMLINUX_SYMBOL_STR(snd_hda_delete_codec_preset) },
	{ 0x6bc35a5, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0xc684943e, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec";


MODULE_INFO(srcversion, "855CF77C1F5667AEBC1BAEA");

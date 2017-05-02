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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xac2c791f, __VMLINUX_SYMBOL_STR(snd_hda_gen_free) },
	{ 0x942531df, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_prepare) },
	{ 0x375cacd5, __VMLINUX_SYMBOL_STR(snd_hda_input_mux_info) },
	{ 0x2eb9fc58, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x29154f0b, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0xe4f3e0aa, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x355405a8, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0x6e704e58, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_stereo) },
	{ 0xa764c097, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_ctls_put) },
	{ 0x4e702474, __VMLINUX_SYMBOL_STR(__snd_hda_add_vmaster) },
	{ 0x32f6915, __VMLINUX_SYMBOL_STR(snd_hda_input_mux_put) },
	{ 0x1f6be80c, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0x6af8430e, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x3879134f, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0xdf0da3cc, __VMLINUX_SYMBOL_STR(acpi_get_devices) },
	{ 0x778bc6e3, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put) },
	{ 0xa0a099e, __VMLINUX_SYMBOL_STR(snd_hda_gen_update_outputs) },
	{ 0x4d806845, __VMLINUX_SYMBOL_STR(snd_hda_query_pin_caps) },
	{ 0xc72ef905, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0xbf5e5e9, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0xc009c077, __VMLINUX_SYMBOL_STR(snd_hda_attach_beep_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf21f526d, __VMLINUX_SYMBOL_STR(snd_hda_gen_check_power_status) },
	{ 0x9e1cc3be, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get) },
	{ 0xc7a6262f, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_power_to_all) },
	{ 0x7820542, __VMLINUX_SYMBOL_STR(snd_hda_add_codec_preset) },
	{ 0x4ef3c5ca, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_ctls_get) },
	{ 0x41aaaea4, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_prepare) },
	{ 0x200a9f57, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_ctls_info) },
	{ 0x2762c620, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_cleanup) },
	{ 0x7d0bd8a9, __VMLINUX_SYMBOL_STR(snd_hda_codec_write) },
	{ 0xfa935d45, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_in_ctls) },
	{ 0xbb7a3304, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x9fd59d8c, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x5346708a, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0xc1bb9da4, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x569c2011, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xb05215de, __VMLINUX_SYMBOL_STR(snd_hda_find_mixer_ctl) },
	{ 0x417fd320, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0xb3deebb4, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_share_sw) },
	{ 0x39c347cf, __VMLINUX_SYMBOL_STR(snd_hda_ctl_add) },
	{ 0xa0f0077c, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_open) },
	{ 0x3348e1fd, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_close) },
	{ 0xa68d7bfe, __VMLINUX_SYMBOL_STR(snd_hda_create_dig_out_ctls) },
	{ 0x38668cb5, __VMLINUX_SYMBOL_STR(snd_hda_bind_sw) },
	{ 0xab4422bd, __VMLINUX_SYMBOL_STR(snd_hda_codec_write_cache) },
	{ 0xc768c806, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put_beep) },
	{ 0xc5da98c1, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa29691b, __VMLINUX_SYMBOL_STR(snd_hda_check_board_config) },
	{ 0xc6c10eed, __VMLINUX_SYMBOL_STR(__snd_hda_codec_cleanup_stream) },
	{ 0xbeecaad, __VMLINUX_SYMBOL_STR(snd_hda_detach_beep_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x89395a48, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_open) },
	{ 0x75f011d4, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get_beep) },
	{ 0x84f2de92, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x5e95c616, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_tlv) },
	{ 0xf0e59923, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{        0, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x846a8773, __VMLINUX_SYMBOL_STR(snd_hda_codec_setup_stream) },
	{ 0x874ef639, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0xa9d7a398, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x5f235890, __VMLINUX_SYMBOL_STR(snd_hda_delete_codec_preset) },
	{ 0xcd39d1e8, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0xf8dbd9fd, __VMLINUX_SYMBOL_STR(snd_hda_set_vmaster_tlv) },
	{ 0x2b78ec39, __VMLINUX_SYMBOL_STR(snd_hda_bind_vol) },
	{ 0x6bc35a5, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0xc5f75528, __VMLINUX_SYMBOL_STR(snd_hda_codec_read) },
	{ 0xe039175e, __VMLINUX_SYMBOL_STR(snd_hda_get_connections) },
	{ 0xc684943e, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec,snd";


MODULE_INFO(srcversion, "A6221462A9BF3A8CD4EAAB2");

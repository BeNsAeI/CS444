#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x43804739, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x50b02bec, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pin_target) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x942531df, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_prepare) },
	{ 0x2eb9fc58, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x375cacd5, __VMLINUX_SYMBOL_STR(snd_hda_input_mux_info) },
	{ 0x9a8e1877, __VMLINUX_SYMBOL_STR(snd_array_free) },
	{ 0x8188a05f, __VMLINUX_SYMBOL_STR(snd_hda_get_default_vref) },
	{ 0x3582075a, __VMLINUX_SYMBOL_STR(snd_hda_enum_helper_info) },
	{ 0x339d357b, __VMLINUX_SYMBOL_STR(snd_hda_sync_vmaster_hook) },
	{ 0x6e704e58, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_stereo) },
	{ 0x4e702474, __VMLINUX_SYMBOL_STR(__snd_hda_add_vmaster) },
	{ 0xbe7dd7dc, __VMLINUX_SYMBOL_STR(snd_array_new) },
	{ 0x1f6be80c, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0x80fb104a, __VMLINUX_SYMBOL_STR(snd_hda_jack_add_kctls) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x676f5ac, __VMLINUX_SYMBOL_STR(snd_hda_get_input_pin_attr) },
	{ 0xc3a32fa7, __VMLINUX_SYMBOL_STR(snd_hda_check_amp_list_power) },
	{ 0x3879134f, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xe118de5d, __VMLINUX_SYMBOL_STR(snd_pcm_2_1_chmaps) },
	{ 0x778bc6e3, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x5ff98301, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0x4d806845, __VMLINUX_SYMBOL_STR(snd_hda_query_pin_caps) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xc72ef905, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xbf5e5e9, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0xc009c077, __VMLINUX_SYMBOL_STR(snd_hda_attach_beep_device) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x18afa199, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pin_target) },
	{ 0x9e1cc3be, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get) },
	{ 0x5d20564e, __VMLINUX_SYMBOL_STR(snd_hda_get_conn_list) },
	{ 0x461b3cae, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_stereo_info) },
	{ 0x41aaaea4, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_prepare) },
	{ 0x2762c620, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_cleanup) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x7d0bd8a9, __VMLINUX_SYMBOL_STR(snd_hda_codec_write) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf7079b68, __VMLINUX_SYMBOL_STR(is_jack_detectable) },
	{ 0x6448b915, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_switch_get) },
	{ 0xfa935d45, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_in_ctls) },
	{ 0x9fd59d8c, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0xe3a53f4c, __VMLINUX_SYMBOL_STR(sort) },
	{ 0xe1ba353d, __VMLINUX_SYMBOL_STR(snd_hda_get_int_hint) },
	{ 0x569c2011, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0xaffa93ac, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get) },
	{ 0xb05215de, __VMLINUX_SYMBOL_STR(snd_hda_find_mixer_ctl) },
	{ 0xb3deebb4, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_share_sw) },
	{ 0x877d0cb1, __VMLINUX_SYMBOL_STR(snd_hda_get_bool_hint) },
	{ 0xa0f0077c, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_open) },
	{ 0x803824d0, __VMLINUX_SYMBOL_STR(snd_hda_get_conn_index) },
	{ 0x3348e1fd, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_close) },
	{ 0xa68d7bfe, __VMLINUX_SYMBOL_STR(snd_hda_create_dig_out_ctls) },
	{ 0xe07f911b, __VMLINUX_SYMBOL_STR(snd_hda_correct_pin_ctl) },
	{ 0x4dab1f60, __VMLINUX_SYMBOL_STR(snd_hda_add_imux_item) },
	{ 0xab4422bd, __VMLINUX_SYMBOL_STR(snd_hda_codec_write_cache) },
	{ 0x51d00711, __VMLINUX_SYMBOL_STR(snd_hda_codec_update_cache) },
	{ 0x84731e48, __VMLINUX_SYMBOL_STR(snd_hda_get_pin_label) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5b7ebe58, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_cleanup) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1cc5111e, __VMLINUX_SYMBOL_STR(snd_ctl_sync_vmaster) },
	{ 0xc6c10eed, __VMLINUX_SYMBOL_STR(__snd_hda_codec_cleanup_stream) },
	{ 0xafdf4246, __VMLINUX_SYMBOL_STR(snd_hda_codec_flush_cache) },
	{ 0xbeecaad, __VMLINUX_SYMBOL_STR(snd_hda_detach_beep_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd410fac5, __VMLINUX_SYMBOL_STR(snd_hda_add_vmaster_hook) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x89395a48, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_open) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x84f2de92, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0xf0e59923, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0x846a8773, __VMLINUX_SYMBOL_STR(snd_hda_codec_setup_stream) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8ddfbc48, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_switch_put) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xa9d7a398, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0xcd39d1e8, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0xa034b24e, __VMLINUX_SYMBOL_STR(hda_get_autocfg_input_label) },
	{ 0xf8dbd9fd, __VMLINUX_SYMBOL_STR(snd_hda_set_vmaster_tlv) },
	{ 0xc1194474, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_init_stereo) },
	{ 0xc5f75528, __VMLINUX_SYMBOL_STR(snd_hda_codec_read) },
	{ 0xe039175e, __VMLINUX_SYMBOL_STR(snd_hda_get_connections) },
	{ 0xc684943e, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xc5ac382d, __VMLINUX_SYMBOL_STR(snd_hda_apply_verbs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec,snd";


MODULE_INFO(srcversion, "4C996477CDEB3485168BDA2");

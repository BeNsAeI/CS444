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
	{ 0xac2c791f, __VMLINUX_SYMBOL_STR(snd_hda_gen_free) },
	{ 0x375cacd5, __VMLINUX_SYMBOL_STR(snd_hda_input_mux_info) },
	{ 0x2eb9fc58, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x9253cff5, __VMLINUX_SYMBOL_STR(snd_hda_codec_eapd_power_filter) },
	{ 0x29154f0b, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0x99fbe3de, __VMLINUX_SYMBOL_STR(snd_hda_add_verbs) },
	{ 0xe4f3e0aa, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x355405a8, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0x32f6915, __VMLINUX_SYMBOL_STR(snd_hda_input_mux_put) },
	{ 0x1f6be80c, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0x6af8430e, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x676f5ac, __VMLINUX_SYMBOL_STR(snd_hda_get_input_pin_attr) },
	{ 0x3879134f, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0xe577a9ee, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pincfg) },
	{ 0x778bc6e3, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put) },
	{ 0xa0a099e, __VMLINUX_SYMBOL_STR(snd_hda_gen_update_outputs) },
	{ 0x5ff98301, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0xc72ef905, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0xbf5e5e9, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0xe9d0c03f, __VMLINUX_SYMBOL_STR(snd_hda_gen_hp_automute) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x6add5c9a, __VMLINUX_SYMBOL_STR(dmi_find_device) },
	{ 0x9e1cc3be, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get) },
	{ 0x7820542, __VMLINUX_SYMBOL_STR(snd_hda_add_codec_preset) },
	{ 0x7d0bd8a9, __VMLINUX_SYMBOL_STR(snd_hda_codec_write) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xd13f4cf4, __VMLINUX_SYMBOL_STR(snd_hda_gen_path_power_filter) },
	{ 0xf7079b68, __VMLINUX_SYMBOL_STR(is_jack_detectable) },
	{ 0x1ab09bff, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write_cache) },
	{ 0xbb7a3304, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x9fd59d8c, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x5346708a, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0xc1bb9da4, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0xe1ba353d, __VMLINUX_SYMBOL_STR(snd_hda_get_int_hint) },
	{ 0x569c2011, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0x5ceb120, __VMLINUX_SYMBOL_STR(snd_hda_gen_line_automute) },
	{ 0x4b015768, __VMLINUX_SYMBOL_STR(snd_iprintf) },
	{ 0xaffa93ac, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get) },
	{ 0x877d0cb1, __VMLINUX_SYMBOL_STR(snd_hda_get_bool_hint) },
	{ 0x4dab1f60, __VMLINUX_SYMBOL_STR(snd_hda_add_imux_item) },
	{ 0xab4422bd, __VMLINUX_SYMBOL_STR(snd_hda_codec_write_cache) },
	{ 0xc768c806, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put_beep) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x3acf2e9b, __VMLINUX_SYMBOL_STR(snd_hda_enable_beep_device) },
	{ 0xce20c28a, __VMLINUX_SYMBOL_STR(snd_hda_gen_add_kctl) },
	{ 0x75f011d4, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get_beep) },
	{ 0x84f2de92, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x5c3cfcf3, __VMLINUX_SYMBOL_STR(snd_hda_apply_pincfgs) },
	{ 0xf0e59923, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0x874ef639, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0x56927719, __VMLINUX_SYMBOL_STR(snd_hda_power_save) },
	{ 0xa9d7a398, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x5f235890, __VMLINUX_SYMBOL_STR(snd_hda_delete_codec_preset) },
	{ 0xcd39d1e8, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0x36c1a140, __VMLINUX_SYMBOL_STR(snd_hda_gen_mic_autoswitch) },
	{ 0x6bc35a5, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0xc5f75528, __VMLINUX_SYMBOL_STR(snd_hda_codec_read) },
	{ 0xe039175e, __VMLINUX_SYMBOL_STR(snd_hda_get_connections) },
	{ 0xfdea3683, __VMLINUX_SYMBOL_STR(snd_hda_shutup_pins) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec,snd";


MODULE_INFO(srcversion, "211DA178838CCEC7E143666");

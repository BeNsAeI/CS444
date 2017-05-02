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
	{ 0x2eb9fc58, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x3582075a, __VMLINUX_SYMBOL_STR(snd_hda_enum_helper_info) },
	{ 0x29154f0b, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0xe4f3e0aa, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x355405a8, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0x1f6be80c, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x6af8430e, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x310ce7f3, __VMLINUX_SYMBOL_STR(snd_hda_override_conn_list) },
	{ 0xc3a32fa7, __VMLINUX_SYMBOL_STR(snd_hda_check_amp_list_power) },
	{ 0x3879134f, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0xe577a9ee, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pincfg) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x778bc6e3, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put) },
	{ 0x5ff98301, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0xc72ef905, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0xe9d0c03f, __VMLINUX_SYMBOL_STR(snd_hda_gen_hp_automute) },
	{ 0x9e1cc3be, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get) },
	{ 0x7820542, __VMLINUX_SYMBOL_STR(snd_hda_add_codec_preset) },
	{ 0x7d0bd8a9, __VMLINUX_SYMBOL_STR(snd_hda_codec_write) },
	{ 0xf7079b68, __VMLINUX_SYMBOL_STR(is_jack_detectable) },
	{ 0xbb7a3304, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x9fd59d8c, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x5346708a, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0xc1bb9da4, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x569c2011, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0x5ceb120, __VMLINUX_SYMBOL_STR(snd_hda_gen_line_automute) },
	{ 0xaffa93ac, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get) },
	{ 0x417fd320, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0x877d0cb1, __VMLINUX_SYMBOL_STR(snd_hda_get_bool_hint) },
	{ 0x592f08e1, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_free) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x84f2de92, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0xf0e59923, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0x874ef639, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa9d7a398, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x5f235890, __VMLINUX_SYMBOL_STR(snd_hda_delete_codec_preset) },
	{ 0x6bc35a5, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0xc5f75528, __VMLINUX_SYMBOL_STR(snd_hda_codec_read) },
	{ 0x804668d8, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_read) },
	{ 0xe039175e, __VMLINUX_SYMBOL_STR(snd_hda_get_connections) },
	{ 0xc684943e, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
	{ 0xfdea3683, __VMLINUX_SYMBOL_STR(snd_hda_shutup_pins) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec,snd-hda-codec-generic,snd";


MODULE_INFO(srcversion, "A7C9423975A5BA563192367");

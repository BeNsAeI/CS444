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
	{ 0x50b02bec, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pin_target) },
	{ 0x2eb9fc58, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x29154f0b, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0xe4f3e0aa, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x99fbe3de, __VMLINUX_SYMBOL_STR(snd_hda_add_verbs) },
	{ 0x355405a8, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0xa764c097, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_ctls_put) },
	{ 0xbb91edb8, __VMLINUX_SYMBOL_STR(snd_pci_quirk_lookup) },
	{ 0x1f6be80c, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0x6af8430e, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x676f5ac, __VMLINUX_SYMBOL_STR(snd_hda_get_input_pin_attr) },
	{ 0x310ce7f3, __VMLINUX_SYMBOL_STR(snd_hda_override_conn_list) },
	{ 0x3879134f, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0xdf0da3cc, __VMLINUX_SYMBOL_STR(acpi_get_devices) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xa0a099e, __VMLINUX_SYMBOL_STR(snd_hda_gen_update_outputs) },
	{ 0xe249cd50, __VMLINUX_SYMBOL_STR(snd_hda_override_pin_caps) },
	{ 0x5ff98301, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0x4d806845, __VMLINUX_SYMBOL_STR(snd_hda_query_pin_caps) },
	{ 0xc72ef905, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0xbf5e5e9, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0xe9d0c03f, __VMLINUX_SYMBOL_STR(snd_hda_gen_hp_automute) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf21f526d, __VMLINUX_SYMBOL_STR(snd_hda_gen_check_power_status) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x6add5c9a, __VMLINUX_SYMBOL_STR(dmi_find_device) },
	{ 0x7820542, __VMLINUX_SYMBOL_STR(snd_hda_add_codec_preset) },
	{ 0x4ef3c5ca, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_ctls_get) },
	{ 0x41aaaea4, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_prepare) },
	{ 0x200a9f57, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_ctls_info) },
	{ 0x2762c620, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_cleanup) },
	{ 0x7d0bd8a9, __VMLINUX_SYMBOL_STR(snd_hda_codec_write) },
	{ 0xbb7a3304, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x9fd59d8c, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0xee5495d6, __VMLINUX_SYMBOL_STR(snd_hda_jack_set_gating_jack) },
	{ 0x5346708a, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0xc1bb9da4, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x569c2011, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xb05215de, __VMLINUX_SYMBOL_STR(snd_hda_find_mixer_ctl) },
	{ 0x417fd320, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0x39c347cf, __VMLINUX_SYMBOL_STR(snd_hda_ctl_add) },
	{ 0xa0f0077c, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_open) },
	{ 0x38668cb5, __VMLINUX_SYMBOL_STR(snd_hda_bind_sw) },
	{ 0xc768c806, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put_beep) },
	{ 0xc5da98c1, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xafdf4246, __VMLINUX_SYMBOL_STR(snd_hda_codec_flush_cache) },
	{ 0xd6f9caf2, __VMLINUX_SYMBOL_STR(snd_hda_codec_resume_amp) },
	{ 0xce20c28a, __VMLINUX_SYMBOL_STR(snd_hda_gen_add_kctl) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x99006d19, __VMLINUX_SYMBOL_STR(snd_hda_get_nid_path) },
	{ 0x75f011d4, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get_beep) },
	{ 0x84f2de92, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x5c3cfcf3, __VMLINUX_SYMBOL_STR(snd_hda_apply_pincfgs) },
	{ 0xf0e59923, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{        0, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x874ef639, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0xb18c7701, __VMLINUX_SYMBOL_STR(snd_hda_codec_resume_cache) },
	{ 0xa9d7a398, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x5f235890, __VMLINUX_SYMBOL_STR(snd_hda_delete_codec_preset) },
	{ 0xcd39d1e8, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0x6bc35a5, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0xc5f75528, __VMLINUX_SYMBOL_STR(snd_hda_codec_read) },
	{ 0x804668d8, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_read) },
	{ 0xc684943e, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
	{ 0xfdea3683, __VMLINUX_SYMBOL_STR(snd_hda_shutup_pins) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec,snd";


MODULE_INFO(srcversion, "8A513DCCBA7782C273D2F28");

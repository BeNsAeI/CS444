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
	{ 0x29154f0b, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0xe4f3e0aa, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x355405a8, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0x6af8430e, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x3879134f, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0xe577a9ee, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pincfg) },
	{ 0xa0a099e, __VMLINUX_SYMBOL_STR(snd_hda_gen_update_outputs) },
	{ 0x5ff98301, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0xbf5e5e9, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0x7820542, __VMLINUX_SYMBOL_STR(snd_hda_add_codec_preset) },
	{ 0x7d0bd8a9, __VMLINUX_SYMBOL_STR(snd_hda_codec_write) },
	{ 0xbb7a3304, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x9fd59d8c, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x5346708a, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0x569c2011, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0xb05215de, __VMLINUX_SYMBOL_STR(snd_hda_find_mixer_ctl) },
	{ 0x417fd320, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0x39c347cf, __VMLINUX_SYMBOL_STR(snd_hda_ctl_add) },
	{ 0xc5da98c1, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x84f2de92, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x874ef639, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0x5f235890, __VMLINUX_SYMBOL_STR(snd_hda_delete_codec_preset) },
	{ 0xcd39d1e8, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0x6bc35a5, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0xc5f75528, __VMLINUX_SYMBOL_STR(snd_hda_codec_read) },
	{ 0xfdea3683, __VMLINUX_SYMBOL_STR(snd_hda_shutup_pins) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec,snd";


MODULE_INFO(srcversion, "7C7788C3A0E1730573623ED");

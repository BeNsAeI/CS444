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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd2b74da, __VMLINUX_SYMBOL_STR(snd_midi_event_reset_decode) },
	{ 0x1b82065, __VMLINUX_SYMBOL_STR(snd_midi_event_reset_encode) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1a724fcc, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_ctl) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xef1608ac, __VMLINUX_SYMBOL_STR(snd_rawmidi_kernel_release) },
	{ 0x64fcaca7, __VMLINUX_SYMBOL_STR(snd_seq_create_kernel_client) },
	{ 0xdbd1e8c, __VMLINUX_SYMBOL_STR(snd_rawmidi_kernel_open) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2ceec35d, __VMLINUX_SYMBOL_STR(snd_midi_event_decode) },
	{ 0x9ded7669, __VMLINUX_SYMBOL_STR(snd_rawmidi_input_params) },
	{ 0xe0a50454, __VMLINUX_SYMBOL_STR(snd_midi_event_new) },
	{ 0x7b8699eb, __VMLINUX_SYMBOL_STR(snd_seq_event_port_detach) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc622fb29, __VMLINUX_SYMBOL_STR(snd_seq_device_unregister_driver) },
	{ 0xe143d582, __VMLINUX_SYMBOL_STR(snd_rawmidi_drain_output) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb494afee, __VMLINUX_SYMBOL_STR(snd_midi_event_free) },
	{ 0xb74990c1, __VMLINUX_SYMBOL_STR(snd_rawmidi_kernel_write) },
	{ 0x28f2c593, __VMLINUX_SYMBOL_STR(snd_seq_device_register_driver) },
	{ 0x277fdbaf, __VMLINUX_SYMBOL_STR(snd_rawmidi_kernel_read) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x3a57f235, __VMLINUX_SYMBOL_STR(snd_seq_autoload_unlock) },
	{ 0xe934da1d, __VMLINUX_SYMBOL_STR(snd_seq_dump_var_event) },
	{ 0x88a0e1fb, __VMLINUX_SYMBOL_STR(snd_rawmidi_output_params) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x668570c0, __VMLINUX_SYMBOL_STR(snd_midi_event_encode) },
	{ 0x3fb4d161, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_dispatch) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0xb90668b2, __VMLINUX_SYMBOL_STR(snd_seq_autoload_lock) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6bb71038, __VMLINUX_SYMBOL_STR(snd_seq_delete_kernel_client) },
	{ 0xd59b9cd6, __VMLINUX_SYMBOL_STR(snd_rawmidi_info_select) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-event,snd-seq,snd-rawmidi,snd-seq-device";


MODULE_INFO(srcversion, "52D5F778F08904B57E0F06F");

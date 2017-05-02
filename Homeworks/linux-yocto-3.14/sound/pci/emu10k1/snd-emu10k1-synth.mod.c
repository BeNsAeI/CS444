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
	{ 0x4cde5474, __VMLINUX_SYMBOL_STR(snd_emux_new) },
	{ 0xcea15034, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_alloc) },
	{ 0xb7eeb3df, __VMLINUX_SYMBOL_STR(snd_emux_register) },
	{ 0xd8269dd4, __VMLINUX_SYMBOL_STR(snd_emu10k1_memblk_map) },
	{ 0xbb734ee5, __VMLINUX_SYMBOL_STR(snd_emu10k1_voice_alloc) },
	{ 0x596f9288, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_bzero) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc622fb29, __VMLINUX_SYMBOL_STR(snd_seq_device_unregister_driver) },
	{ 0x3bedd6b, __VMLINUX_SYMBOL_STR(snd_emux_free) },
	{ 0x3edc6ecb, __VMLINUX_SYMBOL_STR(snd_emu10k1_ptr_write) },
	{ 0x631330e, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_free) },
	{ 0x28f2c593, __VMLINUX_SYMBOL_STR(snd_seq_device_register_driver) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xee73d8b3, __VMLINUX_SYMBOL_STR(snd_emu10k1_voice_free) },
	{ 0xc16d8d6b, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_copy_from_user) },
	{ 0xef58f575, __VMLINUX_SYMBOL_STR(snd_emu10k1_ptr_read) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-emux-synth,snd-emu10k1,snd-seq-device";


MODULE_INFO(srcversion, "21B509AC880B382000719E2");

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
	{ 0xe68e7cd8, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x2672a354, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0xb2566032, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x474f4d78, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "022D2C4A2DED1E7F5F3D730");

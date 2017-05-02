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
	{ 0x2c78d654, __VMLINUX_SYMBOL_STR(tcp_reno_min_cwnd) },
	{ 0x86ea8c17, __VMLINUX_SYMBOL_STR(tcp_reno_ssthresh) },
	{ 0xa6f6c6bc, __VMLINUX_SYMBOL_STR(tcp_unregister_congestion_control) },
	{ 0x91b7daae, __VMLINUX_SYMBOL_STR(tcp_register_congestion_control) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf8720dbe, __VMLINUX_SYMBOL_STR(tcp_reno_cong_avoid) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F6696400F356B9D1EC62AF9");

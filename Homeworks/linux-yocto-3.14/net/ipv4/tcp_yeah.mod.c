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
	{ 0xf98ac3d1, __VMLINUX_SYMBOL_STR(tcp_vegas_get_info) },
	{ 0x5968517d, __VMLINUX_SYMBOL_STR(tcp_vegas_cwnd_event) },
	{ 0xcde80380, __VMLINUX_SYMBOL_STR(tcp_vegas_state) },
	{ 0x2c78d654, __VMLINUX_SYMBOL_STR(tcp_reno_min_cwnd) },
	{ 0xa6f6c6bc, __VMLINUX_SYMBOL_STR(tcp_unregister_congestion_control) },
	{ 0x91b7daae, __VMLINUX_SYMBOL_STR(tcp_register_congestion_control) },
	{ 0xff1e66c3, __VMLINUX_SYMBOL_STR(tcp_cong_avoid_ai) },
	{ 0xf5b19c3b, __VMLINUX_SYMBOL_STR(tcp_slow_start) },
	{ 0xde68c2eb, __VMLINUX_SYMBOL_STR(tcp_is_cwnd_limited) },
	{ 0xffb24e5c, __VMLINUX_SYMBOL_STR(tcp_vegas_init) },
	{ 0x42b66eb3, __VMLINUX_SYMBOL_STR(tcp_vegas_pkts_acked) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tcp_vegas";


MODULE_INFO(srcversion, "79C4D40376C636570E68813");

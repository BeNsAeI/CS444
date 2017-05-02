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
	{ 0xf1f7a000, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0x74cba65, __VMLINUX_SYMBOL_STR(nf_log_unregister) },
	{ 0x9fc4d620, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x52ea916, __VMLINUX_SYMBOL_STR(nf_log_register) },
	{ 0xf4e6c434, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x50d24064, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x3ee846f1, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0x724f0b57, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xa134d103, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x1724b91b, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe87b7796, __VMLINUX_SYMBOL_STR(nf_log_set) },
	{ 0x10e743f9, __VMLINUX_SYMBOL_STR(nf_log_unset) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BDC74591113DF9E23F94A1D");

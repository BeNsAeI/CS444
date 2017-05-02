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
	{ 0x2b4b7ed8, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0xf1f7a000, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0x20b23935, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0xf4e6c434, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0xdacecd55, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0x131a4d61, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_try_module_get) },
	{ 0xeb4b6f62, __VMLINUX_SYMBOL_STR(nf_conntrack_tmpl_insert) },
	{ 0xb862e00e, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x16054a39, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0x3cfe0a97, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0x725c9955, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x808170a4, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "C62F25326E0B3D89565381E");

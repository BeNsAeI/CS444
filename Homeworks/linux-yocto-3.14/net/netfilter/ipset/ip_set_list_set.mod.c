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
	{ 0xb705462a, __VMLINUX_SYMBOL_STR(ip_set_type_unregister) },
	{ 0xc02dd2af, __VMLINUX_SYMBOL_STR(ip_set_type_register) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2f38afe5, __VMLINUX_SYMBOL_STR(ip_set_elem_len) },
	{ 0x97e9ce59, __VMLINUX_SYMBOL_STR(ip_set_get_byname) },
	{ 0xf5f29cde, __VMLINUX_SYMBOL_STR(ip_set_get_extensions) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x5bd6c1ee, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xd5dac574, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xef13ebbe, __VMLINUX_SYMBOL_STR(ip_set_extensions) },
	{ 0xbb4e7e15, __VMLINUX_SYMBOL_STR(ip_set_put_byindex) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x1a123ca5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x8457adf8, __VMLINUX_SYMBOL_STR(ip_set_name_byindex) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xa8f676e8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x78ac1ba3, __VMLINUX_SYMBOL_STR(ip_set_del) },
	{ 0x534da2af, __VMLINUX_SYMBOL_STR(ip_set_add) },
	{ 0xf81fc78a, __VMLINUX_SYMBOL_STR(ip_set_test) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_set";


MODULE_INFO(srcversion, "16B302B6AC0B911C7CC1999");

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
	{ 0x779b594b, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0xaf251786, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0xf9a67454, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x42fd6b21, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0x146587fe, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xc28ffb0e, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x39d05e2b, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x624f6561, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2d7a495f, __VMLINUX_SYMBOL_STR(pskb_put) },
	{ 0xa78059b, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbf359ae9, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xa20ce1b8, __VMLINUX_SYMBOL_STR(net_msg_warn) },
	{ 0xe122af95, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd3d55c00, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x43b7c7de, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x394b1555, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x42fc8349, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x70f4ec3b, __VMLINUX_SYMBOL_STR(km_new_mapping) },
	{ 0x1724b91b, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xa408058b, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6893a348, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x1e8423f3, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xb9fc8a0f, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xc9ef4e0c, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "597BA4D71289E436A7BDEAC");

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
	{ 0xa43e976, __VMLINUX_SYMBOL_STR(ata_dummy_port_ops) },
	{ 0x725ee0e3, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf8f3a0fb, __VMLINUX_SYMBOL_STR(ata_ratelimit) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd3afbc1b, __VMLINUX_SYMBOL_STR(dev_attr_sw_activity) },
	{ 0x7cb9579b, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0x8fc06a7d, __VMLINUX_SYMBOL_STR(sata_pmp_error_handler) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x673e3b88, __VMLINUX_SYMBOL_STR(sata_link_scr_lpm) },
	{ 0x7cfd6459, __VMLINUX_SYMBOL_STR(sata_pmp_qc_defer_cmd_switch) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x85f9984a, __VMLINUX_SYMBOL_STR(dev_attr_em_message) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4fdc945d, __VMLINUX_SYMBOL_STR(sata_deb_timing_normal) },
	{ 0xc1e9faea, __VMLINUX_SYMBOL_STR(sata_pmp_port_ops) },
	{ 0xefc52507, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb8fba627, __VMLINUX_SYMBOL_STR(ata_dev_set_feature) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x9d2948f, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0x238a7a05, __VMLINUX_SYMBOL_STR(ata_wait_register) },
	{ 0x5a16a9cf, __VMLINUX_SYMBOL_STR(ata_std_qc_defer) },
	{ 0xe7238441, __VMLINUX_SYMBOL_STR(ata_link_abort) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7ab2223d, __VMLINUX_SYMBOL_STR(dev_attr_unload_heads) },
	{ 0x62020492, __VMLINUX_SYMBOL_STR(ata_msleep) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xcccfb2fa, __VMLINUX_SYMBOL_STR(sata_deb_timing_hotplug) },
	{ 0x5280ef17, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0xf311e908, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0xf1d8c890, __VMLINUX_SYMBOL_STR(sata_link_hardreset) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x73c832f2, __VMLINUX_SYMBOL_STR(ata_dev_classify) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x6cd21997, __VMLINUX_SYMBOL_STR(ata_tf_to_fis) },
	{ 0xc7709b98, __VMLINUX_SYMBOL_STR(dev_attr_em_message_type) },
	{ 0x2fea3440, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3afa4910, __VMLINUX_SYMBOL_STR(ata_link_printk) },
	{ 0x8769d09, __VMLINUX_SYMBOL_STR(ata_wait_after_reset) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x3fb3579c, __VMLINUX_SYMBOL_STR(ata_qc_complete_multiple) },
	{ 0xd51a46b1, __VMLINUX_SYMBOL_STR(ata_link_next) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9304b6, __VMLINUX_SYMBOL_STR(ata_tf_from_fis) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xce7b09d, __VMLINUX_SYMBOL_STR(ata_std_postreset) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd6e56ada, __VMLINUX_SYMBOL_STR(dev_attr_link_power_management_policy) },
	{ 0x7e21b6f8, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0x25ca2fcf, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1194a4ab, __VMLINUX_SYMBOL_STR(sata_async_notification) },
	{ 0x8b736bab, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "20290A18A30FE4B6C165BD0");

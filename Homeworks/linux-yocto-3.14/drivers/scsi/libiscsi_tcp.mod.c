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
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xc6958b91, __VMLINUX_SYMBOL_STR(skb_seq_read) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x97868aef, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0x28c17900, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xddc3d2da, __VMLINUX_SYMBOL_STR(iscsi_requeue_task) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x3bef2f73, __VMLINUX_SYMBOL_STR(iscsi_pool_init) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2a000efd, __VMLINUX_SYMBOL_STR(iscsi_itt_to_ctask) },
	{ 0x15a6228, __VMLINUX_SYMBOL_STR(skb_abort_seq_read) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xc90ac09d, __VMLINUX_SYMBOL_STR(skb_prepare_seq_read) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4cd05c58, __VMLINUX_SYMBOL_STR(iscsi_conn_teardown) },
	{ 0xfb1de6ea, __VMLINUX_SYMBOL_STR(iscsi_put_task) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xedde67e0, __VMLINUX_SYMBOL_STR(iscsi_prep_data_out_pdu) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa3342dfc, __VMLINUX_SYMBOL_STR(iscsi_complete_pdu) },
	{ 0x5d39d171, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xea417be, __VMLINUX_SYMBOL_STR(__iscsi_complete_pdu) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x8d303b1b, __VMLINUX_SYMBOL_STR(iscsi_pool_free) },
	{ 0x25c1bb1e, __VMLINUX_SYMBOL_STR(iscsi_verify_itt) },
	{ 0x29ab137, __VMLINUX_SYMBOL_STR(iscsi_conn_setup) },
	{ 0x8f89c7a5, __VMLINUX_SYMBOL_STR(iscsi_update_cmdsn) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi";


MODULE_INFO(srcversion, "661149D90EC56BCE885DABC");

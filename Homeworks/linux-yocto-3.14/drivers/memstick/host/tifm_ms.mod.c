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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xbf48f690, __VMLINUX_SYMBOL_STR(tifm_unregister_driver) },
	{ 0x847b84c7, __VMLINUX_SYMBOL_STR(tifm_register_driver) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xedee657b, __VMLINUX_SYMBOL_STR(memstick_add_host) },
	{ 0xc73d72a3, __VMLINUX_SYMBOL_STR(tifm_has_ms_pif) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xf2aa8127, __VMLINUX_SYMBOL_STR(memstick_alloc_host) },
	{ 0x562f02dd, __VMLINUX_SYMBOL_STR(tifm_eject) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x525f594, __VMLINUX_SYMBOL_STR(tifm_map_sg) },
	{ 0x7e10c68c, __VMLINUX_SYMBOL_STR(tifm_unmap_sg) },
	{ 0x9071507e, __VMLINUX_SYMBOL_STR(memstick_free_host) },
	{ 0x5b4e99d2, __VMLINUX_SYMBOL_STR(memstick_remove_host) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x38975b70, __VMLINUX_SYMBOL_STR(memstick_next_req) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x9bcf63c3, __VMLINUX_SYMBOL_STR(memstick_suspend_host) },
	{ 0x10030269, __VMLINUX_SYMBOL_STR(memstick_resume_host) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tifm_core,memstick";


MODULE_INFO(srcversion, "2B40EF0C2910F199F335A85");

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
	{ 0xff3eea31, __VMLINUX_SYMBOL_STR(usb_serial_generic_get_icount) },
	{ 0x828a399c, __VMLINUX_SYMBOL_STR(usb_serial_generic_tiocmiwait) },
	{ 0x8554eddb, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0xa1d1c8eb, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xca9831d6, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xe9ecb8e6, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x6e860b79, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xfed40a7c, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x11e519bc, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x1343983f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x40c85be6, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xca7e39a0, __VMLINUX_SYMBOL_STR(tty_port_tty_wakeup) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xd139f368, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v9710p7840d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7820d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7810d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pBC00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC24d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pBC01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC42d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pBC02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC44d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pBC03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC24d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p7820d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8A8223BD474CFD967EAE786");

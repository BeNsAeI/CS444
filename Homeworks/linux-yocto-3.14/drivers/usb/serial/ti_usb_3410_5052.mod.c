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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x8554eddb, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0xa1d1c8eb, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0xca7e39a0, __VMLINUX_SYMBOL_STR(tty_port_tty_wakeup) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x2daabe6c, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xf82fecbd, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xb907d1c8, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3e017515, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xfb84beb4, __VMLINUX_SYMBOL_STR(usb_driver_set_configuration) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x40c85be6, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x8d5b6832, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xe9ecb8e6, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0xca9831d6, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfa2aa703, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x6e860b79, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd139f368, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfb19f6ad, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f1b93e, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x767fef8c, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x11e519bc, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v0451p3410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451pF430d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF115d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0p0319d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p5052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p5152d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p505Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p505Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B3p4543d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B3p454Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B3p454Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A61p3410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A61p3420d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p5053d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "86F5FE841FD3C698594553A");

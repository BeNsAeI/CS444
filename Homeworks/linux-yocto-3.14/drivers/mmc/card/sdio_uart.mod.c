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
	{ 0xcde7219f, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xa2bd908f, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7a7c30df, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xad625eaf, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xcd5767, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0xd2b5aec6, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x237e1d00, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x55b43a3a, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0xb3f5df8, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xf5bf2d58, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x28b5fb0, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xaa281bb0, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xfb19f6ad, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0xca9831d6, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x813ba4b4, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0xb3f1b93e, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x767fef8c, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5aee4c3f, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0x97868aef, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xaca0a548, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3428c1c3, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf56181aa, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xe96618d5, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x603f9494, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0x490ce334, __VMLINUX_SYMBOL_STR(tty_standard_install) },
	{ 0xaa29d95e, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0x402ac23e, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0x4b282430, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xff784133, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xa05f372e, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x78f3d2df, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xe769e743, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x44cdc7aa, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xe8107a51, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0x94d5e5bf, __VMLINUX_SYMBOL_STR(tty_port_put) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x46958bfb, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core";

MODULE_ALIAS("sdio:c01v*d*");
MODULE_ALIAS("sdio:c04v*d*");

MODULE_INFO(srcversion, "52D8AA62A01A8297AFE7835");

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
	{ 0xfd6293c2, __VMLINUX_SYMBOL_STR(boot_tvec_bases) },
	{ 0xcde7219f, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xa2bd908f, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7a7c30df, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xcd5767, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0xd2b5aec6, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x55b43a3a, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0xb3f5df8, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xf5bf2d58, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x468f5608, __VMLINUX_SYMBOL_STR(do_SAK) },
	{ 0xfde29999, __VMLINUX_SYMBOL_STR(tty_hangup) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x603f9494, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0x9ad6a7d3, __VMLINUX_SYMBOL_STR(tty_buffer_request_room) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x54c2ce7c, __VMLINUX_SYMBOL_STR(tty_schedule_flip) },
	{ 0x813ba4b4, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0x15ddbdc, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xb8e7ce2c, __VMLINUX_SYMBOL_STR(__put_user_8) },
	{ 0x4b282430, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0xfb19f6ad, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0x402ac23e, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x5aee4c3f, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xaca0a548, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf82fecbd, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x3e017515, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2e69f650, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x5c0726bf, __VMLINUX_SYMBOL_STR(tty_port_tty_set) },
	{ 0xfcab0ac3, __VMLINUX_SYMBOL_STR(tty_port_block_til_ready) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x452aef3e, __VMLINUX_SYMBOL_STR(tty_lock) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x44692940, __VMLINUX_SYMBOL_STR(tty_unlock) },
	{ 0x6adc962c, __VMLINUX_SYMBOL_STR(tty_hung_up_p) },
	{ 0xb6fd3226, __VMLINUX_SYMBOL_STR(tty_port_raise_dtr_rts) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xa67f004b, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xe83133c, __VMLINUX_SYMBOL_STR(tty_port_lower_dtr_rts) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xa05f372e, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xb3f1b93e, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0xd7053e04, __VMLINUX_SYMBOL_STR(tty_ldisc_deref) },
	{ 0x79b9cdab, __VMLINUX_SYMBOL_STR(tty_ldisc_ref) },
	{ 0x767fef8c, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0xc35a6a00, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x78f3d2df, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2758671e, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0x3428c1c3, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0x70c53eca, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000120Ed00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000105sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000201sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C5A8C5BF446E30793D521FD");

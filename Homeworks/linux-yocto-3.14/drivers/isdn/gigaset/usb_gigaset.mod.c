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
	{ 0xda04080b, __VMLINUX_SYMBOL_STR(gigaset_m10x_input) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xb715198e, __VMLINUX_SYMBOL_STR(gigaset_shutdown) },
	{ 0x6e860b79, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xeb2609f, __VMLINUX_SYMBOL_STR(gigaset_stop) },
	{ 0x1423d569, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xefd67578, __VMLINUX_SYMBOL_STR(gigaset_freedriver) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc7b36047, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x75fd16a2, __VMLINUX_SYMBOL_STR(gigaset_initdriver) },
	{ 0xd139f368, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xe2d0cf17, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x8e1d0b39, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xc2440d2c, __VMLINUX_SYMBOL_STR(gigaset_blockdriver) },
	{ 0x626f810b, __VMLINUX_SYMBOL_STR(gigaset_initcs) },
	{ 0xe86cca58, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x11e519bc, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x202bedc6, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xd93b0c11, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x729d4198, __VMLINUX_SYMBOL_STR(gigaset_skb_sent) },
	{ 0xf3635943, __VMLINUX_SYMBOL_STR(gigaset_freecs) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4a8e4aa6, __VMLINUX_SYMBOL_STR(gigaset_add_event) },
	{ 0x2dc84eb5, __VMLINUX_SYMBOL_STR(gigaset_fill_inbuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x457c7335, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x7bcaa12b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xa3151853, __VMLINUX_SYMBOL_STR(gigaset_dbg_buffer) },
	{ 0xccaf848b, __VMLINUX_SYMBOL_STR(gigaset_start) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xfed40a7c, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x707d2828, __VMLINUX_SYMBOL_STR(gigaset_m10x_send_skb) },
	{ 0x1343983f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gigaset";

MODULE_ALIAS("usb:v0681p0009d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "90BD2CD371B3832BD2C39B6");

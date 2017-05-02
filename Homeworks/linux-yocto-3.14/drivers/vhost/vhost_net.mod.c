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
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x881001bd, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xdf0f75c6, __VMLINUX_SYMBOL_STR(eventfd_signal) },
	{ 0xedcd7ada, __VMLINUX_SYMBOL_STR(vhost_dev_check_owner) },
	{ 0x9e682d91, __VMLINUX_SYMBOL_STR(vhost_init_used) },
	{ 0xfd2f46df, __VMLINUX_SYMBOL_STR(vhost_poll_start) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe21e3b59, __VMLINUX_SYMBOL_STR(vhost_dev_cleanup) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x2023c5fa, __VMLINUX_SYMBOL_STR(vhost_log_access_ok) },
	{ 0x3846e8ee, __VMLINUX_SYMBOL_STR(vhost_enable_notify) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x5d30ed86, __VMLINUX_SYMBOL_STR(vhost_dev_has_owner) },
	{ 0x4480355b, __VMLINUX_SYMBOL_STR(vhost_poll_flush) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x36658fa4, __VMLINUX_SYMBOL_STR(vhost_disable_notify) },
	{ 0x827716a7, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfb397b0d, __VMLINUX_SYMBOL_STR(vhost_dev_ioctl) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xd36257ba, __VMLINUX_SYMBOL_STR(memcpy_toiovecend) },
	{ 0x2d4d766d, __VMLINUX_SYMBOL_STR(vhost_log_write) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3db3fa2d, __VMLINUX_SYMBOL_STR(vhost_get_vq_desc) },
	{ 0x79fb0082, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x3b762783, __VMLINUX_SYMBOL_STR(vhost_dev_set_owner) },
	{ 0xa9fb4687, __VMLINUX_SYMBOL_STR(vhost_add_used_and_signal_n) },
	{ 0x269f7a09, __VMLINUX_SYMBOL_STR(vhost_dev_reset_owner_prepare) },
	{ 0x9e44ca72, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xcfc68341, __VMLINUX_SYMBOL_STR(synchronize_rcu_bh) },
	{ 0x82bd6b4a, __VMLINUX_SYMBOL_STR(vhost_add_used_and_signal) },
	{ 0x3f27eddd, __VMLINUX_SYMBOL_STR(vhost_discard_vq_desc) },
	{ 0x1c737af3, __VMLINUX_SYMBOL_STR(tun_get_socket) },
	{ 0x9bc5bdc6, __VMLINUX_SYMBOL_STR(vhost_poll_queue) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x1e4dd889, __VMLINUX_SYMBOL_STR(vhost_poll_stop) },
	{ 0x1ff5bd4a, __VMLINUX_SYMBOL_STR(vhost_poll_init) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x251a92d6, __VMLINUX_SYMBOL_STR(vhost_dev_reset_owner) },
	{ 0xa8f9cea3, __VMLINUX_SYMBOL_STR(vhost_dev_init) },
	{ 0x7f4d8a42, __VMLINUX_SYMBOL_STR(fget) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x44dd0ca5, __VMLINUX_SYMBOL_STR(vhost_dev_stop) },
	{ 0xf7d1ea81, __VMLINUX_SYMBOL_STR(vhost_vq_access_ok) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x3ae89562, __VMLINUX_SYMBOL_STR(vhost_vring_ioctl) },
	{ 0x1c520f39, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x4bce1562, __VMLINUX_SYMBOL_STR(macvtap_get_socket) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vhost,tun,macvtap";


MODULE_INFO(srcversion, "05B74C285DF6D4250332FEC");

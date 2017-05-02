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
	{ 0x2606504f, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x793369, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x5bc3cb08, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x641370af, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xb495fd54, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0xf5b4a06, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x69ee7e59, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2bb672f0, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xa6f5f95e, __VMLINUX_SYMBOL_STR(hvc_instantiate) },
	{ 0x3d769dfc, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{        0, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x154c8b30, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x107d9062, __VMLINUX_SYMBOL_STR(pipe_unlock) },
	{ 0x2aeb8e3a, __VMLINUX_SYMBOL_STR(__splice_from_pipe) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xae32bd7, __VMLINUX_SYMBOL_STR(pipe_lock) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x2830542b, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x5a3e4e40, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xbcf9c9e1, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xab30892f, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xf5447b95, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x6dcbae38, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xc448ec4f, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x8b60ab57, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x7cda2a9f, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xfebe26c4, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x73eeeb5b, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x51b9a7be, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x2ee17618, __VMLINUX_SYMBOL_STR(hvc_remove) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x17f02011, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x9833bc0c, __VMLINUX_SYMBOL_STR(hvc_kick) },
	{ 0x46711418, __VMLINUX_SYMBOL_STR(hvc_poll) },
	{ 0xd672047e, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xa3f902f4, __VMLINUX_SYMBOL_STR(__hvc_resize) },
	{ 0x23153566, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xc35f03f9, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xeec87996, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x661289ef, __VMLINUX_SYMBOL_STR(hvc_alloc) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x69a159ca, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x507e2e5c, __VMLINUX_SYMBOL_STR(virtqueue_detach_unused_buf) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xf764ac1c, __VMLINUX_SYMBOL_STR(virtqueue_is_broken) },
	{ 0xbdddc659, __VMLINUX_SYMBOL_STR(virtqueue_add_outbuf) },
	{ 0x93b54a87, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x80db3c00, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0xc35f508f, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x6cd6cdaf, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x9af370d2, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x312ca88d, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000003v*");

MODULE_INFO(srcversion, "BD3E833C6CEB630F4505145");

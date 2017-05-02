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
	{ 0x6c60ed2a, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x71b8a19d, __VMLINUX_SYMBOL_STR(scsi_tgt_it_nexus_destroy) },
	{ 0x28c17900, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x994bed79, __VMLINUX_SYMBOL_STR(transport_destroy_device) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x3682791c, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x131db64a, __VMLINUX_SYMBOL_STR(system_long_wq) },
	{ 0x2b137529, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xfad5c7a1, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xfa2aa703, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x9a4494f2, __VMLINUX_SYMBOL_STR(transport_add_device) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x76dae6c7, __VMLINUX_SYMBOL_STR(transport_configure_device) },
	{ 0x858e0da1, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x95bb7165, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x70f87607, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0xc542c53, __VMLINUX_SYMBOL_STR(scsi_target_unblock) },
	{ 0x4aff7de5, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xa7b0cc16, __VMLINUX_SYMBOL_STR(scsi_tgt_it_nexus_create) },
	{ 0xf4d2f140, __VMLINUX_SYMBOL_STR(transport_setup_device) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4994dbfa, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xe1c498de, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0xf8a9d764, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xca4e992c, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x60cf25dd, __VMLINUX_SYMBOL_STR(transport_remove_device) },
	{ 0x2491934b, __VMLINUX_SYMBOL_STR(scsi_target_block) },
	{ 0xbaaea7eb, __VMLINUX_SYMBOL_STR(dev_set_name) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_tgt";


MODULE_INFO(srcversion, "B30BDD724078F673AF4F9F0");

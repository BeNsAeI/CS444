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
	{ 0x537143a2, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3525f08f, __VMLINUX_SYMBOL_STR(kobject_get) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0xe6fbe430, __VMLINUX_SYMBOL_STR(can_do_mlock) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xbcf9c9e1, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xbd7fdf7a, __VMLINUX_SYMBOL_STR(set_page_dirty_lock) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe53d32f8, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x51b9a7be, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xb550b14e, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x1a123ca5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xfad70f97, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x35225ea3, __VMLINUX_SYMBOL_STR(down_write_trylock) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x22ede969, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x5d9fa7a3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xbfb3f5f4, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xab30892f, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7ad5d5b5, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x7e785838, __VMLINUX_SYMBOL_STR(get_task_mm) },
	{ 0xcb21756c, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0xbaf43a7c, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x7adebab, __VMLINUX_SYMBOL_STR(netlink_rcv_skb) },
	{ 0xa8f676e8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x3b4ceb4a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x724f0b57, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xc34ba211, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0xe6e3b875, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0xed0d3520, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xdeadeb5c, __VMLINUX_SYMBOL_STR(_raw_read_lock_irqsave) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x49ace30, __VMLINUX_SYMBOL_STR(rdma_addr_find_smac_by_sgid) },
	{ 0xf756dc23, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x2f8a2bd4, __VMLINUX_SYMBOL_STR(_raw_read_unlock_irqrestore) },
	{ 0xa3a9637d, __VMLINUX_SYMBOL_STR(_raw_write_lock_irq) },
	{ 0x374e0d31, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x97443ab5, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x312ca88d, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xcdbd6a0f, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xbaaea7eb, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x446fd7c9, __VMLINUX_SYMBOL_STR(rdma_addr_find_dmac_by_grh) },
	{ 0x1fab9c06, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x55fe2430, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0xa7f92105, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_addr";


MODULE_INFO(srcversion, "A24F9943768C6CEBD5E7EEC");

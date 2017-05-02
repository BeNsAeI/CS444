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
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb5012304, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x2cfcbbdd, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x189f2756, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x56fef0ed, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xffd35bc1, __VMLINUX_SYMBOL_STR(scsi_bios_ptable) },
	{ 0x66a1f14c, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0xe652db81, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x1bdc26cf, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0x28c17900, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xb0a37bbe, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x25823753, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0x9f6b4c62, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x2830542b, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xd7edd9, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x79c59ec3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x353f77f2, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0xd5b2e96, __VMLINUX_SYMBOL_STR(scsi_adjust_queue_depth) },
	{ 0xb550b14e, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xcaa7eb52, __VMLINUX_SYMBOL_STR(copy_in_user) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x81a29b3b, __VMLINUX_SYMBOL_STR(dma_get_required_mask) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x4107044, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x31ee8a09, __VMLINUX_SYMBOL_STR(scsi_rescan_device) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x260617f2, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x940602e5, __VMLINUX_SYMBOL_STR(down_trylock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe15f42bb, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0xbfb3f5f4, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x1daba2a1, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x26880dcd, __VMLINUX_SYMBOL_STR(pci_set_dma_max_seg_size) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe1504556, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x79fb0082, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x6ee5b4df, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x52aacc0e, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x1fc1def6, __VMLINUX_SYMBOL_STR(pci_disable_link_state) },
	{ 0xeae077d1, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xc0ab8b01, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x52535c4, __VMLINUX_SYMBOL_STR(scsi_device_set_state) },
	{ 0x374e0d31, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe63b2e22, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xaece8867, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc683d84b, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x63988ee5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{        0, __VMLINUX_SYMBOL_STR(compat_alloc_user_space) },
	{ 0x71e3cecb, __VMLINUX_SYMBOL_STR(up) },
	{ 0xdcda1be7, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x5e7211dd, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xef724dd, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0xb20fe84c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xc2e587d1, __VMLINUX_SYMBOL_STR(reset_devices) },
	{ 0x7da99cdd, __VMLINUX_SYMBOL_STR(clear_user) },
	{ 0x74f94f95, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x871fab85, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001028d00000001sv00001028sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000002sv00001028sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000003sv00001028sd00000003bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000004sv00001028sd000000D0bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000002sv00001028sd000000D1bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000002sv00001028sd000000D9bc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Asv00001028sd00000106bc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Asv00001028sd0000011Bbc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Asv00001028sd00000121bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000283sv00009005sd00000283bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000284sv00009005sd00000284bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000286bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000285bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000287bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv000017AAsd00000286bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv000017AAsd00000287bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000288bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000289bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Bbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000028Cbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000028Dbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Bbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Cbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Dbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Ebc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Fbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A1bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A3bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd000002A4bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd000002A5bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A6bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000287sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000200sv00009005sd00000200bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Ebc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Fbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000290bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001028sd00000291bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000292bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000293bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000294bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv0000103Csd00003227bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000296bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000297bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001014sd000002F2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001014sd00000312bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00001014sd00009580bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00001014sd00009540bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000298bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000299bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000029Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001028sd00000287bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv00009005sd00000365bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv00009005sd00000364bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv00009005sd00001364bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv0000103Csd000010C2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001028sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv000017AAsd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000288sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AA0569A86FE08F668451422");

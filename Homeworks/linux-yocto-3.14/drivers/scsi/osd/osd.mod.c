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
	{ 0xe559317b, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0xfebe26c4, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf554888b, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x4b719758, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x1c6f0368, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xc17edb1, __VMLINUX_SYMBOL_STR(osd_sec_init_nosec_doall_caps) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7645384c, __VMLINUX_SYMBOL_STR(osd_dev_fini) },
	{ 0x22ede969, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7ad5d5b5, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0xd477d6e2, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x79fb0082, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xc34ba211, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x1969121b, __VMLINUX_SYMBOL_STR(osd_dev_init) },
	{ 0x9e44ca72, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x3320aa8a, __VMLINUX_SYMBOL_STR(osd_auto_detect_ver) },
	{ 0xc448ec4f, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x52aacc0e, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x4aff7de5, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xba0dccd0, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xf15b0d71, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x2629b7f6, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4994dbfa, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x248c273b, __VMLINUX_SYMBOL_STR(ida_remove) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5182420f, __VMLINUX_SYMBOL_STR(ida_pre_get) },
	{ 0xcdbd6a0f, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xbaaea7eb, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xa41e9598, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x3ea0773c, __VMLINUX_SYMBOL_STR(ida_get_new_above) },
	{ 0xc1138708, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xb28911a0, __VMLINUX_SYMBOL_STR(filp_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd";


MODULE_INFO(srcversion, "9EE9FD887C980D8633ADF86");

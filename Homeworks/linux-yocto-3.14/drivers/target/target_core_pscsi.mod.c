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
	{ 0xd9404347, __VMLINUX_SYMBOL_STR(transport_subsystem_release) },
	{ 0x314aeb44, __VMLINUX_SYMBOL_STR(transport_subsystem_register) },
	{ 0x7e14922d, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0x72ea7b2d, __VMLINUX_SYMBOL_STR(scsi_device_type) },
	{ 0xa41e9598, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x7dbada9d, __VMLINUX_SYMBOL_STR(transport_set_vpd_ident_type) },
	{ 0x85aa880c, __VMLINUX_SYMBOL_STR(transport_set_vpd_assoc) },
	{ 0xf01621c7, __VMLINUX_SYMBOL_STR(transport_set_vpd_proto_id) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x2de3b18, __VMLINUX_SYMBOL_STR(transport_set_vpd_ident) },
	{ 0x60c3277, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xba9a6798, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x3d9d9df7, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0xd2c4552e, __VMLINUX_SYMBOL_STR(blk_make_request) },
	{ 0x380fbaa1, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x4e779aad, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xc467f1de, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0x6fdf3844, __VMLINUX_SYMBOL_STR(scsi_host_lookup) },
	{ 0x52aacc0e, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x3d389f69, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x6ee5b4df, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfaccec41, __VMLINUX_SYMBOL_STR(transport_kunmap_data_sg) },
	{ 0x6efc971e, __VMLINUX_SYMBOL_STR(transport_kmap_data_sg) },
	{ 0x5f60907b, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3fc53e55, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0xc377b775, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x4a5c83f3, __VMLINUX_SYMBOL_STR(spc_emulate_report_luns) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";


MODULE_INFO(srcversion, "DD00520CC3873530D9F85AC");

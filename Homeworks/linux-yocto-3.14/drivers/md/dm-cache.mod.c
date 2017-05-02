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
	{ 0x827a42f4, __VMLINUX_SYMBOL_STR(dm_tm_open_with_sm) },
	{ 0xa82ded68, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xd041d62b, __VMLINUX_SYMBOL_STR(dm_array_get_value) },
	{ 0x44cedbf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7deff673, __VMLINUX_SYMBOL_STR(dm_consume_args) },
	{ 0xb7bad799, __VMLINUX_SYMBOL_STR(dm_bm_unlock) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xaef1442, __VMLINUX_SYMBOL_STR(dm_get_cell) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc16506fa, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xe44b4b9b, __VMLINUX_SYMBOL_STR(dm_bitset_set_bit) },
	{ 0x221e9a04, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0x688d422d, __VMLINUX_SYMBOL_STR(dm_bm_block_size) },
	{ 0x85871e6c, __VMLINUX_SYMBOL_STR(dm_bio_prison_free_cell) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x154c6338, __VMLINUX_SYMBOL_STR(dm_kcopyd_client_destroy) },
	{ 0xefba93e1, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x16acb3b5, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0x6b8e50a9, __VMLINUX_SYMBOL_STR(dm_kcopyd_copy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x59aafbcb, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0xd163cade, __VMLINUX_SYMBOL_STR(dm_tm_commit) },
	{ 0x6791a44e, __VMLINUX_SYMBOL_STR(dm_deferred_entry_dec) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf475af48, __VMLINUX_SYMBOL_STR(dm_bitset_flush) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb70b342a, __VMLINUX_SYMBOL_STR(dm_bio_prison_destroy) },
	{ 0x4894477, __VMLINUX_SYMBOL_STR(dm_cell_release) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0xe04f7caa, __VMLINUX_SYMBOL_STR(dm_read_arg_group) },
	{ 0xa0bbbb49, __VMLINUX_SYMBOL_STR(dm_bitset_resize) },
	{ 0x832bf228, __VMLINUX_SYMBOL_STR(dm_array_del) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xcb735e6f, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x17c36f29, __VMLINUX_SYMBOL_STR(dm_bm_checksum) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x62c1b9ee, __VMLINUX_SYMBOL_STR(dm_array_walk) },
	{ 0x72289260, __VMLINUX_SYMBOL_STR(dm_block_manager_destroy) },
	{ 0x38c75c44, __VMLINUX_SYMBOL_STR(dm_bitset_empty) },
	{ 0xb138d0bf, __VMLINUX_SYMBOL_STR(dm_ratelimit_state) },
	{ 0x11265579, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0xca2e3a88, __VMLINUX_SYMBOL_STR(dm_deferred_entry_inc) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x5eb24829, __VMLINUX_SYMBOL_STR(dm_shift_arg) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x32b5f546, __VMLINUX_SYMBOL_STR(dm_array_empty) },
	{ 0xf375d009, __VMLINUX_SYMBOL_STR(dm_bm_write_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x423820ae, __VMLINUX_SYMBOL_STR(dm_suspended) },
	{ 0x7cd23261, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0x3b4ceb4a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xe6e3b875, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x2f74609d, __VMLINUX_SYMBOL_STR(dm_bitset_test_bit) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x858c8d94, __VMLINUX_SYMBOL_STR(dm_array_set_value) },
	{ 0x458b200, __VMLINUX_SYMBOL_STR(dm_bio_prison_alloc_cell) },
	{ 0x4e779aad, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x7ade1071, __VMLINUX_SYMBOL_STR(dm_tm_destroy) },
	{ 0x68fae9d2, __VMLINUX_SYMBOL_STR(dm_disk_bitset_init) },
	{ 0x1cac81ac, __VMLINUX_SYMBOL_STR(dm_bitset_clear_bit) },
	{ 0xafeda29f, __VMLINUX_SYMBOL_STR(dm_bm_write_lock_zero) },
	{ 0x725c9955, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x38a3cbd0, __VMLINUX_SYMBOL_STR(dm_cell_release_no_holder) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xe9dff136, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x9c85c98f, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xa87c5b4d, __VMLINUX_SYMBOL_STR(dm_array_resize) },
	{ 0x55b4bd4d, __VMLINUX_SYMBOL_STR(dm_tm_create_with_sm) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xf5455120, __VMLINUX_SYMBOL_STR(dm_bm_read_lock) },
	{ 0x79a38e61, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xd688716b, __VMLINUX_SYMBOL_STR(dm_kcopyd_client_create) },
	{ 0x3f71faa1, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x2eb01e04, __VMLINUX_SYMBOL_STR(dm_deferred_set_destroy) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3ad0f55b, __VMLINUX_SYMBOL_STR(dm_bm_flush) },
	{ 0x3bfce3c9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4aad52d7, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x24fcb3b4, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x54f69d, __VMLINUX_SYMBOL_STR(dm_tm_pre_commit) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x2c112836, __VMLINUX_SYMBOL_STR(dm_block_location) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb6d5c65d, __VMLINUX_SYMBOL_STR(dm_deferred_set_add_work) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xebd06eaf, __VMLINUX_SYMBOL_STR(dm_bio_prison_create) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x97933d02, __VMLINUX_SYMBOL_STR(dm_block_manager_create) },
	{ 0x9e01ca2d, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x1e3f728d, __VMLINUX_SYMBOL_STR(dm_block_data) },
	{ 0x2025e954, __VMLINUX_SYMBOL_STR(dm_array_info_init) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x2a6e6109, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xbb47f84c, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x17dd39d6, __VMLINUX_SYMBOL_STR(dm_deferred_set_create) },
	{ 0x93595a33, __VMLINUX_SYMBOL_STR(dm_bio_detain) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-persistent-data,dm-mod,dm-bio-prison";


MODULE_INFO(srcversion, "B73C1EE3ED8650A784B1A98");

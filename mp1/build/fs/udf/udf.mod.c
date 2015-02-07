#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xfc4fa38d, "struct_module" },
	{ 0x4d28b566, "kmem_cache_destroy" },
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x125d4433, "sb_min_blocksize" },
	{ 0xa76016f4, "mark_buffer_dirty_inode" },
	{ 0xef815afa, "__bread" },
	{ 0x9ef68f3b, "unload_nls" },
	{ 0x1739c383, "make_bad_inode" },
	{ 0x338bbfc5, "__mark_inode_dirty" },
	{ 0xf6ba3642, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x74cc238d, "current_kernel_time" },
	{ 0x4f59ae1f, "is_bad_inode" },
	{ 0xd7af24d6, "generic_file_open" },
	{ 0xd448e655, "ll_rw_block" },
	{ 0xfe67e50a, "__lock_buffer" },
	{ 0xa099dd7a, "generic_file_aio_read" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x79aa05a8, "match_token" },
	{ 0x8677b0fa, "block_read_full_page" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xedefa2b2, "page_symlink_inode_operations" },
	{ 0xfadc1ec9, "generic_read_dir" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x75a92ab7, "unlock_buffer" },
	{ 0x42b5a3a7, "generic_file_aio_write" },
	{ 0xa47bae7c, "block_prepare_write" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x40d05b16, "__insert_inode_hash" },
	{ 0x7ec79e93, "inode_add_bytes" },
	{ 0x3edae153, "current_fs_time" },
	{ 0x2940bb15, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x5f6bee61, "d_rehash" },
	{ 0x6c60ade5, "write_inode_now" },
	{ 0xe7515c96, "find_or_create_page" },
	{ 0x4748da89, "d_alloc_root" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x2d35d359, "kmem_cache_free" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0x481d747c, "__wait_on_buffer" },
	{ 0x646581f9, "sync_dirty_buffer" },
	{ 0x4e3567f7, "match_int" },
	{ 0xcdcde79f, "unlock_page" },
	{ 0x1a5df119, "__brelse" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x721d3133, "inode_init_once" },
	{ 0x7dceceac, "capable" },
	{ 0x2b17107b, "file_permission" },
	{ 0x9079fc1f, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa3f9c129, "sync_mapping_buffers" },
	{ 0xce04dba7, "generic_file_mmap" },
	{ 0xe117e5a9, "generic_file_sendfile" },
	{ 0x42e46eee, "block_write_full_page" },
	{ 0xa9bf4406, "inode_sub_bytes" },
	{ 0xebd9de9, "load_nls" },
	{ 0xa501f6e4, "generic_commit_write" },
	{ 0x99e4a44a, "do_sync_read" },
	{ 0xe1273530, "unlock_new_inode" },
	{ 0xa317307d, "kill_block_super" },
	{ 0xceddb49e, "kmem_cache_create" },
	{ 0x29543150, "register_filesystem" },
	{ 0x6989a769, "vsnprintf" },
	{ 0xf65b8e44, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa828946, "do_sync_write" },
	{ 0x46c77cfc, "load_nls_default" },
	{ 0x813208bb, "get_sb_bdev" },
	{ 0x5641c0e8, "block_truncate_page" },
	{ 0x5e3b32a, "put_page" },
	{ 0x565043f2, "block_sync_page" },
	{ 0x410fdcb, "mark_buffer_dirty" },
	{ 0x76a45d7c, "ioctl_by_bdev" },
	{ 0xebd7ed4e, "unregister_filesystem" },
	{ 0x57eb664f, "init_special_inode" },
	{ 0xe88c3d68, "new_inode" },
	{ 0x8235805b, "memmove" },
	{ 0xba320a3c, "__getblk" },
	{ 0x260fb735, "clear_inode" },
	{ 0x18301a2a, "d_instantiate" },
	{ 0xb3af07c7, "generic_block_bmap" },
	{ 0x59df7421, "iget_locked" },
	{ 0xafce4357, "truncate_inode_pages" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FB5DE2A50CCE644654FB907");

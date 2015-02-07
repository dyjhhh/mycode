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
	{ 0x125d4433, "sb_min_blocksize" },
	{ 0xef815afa, "__bread" },
	{ 0x9ef68f3b, "unload_nls" },
	{ 0x1739c383, "make_bad_inode" },
	{ 0x70735fa2, "generic_file_llseek" },
	{ 0x338bbfc5, "__mark_inode_dirty" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x64999478, "congestion_wait" },
	{ 0x5eb621a6, "seq_puts" },
	{ 0x4f59ae1f, "is_bad_inode" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x3ae6caf7, "cont_prepare_write" },
	{ 0xd448e655, "ll_rw_block" },
	{ 0xa099dd7a, "generic_file_aio_read" },
	{ 0x49989c66, "seq_printf" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x79aa05a8, "match_token" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xfadc1ec9, "generic_read_dir" },
	{ 0x3b48f237, "igrab" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x42b5a3a7, "generic_file_aio_write" },
	{ 0x99b049f7, "inode_setattr" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x40d05b16, "__insert_inode_hash" },
	{ 0xb414d3fb, "mpage_readpages" },
	{ 0xb56717cf, "xtime" },
	{ 0xf61fef95, "mpage_readpage" },
	{ 0x8f5c7bf7, "file_fsync" },
	{ 0x5a81eb9b, "sync_inode" },
	{ 0x2940bb15, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x4748da89, "d_alloc_root" },
	{ 0x1f8aacde, "mpage_writepages" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xaec4759f, "vprintk" },
	{ 0x2d35d359, "kmem_cache_free" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0x481d747c, "__wait_on_buffer" },
	{ 0x646581f9, "sync_dirty_buffer" },
	{ 0x4e3567f7, "match_int" },
	{ 0x1a5df119, "__brelse" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x721d3133, "inode_init_once" },
	{ 0x7dceceac, "capable" },
	{ 0x9079fc1f, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xe117e5a9, "generic_file_sendfile" },
	{ 0xce04dba7, "generic_file_mmap" },
	{ 0x42e46eee, "block_write_full_page" },
	{ 0xc09e128a, "generic_cont_expand_simple" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0xebd9de9, "load_nls" },
	{ 0xa501f6e4, "generic_commit_write" },
	{ 0x1d127f49, "__breadahead" },
	{ 0x99e4a44a, "do_sync_read" },
	{ 0xe1273530, "unlock_new_inode" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe12cdd56, "inode_change_ok" },
	{ 0xceddb49e, "kmem_cache_create" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x7a38a846, "sync_page_range_nolock" },
	{ 0xf65b8e44, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x64ee20b8, "iunique" },
	{ 0xaa828946, "do_sync_write" },
	{ 0xd56afae9, "sb_set_blocksize" },
	{ 0x9d41bea9, "__bforget" },
	{ 0x32c0f8e7, "__blockdev_direct_IO" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x565043f2, "block_sync_page" },
	{ 0xb39c66a3, "inode_needs_sync" },
	{ 0x22080b73, "__find_get_block" },
	{ 0x410fdcb, "mark_buffer_dirty" },
	{ 0x863cb91a, "utf8_wcstombs" },
	{ 0xe88c3d68, "new_inode" },
	{ 0xba320a3c, "__getblk" },
	{ 0x719cfcaf, "d_alloc_anon" },
	{ 0xa7038a40, "notify_change" },
	{ 0x260fb735, "clear_inode" },
	{ 0xbb018a9c, "filemap_flush" },
	{ 0xb3af07c7, "generic_block_bmap" },
	{ 0x59df7421, "iget_locked" },
	{ 0x399242ec, "generic_fillattr" },
	{ 0xbf09f7d8, "filemap_fdatawrite" },
	{ 0xafce4357, "truncate_inode_pages" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D98BF3E959521B36F06D6BF");

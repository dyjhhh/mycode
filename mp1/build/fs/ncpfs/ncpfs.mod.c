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
	{ 0x72991449, "put_pid" },
	{ 0x9326b2e2, "get_sb_nodev" },
	{ 0x9ef68f3b, "unload_nls" },
	{ 0x5b19a0e3, "kernel_sendmsg" },
	{ 0x1739c383, "make_bad_inode" },
	{ 0xf6ba3642, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x75b38522, "del_timer" },
	{ 0xb6883ef5, "kill_anon_super" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x40098b3a, "send_sig" },
	{ 0x4f59ae1f, "is_bad_inode" },
	{ 0x4ddc4b9f, "utf8_mbtowc" },
	{ 0x47cbdd9e, "find_inode_number" },
	{ 0xf82f1109, "utf8_wctomb" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xfdc4cea6, "touch_atime" },
	{ 0xf32d2678, "schedule_work" },
	{ 0xaf579e54, "generic_delete_inode" },
	{ 0x5e6ad92f, "dput" },
	{ 0x77eea64b, "dget_locked" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xfadc1ec9, "generic_read_dir" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0x7d11c268, "jiffies" },
	{ 0x99b049f7, "inode_setattr" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x40d05b16, "__insert_inode_hash" },
	{ 0xb45ff141, "__alloc_pages" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x2940bb15, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x5f6bee61, "d_rehash" },
	{ 0x10feb1f8, "find_lock_page" },
	{ 0xe7515c96, "find_or_create_page" },
	{ 0x4748da89, "d_alloc_root" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x2d35d359, "kmem_cache_free" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0x7dbe34ee, "file_update_time" },
	{ 0x20187c7, "mod_timer" },
	{ 0x1765880a, "kill_pid" },
	{ 0xcdcde79f, "unlock_page" },
	{ 0x2e2b9551, "fput" },
	{ 0x80235cd9, "contig_page_data" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x721d3133, "inode_init_once" },
	{ 0x3ce8cc41, "d_validate" },
	{ 0x62aa5df7, "page_follow_link_light" },
	{ 0x7dceceac, "capable" },
	{ 0x2b17107b, "file_permission" },
	{ 0x9079fc1f, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xbbe98b02, "d_alloc" },
	{ 0xebd9de9, "load_nls" },
	{ 0x4292364c, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0xc5ef91b, "per_cpu__vm_event_states" },
	{ 0xe12cdd56, "inode_change_ok" },
	{ 0xceddb49e, "kmem_cache_create" },
	{ 0xe9a7007d, "kernel_recvmsg" },
	{ 0x29543150, "register_filesystem" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0xfde9fe64, "init_timer" },
	{ 0xc281c899, "__wake_up" },
	{ 0x3e64b039, "d_lookup" },
	{ 0xa945d988, "find_get_pid" },
	{ 0xf65b8e44, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x64ee20b8, "iunique" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x46c77cfc, "load_nls_default" },
	{ 0x7d1ed1f2, "prepare_to_wait" },
	{ 0x63eb40d8, "fget" },
	{ 0x8d928da5, "generic_readlink" },
	{ 0x5e3b32a, "put_page" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x2a7b11d4, "finish_wait" },
	{ 0x8b618d08, "overflowuid" },
	{ 0xebd7ed4e, "unregister_filesystem" },
	{ 0x57eb664f, "init_special_inode" },
	{ 0xe88c3d68, "new_inode" },
	{ 0xc02f679b, "remote_llseek" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x260fb735, "clear_inode" },
	{ 0x26f36f5, "page_put_link" },
	{ 0x18301a2a, "d_instantiate" },
	{ 0xafce4357, "truncate_inode_pages" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F88E744D164F88FDEB4AF98");

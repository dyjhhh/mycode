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
	{ 0x9326b2e2, "get_sb_nodev" },
	{ 0x70735fa2, "generic_file_llseek" },
	{ 0xf6ba3642, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe5fe5eb7, "register_sysctl_table" },
	{ 0x8f5cebc, "single_open" },
	{ 0x3ed9ba61, "iget5_locked" },
	{ 0xb6883ef5, "kill_anon_super" },
	{ 0x9c05e7c9, "class_device_destroy" },
	{ 0x4e848e9f, "single_release" },
	{ 0xc1a8abbe, "class_device_create" },
	{ 0x9ce3050c, "remove_wait_queue" },
	{ 0xbd26548a, "proc_dointvec" },
	{ 0x63813742, "remove_inode_hash" },
	{ 0x4f59ae1f, "is_bad_inode" },
	{ 0xb5584b10, "__user_walk_fd" },
	{ 0x47cbdd9e, "find_inode_number" },
	{ 0xfdc4cea6, "touch_atime" },
	{ 0x5e6ad92f, "dput" },
	{ 0x49989c66, "seq_printf" },
	{ 0x4d1372b5, "remove_proc_entry" },
	{ 0x1369964e, "d_find_alias" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0xfadc1ec9, "generic_read_dir" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x8cb9afbb, "seq_read" },
	{ 0x7d11c268, "jiffies" },
	{ 0xbcf9708a, "d_delete" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x40d05b16, "__insert_inode_hash" },
	{ 0x2642d10d, "kernel_read" },
	{ 0xb56717cf, "xtime" },
	{ 0x77152044, "proc_mkdir" },
	{ 0x1b7d4074, "printk" },
	{ 0x5f6bee61, "d_rehash" },
	{ 0x4748da89, "d_alloc_root" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x2d35d359, "kmem_cache_free" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0x5cd93347, "class_create" },
	{ 0xcdcde79f, "unlock_page" },
	{ 0xcfffeb32, "path_release" },
	{ 0xa6e195c0, "shrink_dcache_sb" },
	{ 0x2e2b9551, "fput" },
	{ 0x721d3133, "inode_init_once" },
	{ 0x62aa5df7, "page_follow_link_light" },
	{ 0x9079fc1f, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa1ec8b47, "unregister_sysctl_table" },
	{ 0x4292364c, "schedule" },
	{ 0xe1273530, "unlock_new_inode" },
	{ 0x2718497e, "register_chrdev" },
	{ 0x99341c56, "create_proc_entry" },
	{ 0xdadf52d3, "d_prune_aliases" },
	{ 0x852538f, "shrink_dcache_parent" },
	{ 0x2978066d, "proc_root_fs" },
	{ 0xceddb49e, "kmem_cache_create" },
	{ 0x29543150, "register_filesystem" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0xc281c899, "__wake_up" },
	{ 0xab8f2178, "add_wait_queue" },
	{ 0xd43c6276, "seq_lseek" },
	{ 0xf65b8e44, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x63eb40d8, "fget" },
	{ 0x8d928da5, "generic_readlink" },
	{ 0x76a276b5, "class_destroy" },
	{ 0xebd7ed4e, "unregister_filesystem" },
	{ 0x57eb664f, "init_special_inode" },
	{ 0xe88c3d68, "new_inode" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x26f36f5, "page_put_link" },
	{ 0x18301a2a, "d_instantiate" },
	{ 0x399242ec, "generic_fillattr" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1F109BD286260882DB782A0");

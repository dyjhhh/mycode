#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0xfc4fa38d, "struct_module" },
	{ 0xaee8ee2d, "proc_dointvec_minmax" },
	{ 0x601910b, "vfs_create" },
	{ 0x4d28b566, "kmem_cache_destroy" },
	{ 0x7008a9b7, "timespec_to_jiffies" },
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x936e1a0d, "security_ops" },
	{ 0x72991449, "put_pid" },
	{ 0x1739c383, "make_bad_inode" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe5fe5eb7, "register_sysctl_table" },
	{ 0xb8e064c3, "seq_open" },
	{ 0x6e628682, "seq_release_private" },
	{ 0x74cc238d, "current_kernel_time" },
	{ 0x5eb621a6, "seq_puts" },
	{ 0xbd26548a, "proc_dointvec" },
	{ 0x3622fe57, "simple_lookup" },
	{ 0xf32d2678, "schedule_work" },
	{ 0xaf579e54, "generic_delete_inode" },
	{ 0x5e6ad92f, "dput" },
	{ 0x49989c66, "seq_printf" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xb0bf95ca, "dentry_open" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x8706fba7, "call_rcu" },
	{ 0x8cb9afbb, "seq_read" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x7fae9b06, "get_sb_single" },
	{ 0xb56717cf, "xtime" },
	{ 0x565aed7e, "kill_litter_super" },
	{ 0x7c60d66e, "getname" },
	{ 0x99bfbe39, "get_unused_fd" },
	{ 0x2940bb15, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x4748da89, "d_alloc_root" },
	{ 0x3909eba9, "proc_doulongvec_minmax" },
	{ 0x2d35d359, "kmem_cache_free" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0x2cde2d59, "up_write" },
	{ 0x60610c03, "down_write" },
	{ 0x2e2b9551, "fput" },
	{ 0x118f01ea, "putname" },
	{ 0xef2ebcb1, "do_mmap_pgoff" },
	{ 0x721d3133, "inode_init_once" },
	{ 0x29386b4b, "kern_mount" },
	{ 0xf3e10498, "skb_over_panic" },
	{ 0x8b1e7123, "find_vma" },
	{ 0x7dceceac, "capable" },
	{ 0x7171121c, "overflowgid" },
	{ 0x9079fc1f, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xade379d, "__alloc_skb" },
	{ 0x6c79af4e, "simple_dir_operations" },
	{ 0x88d56da1, "mntput_no_expire" },
	{ 0xb287b923, "do_munmap" },
	{ 0xa1ec8b47, "unregister_sysctl_table" },
	{ 0x4292364c, "schedule" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xa369eedc, "kfree_skb" },
	{ 0xc3cf1128, "in_group_p" },
	{ 0x99341c56, "create_proc_entry" },
	{ 0xb51ecf9a, "wake_up_process" },
	{ 0x23eb25e, "put_unused_fd" },
	{ 0x4a31760e, "vfs_unlink" },
	{ 0xceddb49e, "kmem_cache_create" },
	{ 0x29543150, "register_filesystem" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0xc281c899, "__wake_up" },
	{ 0x7cd27dfe, "get_unmapped_area" },
	{ 0xd43c6276, "seq_lseek" },
	{ 0xf65b8e44, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x171f7da4, "permission" },
	{ 0xc8448f3e, "fd_install" },
	{ 0x63eb40d8, "fget" },
	{ 0xcaa413ee, "simple_statfs" },
	{ 0x8b618d08, "overflowuid" },
	{ 0xebd7ed4e, "unregister_filesystem" },
	{ 0xe88c3d68, "new_inode" },
	{ 0x19c13e56, "lookup_one_len" },
	{ 0xa393d444, "get_empty_filp" },
	{ 0x260fb735, "clear_inode" },
	{ 0x18301a2a, "d_instantiate" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=built-in,built-in,built-in,built-in,built-in,built-in";


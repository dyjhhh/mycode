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
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9326b2e2, "get_sb_nodev" },
	{ 0x77f36df8, "d_invalidate" },
	{ 0xc6bc7f76, "vfs_readdir" },
	{ 0xb6883ef5, "kill_anon_super" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x74cc238d, "current_kernel_time" },
	{ 0x5e6ad92f, "dput" },
	{ 0x49989c66, "seq_printf" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x79aa05a8, "match_token" },
	{ 0x4fd7c929, "filp_close" },
	{ 0xb0bf95ca, "dentry_open" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xfadc1ec9, "generic_read_dir" },
	{ 0xac471994, "may_umount" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x442199dd, "mutex_lock_interruptible" },
	{ 0x2940bb15, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x5f6bee61, "d_rehash" },
	{ 0x4748da89, "d_alloc_root" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0x4e3567f7, "match_int" },
	{ 0xcfffeb32, "path_release" },
	{ 0x2e2b9551, "fput" },
	{ 0x7dceceac, "capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x88d56da1, "mntput_no_expire" },
	{ 0x4292364c, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x8074902, "may_umount_tree" },
	{ 0x3bdfaf57, "simple_empty" },
	{ 0x1ef1b30c, "dcache_readdir" },
	{ 0x29543150, "register_filesystem" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0xc281c899, "__wake_up" },
	{ 0x3e64b039, "d_lookup" },
	{ 0xff3b03a3, "dcache_dir_open" },
	{ 0xc844115, "follow_down" },
	{ 0xf65b8e44, "iput" },
	{ 0xc902ba8e, "dcache_dir_close" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x7d1ed1f2, "prepare_to_wait" },
	{ 0x63eb40d8, "fget" },
	{ 0x8d928da5, "generic_readlink" },
	{ 0xcaa413ee, "simple_statfs" },
	{ 0x2a7b11d4, "finish_wait" },
	{ 0xebd7ed4e, "unregister_filesystem" },
	{ 0xe88c3d68, "new_inode" },
	{ 0x18301a2a, "d_instantiate" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "662E4F4AD3D0F2219B7D323");

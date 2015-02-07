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
	{ 0x4d3c153f, "sigprocmask" },
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9326b2e2, "get_sb_nodev" },
	{ 0x72991449, "put_pid" },
	{ 0xb6883ef5, "kill_anon_super" },
	{ 0x74cc238d, "current_kernel_time" },
	{ 0x4c38e7d8, "interruptible_sleep_on" },
	{ 0x5e6ad92f, "dput" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x79aa05a8, "match_token" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xfadc1ec9, "generic_read_dir" },
	{ 0xac471994, "may_umount" },
	{ 0x7d11c268, "jiffies" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xb56717cf, "xtime" },
	{ 0x1b7d4074, "printk" },
	{ 0x5f6bee61, "d_rehash" },
	{ 0x4748da89, "d_alloc_root" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0x4e3567f7, "match_int" },
	{ 0x2e2b9551, "fput" },
	{ 0x7dceceac, "capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6c79af4e, "simple_dir_operations" },
	{ 0x88d56da1, "mntput_no_expire" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0xe1273530, "unlock_new_inode" },
	{ 0x29543150, "register_filesystem" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0xc281c899, "__wake_up" },
	{ 0xa945d988, "find_get_pid" },
	{ 0xc844115, "follow_down" },
	{ 0xf65b8e44, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x63eb40d8, "fget" },
	{ 0x8d928da5, "generic_readlink" },
	{ 0xcaa413ee, "simple_statfs" },
	{ 0xebd7ed4e, "unregister_filesystem" },
	{ 0x8fe7d6d6, "simple_dir_inode_operations" },
	{ 0x18301a2a, "d_instantiate" },
	{ 0x59df7421, "iget_locked" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D4F5743D30ABACE3B400477");

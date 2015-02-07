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
	{ 0xe06b11d2, "set_anon_super" },
	{ 0x70735fa2, "generic_file_llseek" },
	{ 0xf6ba3642, "mem_map" },
	{ 0xb6883ef5, "kill_anon_super" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x74cc238d, "current_kernel_time" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x9ce3050c, "remove_wait_queue" },
	{ 0x5eb621a6, "seq_puts" },
	{ 0x6ffd9756, "sock_release" },
	{ 0x4693675b, "filemap_write_and_wait" },
	{ 0xa099dd7a, "generic_file_aio_read" },
	{ 0x49989c66, "seq_printf" },
	{ 0x79aa05a8, "match_token" },
	{ 0x40f5f7a1, "queue_work" },
	{ 0xb4d3d2d2, "invalidate_inode_pages2" },
	{ 0x66f36e3e, "names_cachep" },
	{ 0x934d9611, "sock_create_kern" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xfadc1ec9, "generic_read_dir" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x99b049f7, "inode_setattr" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x64910249, "__create_workqueue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x2642d10d, "kernel_read" },
	{ 0x1b7d4074, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0x4f3e492e, "kthread_stop" },
	{ 0x5f6bee61, "d_rehash" },
	{ 0x70b67362, "sget" },
	{ 0x4748da89, "d_alloc_root" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x2d35d359, "kmem_cache_free" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0xec40291c, "destroy_workqueue" },
	{ 0x625acc81, "__down_failed_interruptible" },
	{ 0x4e3567f7, "match_int" },
	{ 0xcdcde79f, "unlock_page" },
	{ 0x2cde2d59, "up_write" },
	{ 0x2e2b9551, "fput" },
	{ 0xcaa2eccf, "simple_set_mnt" },
	{ 0xe64517b0, "idr_remove" },
	{ 0xd4fe24f5, "idr_pre_get" },
	{ 0xe6497798, "lookup_instantiate_filp" },
	{ 0x9079fc1f, "kmem_cache_alloc" },
	{ 0xce04dba7, "generic_file_mmap" },
	{ 0x10f2bf08, "match_strcpy" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x4292364c, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x99e4a44a, "do_sync_read" },
	{ 0xb7ea58ba, "deactivate_super" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xb51ecf9a, "wake_up_process" },
	{ 0x29543150, "register_filesystem" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0xc281c899, "__wake_up" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0xab8f2178, "add_wait_queue" },
	{ 0xf65b8e44, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1b850a2, "kthread_create" },
	{ 0x7d1ed1f2, "prepare_to_wait" },
	{ 0x76094def, "invalidate_mapping_pages" },
	{ 0x63eb40d8, "fget" },
	{ 0x28f35813, "scnprintf" },
	{ 0xcaa413ee, "simple_statfs" },
	{ 0x2a7b11d4, "finish_wait" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0xebd7ed4e, "unregister_filesystem" },
	{ 0x57eb664f, "init_special_inode" },
	{ 0xe88c3d68, "new_inode" },
	{ 0x8235805b, "memmove" },
	{ 0xba95152a, "idr_init" },
	{ 0xf03b0e52, "idr_find" },
	{ 0xb6c4e1ad, "idr_get_new" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x18301a2a, "d_instantiate" },
	{ 0x7daeb512, "vfs_write" },
	{ 0x293a7ee3, "sock_map_fd" },
	{ 0x399242ec, "generic_fillattr" },
	{ 0xbf09f7d8, "filemap_fdatawrite" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "28CA76AC044BDA2DAAEBCC7");

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
	{ 0x4d28b566, "kmem_cache_destroy" },
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9afe9c91, "__mod_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1e796b5e, "kernel_subsys" },
	{ 0xd5b037e1, "kref_put" },
	{ 0x6ad778e5, "up_read" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x5b19a0e3, "kernel_sendmsg" },
	{ 0x8d69c729, "debugfs_create_dir" },
	{ 0xf6ba3642, "mem_map" },
	{ 0x75b38522, "del_timer" },
	{ 0x41e523fa, "kset_register" },
	{ 0xb8e064c3, "seq_open" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9ce3050c, "remove_wait_queue" },
	{ 0x6ffd9756, "sock_release" },
	{ 0x752607c5, "kobject_uevent" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x49989c66, "seq_printf" },
	{ 0x59249373, "kobject_set_name" },
	{ 0x40f5f7a1, "queue_work" },
	{ 0xd1898f68, "config_item_put" },
	{ 0x3019a954, "kobject_unregister" },
	{ 0x934d9611, "sock_create_kern" },
	{ 0x14970c4d, "config_item_init_type_name" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x7cffe65f, "debugfs_create_file" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x8cb9afbb, "seq_read" },
	{ 0x7d11c268, "jiffies" },
	{ 0xbce67cc4, "down_read" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x64910249, "__create_workqueue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xb45ff141, "__alloc_pages" },
	{ 0xe76ad313, "misc_register" },
	{ 0x233abdb8, "kernel_setsockopt" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2940bb15, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x4f3e492e, "kthread_stop" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x9e993e9f, "debugfs_remove" },
	{ 0x2d35d359, "kmem_cache_free" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0xec40291c, "destroy_workqueue" },
	{ 0x4d3be69c, "config_group_init_type_name" },
	{ 0x20187c7, "mod_timer" },
	{ 0x247964ef, "configfs_register_subsystem" },
	{ 0x2cde2d59, "up_write" },
	{ 0x60610c03, "down_write" },
	{ 0x2e2b9551, "fput" },
	{ 0x80235cd9, "contig_page_data" },
	{ 0xe64517b0, "idr_remove" },
	{ 0xb05fc310, "sysctl_rmem_max" },
	{ 0xd4fe24f5, "idr_pre_get" },
	{ 0xe1a30b34, "module_put" },
	{ 0x5cef332f, "kernel_getsockopt" },
	{ 0x7dceceac, "capable" },
	{ 0x512660f8, "config_group_find_obj" },
	{ 0x6696f5bc, "__free_pages" },
	{ 0x4292364c, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0xb51ecf9a, "wake_up_process" },
	{ 0x23eb25e, "put_unused_fd" },
	{ 0xdc7055f6, "configfs_unregister_subsystem" },
	{ 0x15042031, "down_read_trylock" },
	{ 0xceddb49e, "kmem_cache_create" },
	{ 0xe9a7007d, "kernel_recvmsg" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0xd09a6a3d, "idr_get_new_above" },
	{ 0xfde9fe64, "init_timer" },
	{ 0xc281c899, "__wake_up" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0xfd516eca, "kmem_cache_zalloc" },
	{ 0xab8f2178, "add_wait_queue" },
	{ 0xd43c6276, "seq_lseek" },
	{ 0x89ef0ec7, "kset_unregister" },
	{ 0x83800bfa, "kref_init" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1b850a2, "kthread_create" },
	{ 0x7d1ed1f2, "prepare_to_wait" },
	{ 0x9775cdc, "kref_get" },
	{ 0x1dbed7ae, "kernel_bind" },
	{ 0x63eb40d8, "fget" },
	{ 0x8b0b6840, "config_item_get" },
	{ 0x2a7b11d4, "finish_wait" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x25da070, "snprintf" },
	{ 0xee8ad456, "seq_release" },
	{ 0x96b27088, "__down_failed" },
	{ 0xba95152a, "idr_init" },
	{ 0xaac47dbf, "kobject_register" },
	{ 0xf03b0e52, "idr_find" },
	{ 0x5214abac, "config_group_init" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0xde4930f2, "misc_deregister" },
	{ 0x9dc75b15, "__init_rwsem" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=configfs";


MODULE_INFO(srcversion, "35F64EF87F4AD6B2BFC256A");

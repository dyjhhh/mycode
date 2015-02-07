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
	{ 0xe0383df9, "module_refcount" },
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0xb1121a56, "alloc_disk" },
	{ 0x33bb5e0f, "blk_cleanup_queue" },
	{ 0xf6ba3642, "mem_map" },
	{ 0x3b8995f5, "bio_alloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x3a9b6fb9, "blk_unregister_region" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xed49808, "invalidate_bdev" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x88ce4ace, "wait_for_completion" },
	{ 0xb45ff141, "__alloc_pages" },
	{ 0x91193555, "set_device_ro" },
	{ 0x2543204e, "blk_alloc_queue" },
	{ 0x2940bb15, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x4f3e492e, "kthread_stop" },
	{ 0xf1ac68e5, "del_gendisk" },
	{ 0xe7515c96, "find_or_create_page" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xe226672f, "blk_register_region" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xcdcde79f, "unlock_page" },
	{ 0x2e2b9551, "fput" },
	{ 0xc7994633, "get_disk" },
	{ 0x80235cd9, "contig_page_data" },
	{ 0x4e67590f, "bio_endio" },
	{ 0xf9df9612, "bio_put" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0xe1a30b34, "module_put" },
	{ 0x7dceceac, "capable" },
	{ 0x6696f5bc, "__free_pages" },
	{ 0x4e420e43, "bd_set_size" },
	{ 0xb1cae531, "blk_queue_make_request" },
	{ 0x4292364c, "schedule" },
	{ 0x42860fdd, "put_disk" },
	{ 0xb51ecf9a, "wake_up_process" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0xc281c899, "__wake_up" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1b850a2, "kthread_create" },
	{ 0x7d1ed1f2, "prepare_to_wait" },
	{ 0xa15530a9, "add_disk" },
	{ 0xf830e05f, "set_user_nice" },
	{ 0x63eb40d8, "fget" },
	{ 0x5e3b32a, "put_page" },
	{ 0x2a7b11d4, "finish_wait" },
	{ 0xa9392f2b, "complete" },
	{ 0xeaf8e35c, "set_blocksize" },
	{ 0x46504e5a, "vfs_getattr" },
	{ 0xd6c963c, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A4B4707D154BF77BD655184");

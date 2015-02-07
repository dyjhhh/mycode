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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x696e9216, "device_remove_file" },
	{ 0xf1ac68e5, "del_gendisk" },
	{ 0x852abecf, "__request_region" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x42860fdd, "put_disk" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0x33bb5e0f, "blk_cleanup_queue" },
	{ 0x3a9b6fb9, "blk_unregister_region" },
	{ 0x44861481, "platform_device_unregister" },
	{ 0xa15530a9, "add_disk" },
	{ 0xde350e88, "device_create_file" },
	{ 0x2f3bc10d, "platform_device_register" },
	{ 0xef79ac56, "__release_region" },
	{ 0xb407b205, "ioport_resource" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe226672f, "blk_register_region" },
	{ 0x584528ce, "blk_queue_max_sectors" },
	{ 0xb9c13023, "blk_init_queue" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xfde9fe64, "init_timer" },
	{ 0xb1121a56, "alloc_disk" },
	{ 0xc7994633, "get_disk" },
	{ 0x868acba5, "get_options" },
	{ 0x6696f5bc, "__free_pages" },
	{ 0x88ce4ace, "wait_for_completion" },
	{ 0x4e24c85c, "generic_unplug_device" },
	{ 0x4efe0de, "submit_bio" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0x33d7e902, "bio_init" },
	{ 0xb45ff141, "__alloc_pages" },
	{ 0x80235cd9, "contig_page_data" },
	{ 0xa9392f2b, "complete" },
	{ 0x2b17107b, "file_permission" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x9e64fbfe, "rtc_cmos_read" },
	{ 0x2e60bace, "memcpy" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x94047f2f, "__invalidate_device" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0x7dceceac, "capable" },
	{ 0xef4e4156, "check_disk_change" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ad0ce78, "elv_next_request" },
	{ 0xf6ba3642, "mem_map" },
	{ 0x4724bc3a, "end_that_request_last" },
	{ 0xb82f56ca, "elv_dequeue_request" },
	{ 0x306d696a, "add_disk_randomness" },
	{ 0x6c17b8f4, "end_that_request_first" },
	{ 0xc281c899, "__wake_up" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9c7077bd, "enable_hlt" },
	{ 0x794487ee, "disable_hlt" },
	{ 0xf32d2678, "schedule_work" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x9ce3050c, "remove_wait_queue" },
	{ 0x4292364c, "schedule" },
	{ 0xab8f2178, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0x9afe9c91, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x75b38522, "del_timer" },
	{ 0xbb2b8d77, "boot_tvec_bases" },
	{ 0x72b243d4, "free_dma" },
	{ 0x7054a3e4, "request_dma" },
	{ 0x1b7d4074, "printk" },
	{ 0x9941ccb8, "free_pages" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0x2cf190e3, "request_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D894A38EAE95136F3F5EC64");

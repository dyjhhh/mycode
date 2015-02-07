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
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0xf1ac68e5, "del_gendisk" },
	{ 0x33bb5e0f, "blk_cleanup_queue" },
	{ 0xa15530a9, "add_disk" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0x2940bb15, "__mutex_init" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x42860fdd, "put_disk" },
	{ 0xb9c13023, "blk_init_queue" },
	{ 0xb1121a56, "alloc_disk" },
	{ 0xeaf8e35c, "set_blocksize" },
	{ 0x63eb40d8, "fget" },
	{ 0x2e2b9551, "fput" },
	{ 0x7dceceac, "capable" },
	{ 0x1ad0ce78, "elv_next_request" },
	{ 0xc281c899, "__wake_up" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0xb82f56ca, "elv_dequeue_request" },
	{ 0xa99e97a2, "sysfs_remove_file" },
	{ 0xb080ca, "sysfs_create_file" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x2a7b11d4, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0x7d1ed1f2, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf6ba3642, "mem_map" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x188b9c12, "dequeue_signal" },
	{ 0xe9a7007d, "kernel_recvmsg" },
	{ 0x5b19a0e3, "kernel_sendmsg" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0x4724bc3a, "end_that_request_last" },
	{ 0x6c17b8f4, "end_that_request_first" },
	{ 0x1b7d4074, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0E5A4F94A16115CD559C33A");

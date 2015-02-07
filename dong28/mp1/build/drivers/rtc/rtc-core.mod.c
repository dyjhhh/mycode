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
	{ 0x696e9216, "device_remove_file" },
	{ 0xc7eda339, "cdev_del" },
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0x3c33595f, "cdev_init" },
	{ 0xabd0c91c, "rtc_time_to_tm" },
	{ 0x8f5cebc, "single_open" },
	{ 0x4e848e9f, "single_release" },
	{ 0x9ce3050c, "remove_wait_queue" },
	{ 0x2e1296b, "no_llseek" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x49989c66, "seq_printf" },
	{ 0x4d1372b5, "remove_proc_entry" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x8cb9afbb, "seq_read" },
	{ 0x96d02d04, "mutex_trylock" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xd6bf80bd, "device_register" },
	{ 0x442199dd, "mutex_lock_interruptible" },
	{ 0x2940bb15, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x498b77fb, "fasync_helper" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0x5cd93347, "class_create" },
	{ 0xe64517b0, "idr_remove" },
	{ 0xde350e88, "device_create_file" },
	{ 0x667fcbb5, "cdev_add" },
	{ 0xd4fe24f5, "idr_pre_get" },
	{ 0xe1a30b34, "module_put" },
	{ 0x7dceceac, "capable" },
	{ 0xb98a0185, "rtc_tm_to_time" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x563429d6, "put_device" },
	{ 0x4292364c, "schedule" },
	{ 0x99341c56, "create_proc_entry" },
	{ 0xd4f2cf2, "dev_driver_string" },
	{ 0xd98f6159, "get_device" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0xc281c899, "__wake_up" },
	{ 0xab8f2178, "add_wait_queue" },
	{ 0xd43c6276, "seq_lseek" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x37a0cba, "kfree" },
	{ 0x76a276b5, "class_destroy" },
	{ 0x39585220, "kill_fasync" },
	{ 0xdcc5ab2d, "device_unregister" },
	{ 0x60a4461c, "__up_wakeup" },
	{ 0x25da070, "snprintf" },
	{ 0x96b27088, "__down_failed" },
	{ 0xb6c4e1ad, "idr_get_new" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x29537c9e, "alloc_chrdev_region" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=rtc-lib";


MODULE_INFO(srcversion, "05938DBEA949470561FFDCD");

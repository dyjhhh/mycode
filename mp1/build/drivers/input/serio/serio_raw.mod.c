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
	{ 0x46c899a2, "serio_unregister_driver" },
	{ 0xb8b709e0, "__serio_register_driver" },
	{ 0x78eeb681, "serio_close" },
	{ 0xe76ad313, "misc_register" },
	{ 0x67f9d80a, "serio_open" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0x25da070, "snprintf" },
	{ 0x1b7d4074, "printk" },
	{ 0xc281c899, "__wake_up" },
	{ 0x39585220, "kill_fasync" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x2a7b11d4, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0x7d1ed1f2, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xde4930f2, "misc_deregister" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x442199dd, "mutex_lock_interruptible" },
	{ 0x498b77fb, "fasync_helper" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty01pr*id*ex*");

MODULE_INFO(srcversion, "392FCB3EBD4232967B9F2B2");

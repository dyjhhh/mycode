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
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0x6ad778e5, "up_read" },
	{ 0xf6ba3642, "mem_map" },
	{ 0xb8e064c3, "seq_open" },
	{ 0x49989c66, "seq_printf" },
	{ 0x4d1372b5, "remove_proc_entry" },
	{ 0x8b20cf14, "blocking_notifier_chain_unregister" },
	{ 0x8cb9afbb, "seq_read" },
	{ 0xbce67cc4, "down_read" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x1b7d4074, "printk" },
	{ 0xaf456ba1, "seq_putc" },
	{ 0x2cde2d59, "up_write" },
	{ 0x60610c03, "down_write" },
	{ 0xe1a30b34, "module_put" },
	{ 0x45eac503, "blocking_notifier_call_chain" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x6fc81017, "wait_for_completion_interruptible_timeout" },
	{ 0x99341c56, "create_proc_entry" },
	{ 0x7e7e188f, "__module_put_and_exit" },
	{ 0xb51ecf9a, "wake_up_process" },
	{ 0x9ea14fb5, "blocking_notifier_chain_register" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0xd43c6276, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1b850a2, "kthread_create" },
	{ 0x98adfde2, "request_module" },
	{ 0xa9392f2b, "complete" },
	{ 0xee8ad456, "seq_release" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=built-in,built-in,built-in,built-in";


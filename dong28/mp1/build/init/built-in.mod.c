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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x936e1a0d, "security_ops" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6b1b67d3, "__bdevname" },
	{ 0xba0d440b, "find_task_by_pid_type" },
	{ 0xc87c1f84, "ktime_get" },
	{ 0x66f36e3e, "names_cachep" },
	{ 0x5a4dac68, "cpu_present_map" },
	{ 0x7d11c268, "jiffies" },
	{ 0xdf60cc27, "__print_symbol" },
	{ 0x1b7d4074, "printk" },
	{ 0x1075bf0, "panic" },
	{ 0xd20ceab, "cad_pid" },
	{ 0x948cde9, "num_physpages" },
	{ 0x118f01ea, "putname" },
	{ 0x359f865, "sys_open" },
	{ 0x888596d, "cpu_possible_map" },
	{ 0xb306c8ad, "cpu_online_map" },
	{ 0x9079fc1f, "kmem_cache_alloc" },
	{ 0x4292364c, "schedule" },
	{ 0x37a0cba, "kfree" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x16bd3948, "sys_read" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0x760a0f4f, "yield" },
	{ 0x268cc6a2, "sys_close" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=built-in,built-in,built-in,built-in,built-in";


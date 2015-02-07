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
	{ 0xf7e17db7, "simple_pin_fs" },
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x1e796b5e, "kernel_subsys" },
	{ 0x6ad778e5, "up_read" },
	{ 0x8c97a7db, "__vm_enough_memory" },
	{ 0xabe77484, "securebits" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xb694c524, "suid_dumpable" },
	{ 0xb8e064c3, "seq_open" },
	{ 0xef0928e, "simple_release_fs" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x74cc238d, "current_kernel_time" },
	{ 0x9ce3050c, "remove_wait_queue" },
	{ 0x5eb621a6, "seq_puts" },
	{ 0xf32d2678, "schedule_work" },
	{ 0x5e6ad92f, "dput" },
	{ 0x49989c66, "seq_printf" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x8706fba7, "call_rcu" },
	{ 0x59ab4080, "cap_bset" },
	{ 0x8cb9afbb, "seq_read" },
	{ 0xbce67cc4, "down_read" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x8f1b8a8a, "__capable" },
	{ 0x7fae9b06, "get_sb_single" },
	{ 0x565aed7e, "kill_litter_super" },
	{ 0x1b7d4074, "printk" },
	{ 0x1075bf0, "panic" },
	{ 0xaf456ba1, "seq_putc" },
	{ 0x2d35d359, "kmem_cache_free" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2cde2d59, "up_write" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x60610c03, "down_write" },
	{ 0x7dceceac, "capable" },
	{ 0x9079fc1f, "kmem_cache_alloc" },
	{ 0x9efeae80, "simple_unlink" },
	{ 0x6c79af4e, "simple_dir_operations" },
	{ 0x4292364c, "schedule" },
	{ 0x93df6654, "call_usermodehelper_keys" },
	{ 0xc3cf1128, "in_group_p" },
	{ 0x99341c56, "create_proc_entry" },
	{ 0xceddb49e, "kmem_cache_create" },
	{ 0x29543150, "register_filesystem" },
	{ 0xc281c899, "__wake_up" },
	{ 0xab8f2178, "add_wait_queue" },
	{ 0xd43c6276, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x12048ab, "simple_fill_super" },
	{ 0xebd7ed4e, "unregister_filesystem" },
	{ 0x57eb664f, "init_special_inode" },
	{ 0xee8ad456, "seq_release" },
	{ 0xe88c3d68, "new_inode" },
	{ 0x19c13e56, "lookup_one_len" },
	{ 0x8fe7d6d6, "simple_dir_inode_operations" },
	{ 0x18301a2a, "d_instantiate" },
	{ 0x4ca31af7, "simple_rmdir" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=built-in,built-in,built-in,built-in,built-in";


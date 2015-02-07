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
	{ 0xaee8ee2d, "proc_dointvec_minmax" },
	{ 0xb8b656bb, "locks_copy_lock" },
	{ 0xe0383df9, "module_refcount" },
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd5b037e1, "kref_put" },
	{ 0xfa638821, "rpc_destroy_client" },
	{ 0x6ad778e5, "up_read" },
	{ 0xe5fe5eb7, "register_sysctl_table" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x5db1cfe, "rpc_call_async" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf6f16766, "svc_print_addr" },
	{ 0xbd26548a, "proc_dointvec" },
	{ 0xc3880471, "xdr_decode_netobj" },
	{ 0x5e807a9, "xdr_encode_string" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x3c9228fa, "rpc_restart_call" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x3a055ea9, "rpc_force_rebind" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xbabf0f35, "rpciod_down" },
	{ 0x7d11c268, "jiffies" },
	{ 0x375492a4, "rpciod_up" },
	{ 0xc8ffd72b, "svc_set_client" },
	{ 0xbce67cc4, "down_read" },
	{ 0x98fd5527, "flock_lock_file_wait" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xa4da2cb8, "_atomic_dec_and_lock" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0x7ad1aa7f, "svc_create_thread" },
	{ 0xeff86e38, "svc_makesock" },
	{ 0x98303b6a, "rpc_delay" },
	{ 0x88ce4ace, "wait_for_completion" },
	{ 0xe15665a, "vfs_lock_file" },
	{ 0xd2b54fa6, "rpc_call_sync" },
	{ 0xf77f5364, "svc_create" },
	{ 0x5125107e, "svc_destroy" },
	{ 0x1438de2c, "rpc_create" },
	{ 0x53445f68, "nlm_debug" },
	{ 0x2940bb15, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x3909eba9, "proc_doulongvec_minmax" },
	{ 0x94d159ee, "vfs_cancel_lock" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0xe7176f5f, "svc_process" },
	{ 0x2cde2d59, "up_write" },
	{ 0x60610c03, "down_write" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x44d42aac, "flush_signals" },
	{ 0xe1a30b34, "module_put" },
	{ 0x12c9a5a, "posix_lock_file_wait" },
	{ 0xa3e36782, "locks_init_lock" },
	{ 0xa1ec8b47, "unregister_sysctl_table" },
	{ 0x2eec63c9, "xdr_encode_netobj" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x7e7e188f, "__module_put_and_exit" },
	{ 0x7ded8240, "param_get_ulong" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0xc281c899, "__wake_up" },
	{ 0x3778728f, "posix_unblock_lock" },
	{ 0x13eb7449, "svc_exit_thread" },
	{ 0x83800bfa, "kref_init" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0xaa6dd542, "vfs_test_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x316dd771, "rpc_peeraddr" },
	{ 0x932da67e, "kill_proc" },
	{ 0x2e60bace, "memcpy" },
	{ 0x7d1ed1f2, "prepare_to_wait" },
	{ 0x5dee79a9, "interruptible_sleep_on_timeout" },
	{ 0x9775cdc, "kref_get" },
	{ 0x2a7b11d4, "finish_wait" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xa9392f2b, "complete" },
	{ 0x25da070, "snprintf" },
	{ 0x9bc67a30, "svc_recv" },
	{ 0x7561ce0d, "xdr_decode_string_inplace" },
	{ 0x9dc75b15, "__init_rwsem" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x43c19cd9, "svc_wake_up" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=sunrpc";


MODULE_INFO(srcversion, "C20D64F3FE43C95809AA7C3");

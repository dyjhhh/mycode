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
	{ 0xaa36a8b4, "xdr_shift_buf" },
	{ 0x4d28b566, "kmem_cache_destroy" },
	{ 0xe0383df9, "module_refcount" },
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x936e1a0d, "security_ops" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd5b037e1, "kref_put" },
	{ 0xe06b11d2, "set_anon_super" },
	{ 0x6ad778e5, "up_read" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0xc0573b72, "xdr_init_encode" },
	{ 0xe467bbf0, "rpcauth_create" },
	{ 0x338bbfc5, "__mark_inode_dirty" },
	{ 0xf6ba3642, "mem_map" },
	{ 0xd72f429f, "__set_page_dirty_nobuffers" },
	{ 0xe5fe5eb7, "register_sysctl_table" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x258a7677, "generic_write_checks" },
	{ 0x75b38522, "del_timer" },
	{ 0xd7e7ca24, "wake_up_bit" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0x94b79934, "filemap_fdatawait" },
	{ 0x5db1cfe, "rpc_call_async" },
	{ 0xa5693df7, "posix_acl_clone" },
	{ 0x3ed9ba61, "iget5_locked" },
	{ 0x93e947e, "posix_acl_create_masq" },
	{ 0xb6883ef5, "kill_anon_super" },
	{ 0xb8e064c3, "seq_open" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x2368be6d, "posix_acl_to_xattr" },
	{ 0xf6f16766, "svc_print_addr" },
	{ 0xf01fb863, "congestion_end" },
	{ 0xc468b940, "add_to_page_cache" },
	{ 0xa24721db, "seq_escape" },
	{ 0x74cc238d, "current_kernel_time" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x5eb621a6, "seq_puts" },
	{ 0x9ce3050c, "remove_wait_queue" },
	{ 0xbd26548a, "proc_dointvec" },
	{ 0x4f59ae1f, "is_bad_inode" },
	{ 0xa653de22, "rpc_unlink" },
	{ 0xb3949380, "test_set_page_writeback" },
	{ 0x1697c6fb, "vfs_kern_mount" },
	{ 0x4693675b, "filemap_write_and_wait" },
	{ 0x8550ee26, "put_rpccred" },
	{ 0xc5927a38, "rpc_init_wait_queue" },
	{ 0xa099dd7a, "generic_file_aio_read" },
	{ 0x5e6ad92f, "dput" },
	{ 0x49989c66, "seq_printf" },
	{ 0x4d1372b5, "remove_proc_entry" },
	{ 0x6df1d465, "rpc_call_setup" },
	{ 0xac54fc9f, "mempool_destroy" },
	{ 0xb5af679e, "xdr_inline_pages" },
	{ 0x994b4e2c, "d_materialise_unique" },
	{ 0xb4d3d2d2, "invalidate_inode_pages2" },
	{ 0x8a635203, "shrink_submounts" },
	{ 0x3c9228fa, "rpc_restart_call" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0xb0862392, "aio_complete" },
	{ 0xdb17e6f6, "have_submounts" },
	{ 0xfadc1ec9, "generic_read_dir" },
	{ 0x3b48f237, "igrab" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x42b5a3a7, "generic_file_aio_write" },
	{ 0x8cb9afbb, "seq_read" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xbabf0f35, "rpciod_down" },
	{ 0x8a4ac48c, "set_page_dirty" },
	{ 0x7d11c268, "jiffies" },
	{ 0x37088654, "rpcauth_lookupcred" },
	{ 0xc283cf9c, "rpc_clnt_sigunmask" },
	{ 0x44b911c3, "rb_replace_node" },
	{ 0x8f99ee56, "xdr_reserve_space" },
	{ 0x375492a4, "rpciod_up" },
	{ 0xbce67cc4, "down_read" },
	{ 0xe868af29, "out_of_line_wait_on_bit_lock" },
	{ 0x86abcb45, "end_page_writeback" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0x98fd5527, "flock_lock_file_wait" },
	{ 0xf385030d, "rpc_execute" },
	{ 0xbcf9708a, "d_delete" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xff17e15b, "complete_all" },
	{ 0x17a76e71, "rb_first" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0xa4da2cb8, "_atomic_dec_and_lock" },
	{ 0x7ad1aa7f, "svc_create_thread" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xeff86e38, "svc_makesock" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0x98303b6a, "rpc_delay" },
	{ 0x88ce4ace, "wait_for_completion" },
	{ 0xb45ff141, "__alloc_pages" },
	{ 0xe8d11cf8, "set_shrinker" },
	{ 0x2bc95bd4, "memset" },
	{ 0xe75b20ba, "rpc_queue_upcall" },
	{ 0x77152044, "proc_mkdir" },
	{ 0xd2b54fa6, "rpc_call_sync" },
	{ 0xf77f5364, "svc_create" },
	{ 0x5125107e, "svc_destroy" },
	{ 0x1438de2c, "rpc_create" },
	{ 0x2940bb15, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0x5f6bee61, "d_rehash" },
	{ 0xf62888db, "rpc_bind_new_program" },
	{ 0x6c60ade5, "write_inode_now" },
	{ 0xcec706e2, "generic_writepages" },
	{ 0x70b67362, "sget" },
	{ 0x4748da89, "d_alloc_root" },
	{ 0xe298bc73, "wait_for_completion_interruptible" },
	{ 0xacf9a818, "rpc_exit_task" },
	{ 0x64db9a5, "mark_mounts_for_expiry" },
	{ 0xc0580937, "rb_erase" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x5bd26000, "rpc_proc_unregister" },
	{ 0xab576049, "d_move" },
	{ 0x82d79b51, "sysctl_vfs_cache_pressure" },
	{ 0xf2e43f56, "rpc_max_payload" },
	{ 0x2d35d359, "kmem_cache_free" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0x8a7b2ee, "xdr_init_decode" },
	{ 0x4ba0b42b, "remove_shrinker" },
	{ 0xea858cb5, "radix_tree_gang_lookup_tag" },
	{ 0x25d81960, "posix_acl_equiv_mode" },
	{ 0x4f08f6a6, "sysctl_jiffies" },
	{ 0x37d4196b, "clear_bdi_congested" },
	{ 0xe7176f5f, "svc_process" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x8e27f72, "rpc_clone_client" },
	{ 0xcdcde79f, "unlock_page" },
	{ 0xcfffeb32, "path_release" },
	{ 0x2cde2d59, "up_write" },
	{ 0x60610c03, "down_write" },
	{ 0x80235cd9, "contig_page_data" },
	{ 0x4a971ec7, "radix_tree_delete" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0xe896facd, "nfsacl_encode" },
	{ 0xb85b2bac, "vm_stat" },
	{ 0xbb2b8d77, "boot_tvec_bases" },
	{ 0x44d42aac, "flush_signals" },
	{ 0x5c0ee4e9, "rpc_clnt_sigmask" },
	{ 0x721d3133, "inode_init_once" },
	{ 0xe6497798, "lookup_instantiate_filp" },
	{ 0x888596d, "cpu_possible_map" },
	{ 0x26b0fbce, "rpc_setbufsize" },
	{ 0x95fe8dfb, "__rpc_wait_for_completion_task" },
	{ 0xe1a30b34, "module_put" },
	{ 0x12c9a5a, "posix_lock_file_wait" },
	{ 0x8063f83d, "radix_tree_gang_lookup" },
	{ 0xc3a3507d, "__pagevec_lru_add" },
	{ 0x9079fc1f, "kmem_cache_alloc" },
	{ 0x6696f5bc, "__free_pages" },
	{ 0xab53b0a8, "mempool_alloc" },
	{ 0x4379f49a, "xdr_encode_pages" },
	{ 0xdd6bfccd, "radix_tree_tag_set" },
	{ 0xe117e5a9, "generic_file_sendfile" },
	{ 0xce04dba7, "generic_file_mmap" },
	{ 0x88d56da1, "mntput_no_expire" },
	{ 0xbbe98b02, "d_alloc" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0xa1ec8b47, "unregister_sysctl_table" },
	{ 0x69a72cc4, "xdr_enter_page" },
	{ 0x3a9b4f3f, "get_user_pages" },
	{ 0xa596d99e, "schedule_delayed_work" },
	{ 0x4292364c, "schedule" },
	{ 0x2f78ea49, "rpc_print_iostats" },
	{ 0x7b69467e, "posix_acl_from_xattr" },
	{ 0x1f7cc628, "mempool_create" },
	{ 0x99e4a44a, "do_sync_read" },
	{ 0xe1273530, "unlock_new_inode" },
	{ 0xb7ea58ba, "deactivate_super" },
	{ 0xe278e336, "rpc_init_task" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x99341c56, "create_proc_entry" },
	{ 0x7e7e188f, "__module_put_and_exit" },
	{ 0xb51ecf9a, "wake_up_process" },
	{ 0x852538f, "shrink_dcache_parent" },
	{ 0x2978066d, "proc_root_fs" },
	{ 0xe77a48a6, "clear_page_dirty_for_io" },
	{ 0x44602625, "do_add_mount" },
	{ 0x3edd1828, "rpc_run_task" },
	{ 0x42d5907d, "rpc_sleep_on" },
	{ 0x62aba95, "mempool_free" },
	{ 0xb429410a, "posix_acl_from_mode" },
	{ 0x43fa79ce, "nfsacl_decode" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0x778ca5c, "xdr_read_pages" },
	{ 0x62aad53b, "read_cache_pages" },
	{ 0xf7623914, "radix_tree_tag_clear" },
	{ 0xa6dcc773, "rb_insert_color" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0xceddb49e, "kmem_cache_create" },
	{ 0xc329096e, "call_rcu_bh" },
	{ 0x29543150, "register_filesystem" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0xfde9fe64, "init_timer" },
	{ 0x9941ccb8, "free_pages" },
	{ 0xc281c899, "__wake_up" },
	{ 0x3e64b039, "d_lookup" },
	{ 0x9aeaf8c, "out_of_line_wait_on_bit" },
	{ 0xc844115, "follow_down" },
	{ 0xab8f2178, "add_wait_queue" },
	{ 0xd43c6276, "seq_lseek" },
	{ 0xf65b8e44, "iput" },
	{ 0x13eb7449, "svc_exit_thread" },
	{ 0x83800bfa, "kref_init" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x4d2e5d85, "read_cache_page" },
	{ 0x3a8ee8c2, "invalidate_inode_pages2_range" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1b850a2, "kthread_create" },
	{ 0x409375c2, "d_instantiate_unique" },
	{ 0xc1769b4a, "generic_permission" },
	{ 0xaa828946, "do_sync_write" },
	{ 0xbc3c516a, "unmap_mapping_range" },
	{ 0x932da67e, "kill_proc" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x7d1ed1f2, "prepare_to_wait" },
	{ 0x9775cdc, "kref_get" },
	{ 0x6aab90da, "vmtruncate" },
	{ 0x8d928da5, "generic_readlink" },
	{ 0x976e539e, "lockd_up" },
	{ 0x5e3b32a, "put_page" },
	{ 0x28f35813, "scnprintf" },
	{ 0x9f15c6f1, "rpc_wake_up" },
	{ 0xa7b91a7b, "lockd_down" },
	{ 0x2a7b11d4, "finish_wait" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0x1813a42e, "rpc_mkpipe" },
	{ 0xebd7ed4e, "unregister_filesystem" },
	{ 0x57eb664f, "init_special_inode" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x7d3821b4, "xdr_inline_decode" },
	{ 0xa9392f2b, "complete" },
	{ 0x25da070, "snprintf" },
	{ 0xee8ad456, "seq_release" },
	{ 0x9bc67a30, "svc_recv" },
	{ 0x19c13e56, "lookup_one_len" },
	{ 0xfdd6359d, "rpc_shutdown_client" },
	{ 0xe20d389f, "xdr_write_pages" },
	{ 0x670df081, "rpc_wake_up_task" },
	{ 0xea8204d5, "rpc_proc_register" },
	{ 0xb8ca5855, "wait_for_completion_timeout" },
	{ 0xf108908c, "proc_dointvec_jiffies" },
	{ 0xd5688a7a, "radix_tree_insert" },
	{ 0xc02f679b, "remote_llseek" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x719cfcaf, "d_alloc_anon" },
	{ 0x26f36f5, "page_put_link" },
	{ 0x18301a2a, "d_instantiate" },
	{ 0x9dc75b15, "__init_rwsem" },
	{ 0x92c371a8, "rpc_new_task" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x760a0f4f, "yield" },
	{ 0x399242ec, "generic_fillattr" },
	{ 0x5a3ebd57, "nlmclnt_proc" },
	{ 0x4d03329, "set_bdi_congested" },
	{ 0xbf09f7d8, "filemap_fdatawrite" },
	{ 0xbe736f69, "posix_test_lock" },
	{ 0x6475f63c, "rpc_put_task" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=sunrpc,nfs_acl,lockd";


MODULE_INFO(srcversion, "07C150B47048F5ABE395E8C");
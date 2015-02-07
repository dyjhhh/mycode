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
	{ 0x9a74e373, "xfrm_register_km" },
	{ 0x99341c56, "create_proc_entry" },
	{ 0xd490a0dc, "sock_register" },
	{ 0x14598218, "proto_register" },
	{ 0x8d24308d, "proto_unregister" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x4d1372b5, "remove_proc_entry" },
	{ 0xbf147c7d, "xfrm_unregister_km" },
	{ 0xbb66d60a, "sock_i_uid" },
	{ 0x3831ec03, "sock_i_ino" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x3021eadd, "sock_no_sendpage" },
	{ 0x74580956, "sock_no_mmap" },
	{ 0xbba38eb8, "sock_no_getsockopt" },
	{ 0xba4846b6, "sock_no_setsockopt" },
	{ 0xc4f5bbbe, "sock_no_shutdown" },
	{ 0xb1c11990, "sock_no_listen" },
	{ 0x30bb532f, "sock_no_ioctl" },
	{ 0xd2f6453f, "datagram_poll" },
	{ 0x72c5a29c, "sock_no_getname" },
	{ 0x40afcf68, "sock_no_accept" },
	{ 0x7b2ea6a1, "sock_no_socketpair" },
	{ 0xafcb2ef5, "sock_no_connect" },
	{ 0x4e0f93db, "sock_no_bind" },
	{ 0xadc6e124, "skb_free_datagram" },
	{ 0x3f3c7ec7, "__sock_recv_timestamp" },
	{ 0xd2241754, "skb_copy_datagram_iovec" },
	{ 0xaecd3e50, "skb_recv_datagram" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0x42e7cfa4, "xfrm_cfg_mutex" },
	{ 0x9fb3dd30, "memcpy_fromiovec" },
	{ 0xf527143d, "xfrm_policy_flush" },
	{ 0x4a4b597e, "xfrm_policy_byid" },
	{ 0xa8ad40f8, "xfrm_policy_bysel_ctx" },
	{ 0x1ccbd182, "__xfrm_policy_destroy" },
	{ 0x7c89de2e, "km_policy_notify" },
	{ 0x85d68957, "xfrm_policy_insert" },
	{ 0x4c648ab3, "xfrm_policy_alloc" },
	{ 0x59394d, "xfrm_policy_walk" },
	{ 0x13dabbbe, "xfrm_state_walk" },
	{ 0x429f27c4, "xfrm_state_flush" },
	{ 0x28e23139, "xfrm_probe_algs" },
	{ 0xd8ecdd4, "xfrm_ealg_get_byidx" },
	{ 0x7c04d7fe, "xfrm_aalg_get_byidx" },
	{ 0x9cb8037b, "xfrm_count_enc_supported" },
	{ 0x686c703f, "xfrm_count_auth_supported" },
	{ 0x4393d414, "xfrm_state_delete" },
	{ 0x230aea54, "km_state_notify" },
	{ 0x2059fe32, "xfrm_audit_log" },
	{ 0xb9abeb2a, "audit_get_loginuid" },
	{ 0xcd07f616, "xfrm_state_update" },
	{ 0x2a40bf8b, "xfrm_state_add" },
	{ 0xef1a1668, "km_waitq" },
	{ 0x9531b10, "xfrm_alloc_spi" },
	{ 0x4f79e0a5, "xfrm_find_acq" },
	{ 0x87dbeda1, "xfrm_find_acq_byseq" },
	{ 0xa1c735b, "__xfrm_state_destroy" },
	{ 0x86a09ceb, "xfrm_init_state" },
	{ 0x6fef6afb, "xfrm_ealg_get_byid" },
	{ 0x1d1e307b, "xfrm_calg_get_byid" },
	{ 0x334ef9fb, "xfrm_aalg_get_byid" },
	{ 0x37a0cba, "kfree" },
	{ 0x936e1a0d, "security_ops" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x77fdecad, "xfrm_state_alloc" },
	{ 0x955de0cc, "xfrm_calg_get_byname" },
	{ 0x237282e6, "xfrm_ealg_get_byname" },
	{ 0xf8b8c12a, "xfrm_aalg_get_byname" },
	{ 0x65d72cbd, "xfrm_state_lookup" },
	{ 0xf3e10498, "skb_over_panic" },
	{ 0xade379d, "__alloc_skb" },
	{ 0xa369eedc, "kfree_skb" },
	{ 0x8af4b013, "skb_queue_tail" },
	{ 0x1cb1deb9, "sock_rfree" },
	{ 0x461add1c, "skb_clone" },
	{ 0x394b9d04, "sk_free" },
	{ 0xa483aee3, "sock_init_data" },
	{ 0x7db777a8, "sk_alloc" },
	{ 0x7dceceac, "capable" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xc281c899, "__wake_up" },
	{ 0x9ce3050c, "remove_wait_queue" },
	{ 0x4292364c, "schedule" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xa8c6b298, "add_wait_queue_exclusive" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x1b7d4074, "printk" },
	{ 0xcedefcc1, "skb_queue_purge" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0365E7CA6CA1431A1F38939");

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
	{ 0xde4930f2, "misc_deregister" },
	{ 0xe76ad313, "misc_register" },
	{ 0xaa828946, "do_sync_write" },
	{ 0x99e4a44a, "do_sync_read" },
	{ 0x2e1296b, "no_llseek" },
	{ 0x6d819be5, "unregister_netdevice" },
	{ 0xcedefcc1, "skb_queue_purge" },
	{ 0x1797f1df, "__f_setown" },
	{ 0x498b77fb, "fasync_helper" },
	{ 0x425d2596, "dev_set_mac_address" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0xa71fc843, "register_netdevice" },
	{ 0xd079e157, "dev_alloc_name" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9e13ae1e, "alloc_netdev" },
	{ 0x8d3d32a, "__dev_get_by_name" },
	{ 0x7dceceac, "capable" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1b7d4074, "printk" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x4cb0f3ca, "free_netdev" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0x9ce3050c, "remove_wait_queue" },
	{ 0xd2241754, "skb_copy_datagram_iovec" },
	{ 0x9ceb163c, "memcpy_toiovec" },
	{ 0x6e921dde, "__netif_schedule" },
	{ 0x4292364c, "schedule" },
	{ 0xcc28ea00, "skb_dequeue" },
	{ 0xab8f2178, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x8377b3ba, "per_cpu__current_task" },
	{ 0xa0397c88, "netif_rx_ni" },
	{ 0x130a566b, "eth_type_trans" },
	{ 0xf3e10498, "skb_over_panic" },
	{ 0xade379d, "__alloc_skb" },
	{ 0x9fb3dd30, "memcpy_fromiovec" },
	{ 0x47f05cf, "ether_setup" },
	{ 0xfaf98462, "bitrev32" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xa369eedc, "kfree_skb" },
	{ 0xc281c899, "__wake_up" },
	{ 0x39585220, "kill_fasync" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8af4b013, "skb_queue_tail" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C9EA666EF91C0A4A29A2B11");

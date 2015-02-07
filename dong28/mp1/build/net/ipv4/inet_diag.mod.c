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
	{ 0x6ffd9756, "sock_release" },
	{ 0x3831ec03, "sock_i_ino" },
	{ 0x7d11c268, "jiffies" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x21382e19, "netlink_kernel_create" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x1b7d4074, "printk" },
	{ 0x444779c4, "nla_find" },
	{ 0x2d35d359, "kmem_cache_free" },
	{ 0x394b9d04, "sk_free" },
	{ 0x5b704e7b, "netlink_unicast" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf3e10498, "skb_over_panic" },
	{ 0xe1a30b34, "module_put" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0xade379d, "__alloc_skb" },
	{ 0xa369eedc, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xc281c899, "__wake_up" },
	{ 0x8e6b762e, "netlink_dump_start" },
	{ 0x37a0cba, "kfree" },
	{ 0x51e02106, "__inet_lookup_listener" },
	{ 0xa2a5fd77, "inet_ehash_secret" },
	{ 0xbb66d60a, "sock_i_uid" },
	{ 0x9fd9e171, "netlink_run_queue" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4E85B0373AE6E613D40833D");

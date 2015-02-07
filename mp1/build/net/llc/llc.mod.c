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
	{ 0x461add1c, "skb_clone" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x581a0674, "__pskb_pull_tail" },
	{ 0x4b1b027, "dev_base_head" },
	{ 0x1b7d4074, "printk" },
	{ 0x7f82f13d, "dev_remove_pack" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0xa369eedc, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x174a08b6, "skb_under_panic" },
	{ 0x37a0cba, "kfree" },
	{ 0x8faa81da, "___pskb_trim" },
	{ 0xdeee1def, "dev_add_pack" },
	{ 0xf0a95146, "dev_queue_xmit" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8AF7812911C2F2689B76B5F");

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
	{ 0x37a0cba, "kfree" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x5b8f2927, "unregister_netdev" },
	{ 0x4cb0f3ca, "free_netdev" },
	{ 0xbb0a7a95, "register_netdev" },
	{ 0x9e13ae1e, "alloc_netdev" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xa369eedc, "kfree_skb" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x47f05cf, "ether_setup" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CDD194430BC7DEC14488837");

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
	{ 0x70f44cfa, "crypto_unregister_template" },
	{ 0xb3cd396d, "crypto_register_template" },
	{ 0x37a0cba, "kfree" },
	{ 0x89ab476b, "crypto_drop_spawn" },
	{ 0x4ee15b9e, "crypto_mod_put" },
	{ 0x4eb8234e, "crypto_blkcipher_type" },
	{ 0xc8e481d2, "crypto_alloc_instance" },
	{ 0xbb86714b, "crypto_get_attr_alg" },
	{ 0xd16712f3, "crypto_check_attr_type" },
	{ 0x115828de, "crypto_free_tfm" },
	{ 0x4180129d, "crypto_spawn_tfm" },
	{ 0x7c72078c, "blkcipher_walk_done" },
	{ 0xa73ad661, "blkcipher_walk_virt" },
	{ 0x38b9ff2a, "gf128mul_64k_bbe" },
	{ 0x1e108535, "gf128mul_init_64k_bbe" },
	{ 0x944c5915, "gf128mul_free_64k" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=blkcipher,gf128mul";


MODULE_INFO(srcversion, "34851A5A6808C80BA3ACBC9");

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
	{ 0xc6bc7f76, "vfs_readdir" },
	{ 0x4f59ae1f, "is_bad_inode" },
	{ 0x5e6ad92f, "dput" },
	{ 0x77eea64b, "dget_locked" },
	{ 0xb0bf95ca, "dentry_open" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x1b7d4074, "printk" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0x2e2b9551, "fput" },
	{ 0xe1273530, "unlock_new_inode" },
	{ 0xf65b8e44, "iput" },
	{ 0x19c13e56, "lookup_one_len" },
	{ 0x719cfcaf, "d_alloc_anon" },
	{ 0x59df7421, "iget_locked" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B8942EE4E14768DEE5ABE37");

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
	{ 0x6f197203, "xdr_decode_word" },
	{ 0x1a5f2983, "xdr_encode_array2" },
	{ 0xe193264d, "xdr_encode_word" },
	{ 0xa44072fc, "posix_acl_alloc" },
	{ 0x310917fe, "sort" },
	{ 0x37a0cba, "kfree" },
	{ 0x8235805b, "memmove" },
	{ 0xaa69a50c, "xdr_decode_array2" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=sunrpc";


MODULE_INFO(srcversion, "6531B13D063F05AE3A747F4");

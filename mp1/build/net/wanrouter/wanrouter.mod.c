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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x8f5cebc, "single_open" },
	{ 0xb8e064c3, "seq_open" },
	{ 0x4e848e9f, "single_release" },
	{ 0x5eb621a6, "seq_puts" },
	{ 0x49989c66, "seq_printf" },
	{ 0x4d1372b5, "remove_proc_entry" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x8cb9afbb, "seq_read" },
	{ 0x12f237eb, "__kzalloc" },
	{ 0x77152044, "proc_mkdir" },
	{ 0xb74101df, "proc_net" },
	{ 0x1b7d4074, "printk" },
	{ 0x4cb0f3ca, "free_netdev" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xbb0a7a95, "register_netdev" },
	{ 0x7dceceac, "capable" },
	{ 0x99341c56, "create_proc_entry" },
	{ 0xd43c6276, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x5b8f2927, "unregister_netdev" },
	{ 0xee8ad456, "seq_release" },
	{ 0xd6c963c, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "19BA3DFD285887F0A9DA1FB");

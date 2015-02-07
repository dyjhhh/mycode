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
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x76a276b5, "class_destroy" },
	{ 0x5cd93347, "class_create" },
	{ 0x1b7d4074, "printk" },
	{ 0x2718497e, "register_chrdev" },
	{ 0x82e3cc3c, "device_destroy" },
	{ 0xfbbe16a5, "device_create" },
	{ 0xd7aa4aa8, "boot_cpu_data" },
	{ 0x2f287f0d, "copy_to_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "72E9144A33052D50A2D5A57");

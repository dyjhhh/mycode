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
	{ 0x44861481, "platform_device_unregister" },
	{ 0xc6738904, "platform_driver_unregister" },
	{ 0x16a497cb, "platform_device_put" },
	{ 0x20e5be66, "platform_device_add" },
	{ 0x90fda9c4, "platform_device_alloc" },
	{ 0xe9a1ef42, "platform_driver_register" },
	{ 0xf0f38495, "unregister_framebuffer" },
	{ 0xde7b9759, "framebuffer_release" },
	{ 0xedc03953, "iounmap" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x104105e, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x2e60bace, "memcpy" },
	{ 0xe7bf7d05, "screen_info" },
	{ 0x2940bb15, "__mutex_init" },
	{ 0x27aff036, "framebuffer_alloc" },
	{ 0x1b7d4074, "printk" },
	{ 0xa3a5985b, "cfb_imageblit" },
	{ 0x995169f6, "cfb_copyarea" },
	{ 0x504e94c4, "cfb_fillrect" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x686de290, "restore_vga" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0xe7a2620e, "save_vga" },
	{ 0x78d0ffc4, "mutex_lock" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=vgastate";


MODULE_INFO(srcversion, "8776FC561437B275B0E5DBC");

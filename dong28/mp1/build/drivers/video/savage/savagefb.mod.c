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
	{ 0xde7b9759, "framebuffer_release" },
	{ 0x487f831, "fb_find_best_display" },
	{ 0xf6dab3ab, "pci_disable_device" },
	{ 0x56179c5f, "mtrr_add" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x517377d, "pci_release_regions" },
	{ 0x6ce66043, "mutex_unlock" },
	{ 0x5d7d087f, "fb_firmware_edid" },
	{ 0xce98135d, "fb_set_suspend" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x64ec17c1, "pci_set_master" },
	{ 0x772715d0, "pci_restore_state" },
	{ 0xa3a5985b, "cfb_imageblit" },
	{ 0xcb7131fb, "fb_get_options" },
	{ 0x2940bb15, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x104105e, "register_framebuffer" },
	{ 0x78d0ffc4, "mutex_lock" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x686de290, "restore_vga" },
	{ 0x6a00ff06, "i2c_del_adapter" },
	{ 0x719a5a4, "fb_find_mode" },
	{ 0xe7a2620e, "save_vga" },
	{ 0xfcfa03ff, "fb_videomode_to_modelist" },
	{ 0xb7df23dd, "fb_get_mode" },
	{ 0x434fa55c, "release_console_sem" },
	{ 0xf174ed48, "acquire_console_sem" },
	{ 0xff9ca065, "fb_edid_to_monspecs" },
	{ 0xd4f2cf2, "dev_driver_string" },
	{ 0x1dc36131, "fb_destroy_modedb" },
	{ 0xcccf24ad, "pci_unregister_driver" },
	{ 0x258355b4, "fb_find_best_mode" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0xd3725f43, "pci_set_power_state" },
	{ 0x27aff036, "framebuffer_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x5f32678c, "pci_request_regions" },
	{ 0x94446de9, "fb_set_cmap" },
	{ 0xedc03953, "iounmap" },
	{ 0x272d394e, "mtrr_del" },
	{ 0xf664cb5c, "__pci_register_driver" },
	{ 0xbf2a07cb, "i2c_bit_add_bus" },
	{ 0x25da070, "snprintf" },
	{ 0xc7e06bd1, "pci_choose_state" },
	{ 0x85450ed, "pci_enable_device" },
	{ 0x6702755f, "fb_ddc_read" },
	{ 0xc7d8b742, "fb_validate_mode" },
	{ 0xf473e440, "pci_save_state" },
	{ 0xf0f38495, "unregister_framebuffer" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=vgastate,i2c-core,i2c-algo-bit,fb_ddc";

MODULE_ALIAS("pci:v00005333d00008C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00009102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C13sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D02sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D04sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "673D629E754B77020644F2F");

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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xcccf24ad, "pci_unregister_driver" },
	{ 0xf664cb5c, "__pci_register_driver" },
	{ 0x7538b132, "agp_off" },
	{ 0x28cbcd68, "agp_put_bridge" },
	{ 0xaa124a81, "agp_remove_bridge" },
	{ 0x675247cc, "agp_add_bridge" },
	{ 0x116732, "get_agp_version" },
	{ 0x6830fac2, "agp_alloc_bridge" },
	{ 0x6d084cae, "agp3_generic_tlbflush" },
	{ 0xc2424641, "agp3_generic_cleanup" },
	{ 0xde9b17ed, "agp3_generic_fetch_size" },
	{ 0x4b085dbf, "agp3_generic_configure" },
	{ 0xc65abeb7, "agp3_generic_sizes" },
	{ 0x7246e83b, "agp_generic_type_to_mask_type" },
	{ 0xbba27749, "agp_generic_destroy_page" },
	{ 0xa2aa8c32, "agp_generic_alloc_page" },
	{ 0x8468b3bd, "agp_generic_free_by_type" },
	{ 0xc096d211, "agp_generic_alloc_by_type" },
	{ 0xd959dc97, "agp_generic_remove_memory" },
	{ 0x62b24e89, "agp_generic_insert_memory" },
	{ 0xe331b6ee, "agp_generic_free_gatt_table" },
	{ 0x546c5b9d, "agp_generic_create_gatt_table" },
	{ 0xa4d4f0e6, "global_cache_flush" },
	{ 0x14b6d4a7, "agp_generic_mask_memory" },
	{ 0x54722a21, "agp_generic_enable" },
	{ 0x8f380eed, "pci_get_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x68637ff6, "pci_find_capability" },
	{ 0x51366d08, "agp_collect_device_status" },
	{ 0x1b7d4074, "printk" },
	{ 0xf3ac069b, "pci_bus_write_config_dword" },
	{ 0x2041dec5, "pci_bus_read_config_dword" },
	{ 0xee39479e, "pci_bus_write_config_byte" },
	{ 0x79277ccf, "pci_bus_read_config_byte" },
	{ 0x2be3610d, "agp_bridge" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001039d00000001sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000530sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000540sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000550sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000620sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000630sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000635sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000645sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000646sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000648sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000650sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000651sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000655sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000661sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000730sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000735sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000740sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000741sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000745sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000746sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000760sv*sd*bc06sc00i00*");

MODULE_INFO(srcversion, "03FFAA661D2BA9F967696C7");

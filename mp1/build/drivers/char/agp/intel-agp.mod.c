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
	{ 0xcccf24ad, "pci_unregister_driver" },
	{ 0xf664cb5c, "__pci_register_driver" },
	{ 0x7538b132, "agp_off" },
	{ 0x78a0c76f, "pci_dev_put" },
	{ 0xaa124a81, "agp_remove_bridge" },
	{ 0x675247cc, "agp_add_bridge" },
	{ 0x85450ed, "pci_enable_device" },
	{ 0x720c31e0, "pci_assign_resource" },
	{ 0x28cbcd68, "agp_put_bridge" },
	{ 0x6830fac2, "agp_alloc_bridge" },
	{ 0x68637ff6, "pci_find_capability" },
	{ 0x8f380eed, "pci_get_device" },
	{ 0x7246e83b, "agp_generic_type_to_mask_type" },
	{ 0xbba27749, "agp_generic_destroy_page" },
	{ 0xa2aa8c32, "agp_generic_alloc_page" },
	{ 0x8468b3bd, "agp_generic_free_by_type" },
	{ 0xc096d211, "agp_generic_alloc_by_type" },
	{ 0xd959dc97, "agp_generic_remove_memory" },
	{ 0x62b24e89, "agp_generic_insert_memory" },
	{ 0xe331b6ee, "agp_generic_free_gatt_table" },
	{ 0x546c5b9d, "agp_generic_create_gatt_table" },
	{ 0x14b6d4a7, "agp_generic_mask_memory" },
	{ 0x54722a21, "agp_generic_enable" },
	{ 0xee39479e, "pci_bus_write_config_byte" },
	{ 0xf3ac069b, "pci_bus_write_config_dword" },
	{ 0x79277ccf, "pci_bus_read_config_byte" },
	{ 0x76541a6, "pci_bus_write_config_word" },
	{ 0x73d58acd, "pci_bus_read_config_word" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0fef3b2, "agp_free_key" },
	{ 0x156efb54, "agp_free_page_array" },
	{ 0xb2fd4af7, "agp_create_memory" },
	{ 0xcdcde79f, "unlock_page" },
	{ 0x5e3b32a, "put_page" },
	{ 0xf6ba3642, "mem_map" },
	{ 0x6696f5bc, "__free_pages" },
	{ 0x3167ea19, "global_flush_tlb" },
	{ 0x6c35b65c, "change_page_attr" },
	{ 0x95cc2139, "__PAGE_KERNEL" },
	{ 0xb45ff141, "__alloc_pages" },
	{ 0x80235cd9, "contig_page_data" },
	{ 0xedc03953, "iounmap" },
	{ 0xa4d4f0e6, "global_cache_flush" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x1b7d4074, "printk" },
	{ 0x2041dec5, "pci_bus_read_config_dword" },
	{ 0x2be3610d, "agp_bridge" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00007180sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00007190sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000071A0sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00007120sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00007122sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00007124sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00001130sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002500sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002501sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00003575sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00001A21sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00001A30sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002560sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002530sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00003340sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00003580sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002531sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002570sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002578sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002550sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d0000255Dsv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002580sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002590sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002770sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000027A0sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002970sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002980sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002990sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000029A0sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002A00sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000029C0sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000029B0sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000029D0sv*sd*bc06sc00i00*");

MODULE_INFO(srcversion, "836E06A89B1D7BFE8C509ED");

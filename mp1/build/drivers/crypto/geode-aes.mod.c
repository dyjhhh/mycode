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
	{ 0x1b7d4074, "printk" },
	{ 0x84bf6989, "crypto_register_alg" },
	{ 0x254839b2, "pci_iomap" },
	{ 0x5f32678c, "pci_request_regions" },
	{ 0x85450ed, "pci_enable_device" },
	{ 0xf6dab3ab, "pci_disable_device" },
	{ 0x517377d, "pci_release_regions" },
	{ 0xffddf211, "pci_iounmap" },
	{ 0xcafba141, "crypto_unregister_alg" },
	{ 0x4eb8234e, "crypto_blkcipher_type" },
	{ 0x7c72078c, "blkcipher_walk_done" },
	{ 0xa73ad661, "blkcipher_walk_virt" },
	{ 0x2241a928, "ioread32" },
	{ 0x908aa9b2, "iowrite32" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=blkcipher";

MODULE_ALIAS("pci:v00001022d00002082sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "74F52B57E78D5CC48D5C987");

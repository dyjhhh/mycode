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
	{ 0xf20dabd8, "free_irq" },
	{ 0x41a38a3d, "dma_async_device_unregister" },
	{ 0xf6dab3ab, "pci_disable_device" },
	{ 0x517377d, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xe198a3f3, "dma_pool_destroy" },
	{ 0xddf4ce7b, "dma_async_device_register" },
	{ 0x64ec17c1, "pci_set_master" },
	{ 0x2cf190e3, "request_irq" },
	{ 0x34c50f83, "dma_pool_create" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x5f32678c, "pci_request_regions" },
	{ 0xfcb79d86, "pci_set_dma_mask" },
	{ 0x85450ed, "pci_enable_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf6ba3642, "mem_map" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x37a0cba, "kfree" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x1b7d4074, "printk" },
	{ 0x901ac7a7, "dma_pool_free" },
	{ 0xb52694f, "dma_pool_alloc" },
	{ 0x12f237eb, "__kzalloc" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "236AAAAC1AE2AA77252BC1E");

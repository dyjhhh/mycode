cmd_arch/i386/kernel/vmlinux.lds := gcc -m32 -E -Wp,-MD,arch/i386/kernel/.vmlinux.lds.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.2/include -D__KERNEL__ -I/workdir/source/linux-2.6.22.5/include -Iinclude -I/workdir/source/linux-2.6.22.5/include2 -Iinclude2  -I/workdir/source/linux-2.6.22.5/include -include include/linux/autoconf.h -P -C -Ui386 -D__ASSEMBLY__ -o arch/i386/kernel/vmlinux.lds /workdir/source/linux-2.6.22.5/arch/i386/kernel/vmlinux.lds.S

deps_arch/i386/kernel/vmlinux.lds := \
  /workdir/source/linux-2.6.22.5/arch/i386/kernel/vmlinux.lds.S \
    $(wildcard include/config/blk/dev/initrd.h) \
  /workdir/source/linux-2.6.22.5/include/asm-generic/vmlinux.lds.h \
  include2/asm/thread_info.h \
    $(wildcard include/config/4kstacks.h) \
    $(wildcard include/config/debug/stack/usage.h) \
  /workdir/source/linux-2.6.22.5/include/linux/compiler.h \
    $(wildcard include/config/enable/must/check.h) \
  include2/asm/page.h \
    $(wildcard include/config/x86/use/3dnow.h) \
    $(wildcard include/config/x86/pae.h) \
    $(wildcard include/config/paravirt.h) \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/highmem4g.h) \
    $(wildcard include/config/highmem64g.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/flatmem.h) \
  /workdir/source/linux-2.6.22.5/include/asm-generic/memory_model.h \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem.h) \
    $(wildcard include/config/out/of/line/pfn/to/page.h) \
  /workdir/source/linux-2.6.22.5/include/asm-generic/page.h \
  include/asm/asm-offsets.h \
  include2/asm/cache.h \
    $(wildcard include/config/x86/l1/cache/shift.h) \
  include2/asm/boot.h \
    $(wildcard include/config/physical/start.h) \
    $(wildcard include/config/physical/align.h) \

arch/i386/kernel/vmlinux.lds: $(deps_arch/i386/kernel/vmlinux.lds)

$(deps_arch/i386/kernel/vmlinux.lds):

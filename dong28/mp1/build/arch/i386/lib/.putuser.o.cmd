cmd_arch/i386/lib/putuser.o := gcc -m32 -Wp,-MD,arch/i386/lib/.putuser.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.2/include -D__KERNEL__ -Iinclude -Iinclude2 -I/workdir/source/linux-2.6.22.5/include -include include/linux/autoconf.h -D__ASSEMBLY__ -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -I/workdir/source/linux-2.6.22.5/include/asm-i386/mach-default -Iinclude/asm-i386/mach-default  -c -o arch/i386/lib/putuser.o /workdir/source/linux-2.6.22.5/arch/i386/lib/putuser.S

deps_arch/i386/lib/putuser.o := \
  /workdir/source/linux-2.6.22.5/arch/i386/lib/putuser.S \
  /workdir/source/linux-2.6.22.5/include/linux/linkage.h \
  include2/asm/linkage.h \
    $(wildcard include/config/x86/alignment/16.h) \
  include2/asm/dwarf2.h \
    $(wildcard include/config/unwind/info.h) \
    $(wildcard include/config/as/cfi/signal/frame.h) \
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

arch/i386/lib/putuser.o: $(deps_arch/i386/lib/putuser.o)

$(deps_arch/i386/lib/putuser.o):

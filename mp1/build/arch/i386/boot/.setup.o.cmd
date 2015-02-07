cmd_arch/i386/boot/setup.o := gcc -m32 -Wp,-MD,arch/i386/boot/.setup.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.2/include -D__KERNEL__ -Iinclude -Iinclude2 -I/workdir/source/linux-2.6.22.5/include -include include/linux/autoconf.h -D__ASSEMBLY__ -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -I/workdir/source/linux-2.6.22.5/include/asm-i386/mach-default -Iinclude/asm-i386/mach-default -DSVGA_MODE=NORMAL_VGA -D__BIG_KERNEL__  -c -o arch/i386/boot/setup.o /workdir/source/linux-2.6.22.5/arch/i386/boot/setup.S

deps_arch/i386/boot/setup.o := \
  /workdir/source/linux-2.6.22.5/arch/i386/boot/setup.S \
    $(wildcard include/config/physical/align.h) \
    $(wildcard include/config/relocatable.h) \
    $(wildcard include/config/x86/voyager.h) \
    $(wildcard include/config/x86/speedstep/smi.h) \
    $(wildcard include/config/apm.h) \
    $(wildcard include/config/x86/elan.h) \
  include2/asm/segment.h \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/paravirt.h) \
  include/linux/utsrelease.h \
  include/linux/compile.h \
  include2/asm/boot.h \
    $(wildcard include/config/physical/start.h) \
  include2/asm/e820.h \
  include2/asm/page.h \
    $(wildcard include/config/x86/use/3dnow.h) \
    $(wildcard include/config/x86/pae.h) \
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
  include2/asm/setup.h \
  /workdir/source/linux-2.6.22.5/include/linux/pfn.h \
  /workdir/source/linux-2.6.22.5/arch/i386/boot/../kernel/verify_cpu.S \
    $(wildcard include/config/x86/minimum/cpu/model.h) \
  include2/asm/cpufeature.h \
  include2/asm/required-features.h \
    $(wildcard include/config/x86/minimum/cpu.h) \
    $(wildcard include/config/x86/cmov.h) \
    $(wildcard include/config/x86/cmpxchg64.h) \
  include2/asm/msr.h \
  include2/asm/msr-index.h \
  /workdir/source/linux-2.6.22.5/arch/i386/boot/edd.S \
    $(wildcard include/config/edd.h) \
  /workdir/source/linux-2.6.22.5/include/linux/edd.h \
  /workdir/source/linux-2.6.22.5/arch/i386/boot/video.S \
    $(wildcard include/config/video/svga.h) \
    $(wildcard include/config/video/vesa.h) \
    $(wildcard include/config/video/compact.h) \
    $(wildcard include/config/video/retain.h) \
    $(wildcard include/config/video/local.h) \
    $(wildcard include/config/video/400/hack.h) \
    $(wildcard include/config/video/gfx/hack.h) \
    $(wildcard include/config/video/select.h) \
    $(wildcard include/config/firmware/edid.h) \

arch/i386/boot/setup.o: $(deps_arch/i386/boot/setup.o)

$(deps_arch/i386/boot/setup.o):

cmd_arch/i386/lib/semaphore.o := gcc -m32 -Wp,-MD,arch/i386/lib/.semaphore.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.2/include -D__KERNEL__ -Iinclude -Iinclude2 -I/workdir/source/linux-2.6.22.5/include -include include/linux/autoconf.h -D__ASSEMBLY__ -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -I/workdir/source/linux-2.6.22.5/include/asm-i386/mach-default -Iinclude/asm-i386/mach-default  -c -o arch/i386/lib/semaphore.o /workdir/source/linux-2.6.22.5/arch/i386/lib/semaphore.S

deps_arch/i386/lib/semaphore.o := \
  /workdir/source/linux-2.6.22.5/arch/i386/lib/semaphore.S \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/rwsem/xchgadd/algorithm.h) \
  /workdir/source/linux-2.6.22.5/include/linux/linkage.h \
  include2/asm/linkage.h \
    $(wildcard include/config/x86/alignment/16.h) \
  include2/asm/rwlock.h \
  include2/asm/alternative-asm.i \
  include2/asm/frame.i \
    $(wildcard include/config/frame/pointer.h) \
  include2/asm/dwarf2.h \
    $(wildcard include/config/unwind/info.h) \
    $(wildcard include/config/as/cfi/signal/frame.h) \

arch/i386/lib/semaphore.o: $(deps_arch/i386/lib/semaphore.o)

$(deps_arch/i386/lib/semaphore.o):

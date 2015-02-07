cmd_arch/i386/lib/checksum.o := gcc -m32 -Wp,-MD,arch/i386/lib/.checksum.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.2/include -D__KERNEL__ -Iinclude -Iinclude2 -I/workdir/source/linux-2.6.22.5/include -include include/linux/autoconf.h -D__ASSEMBLY__ -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -I/workdir/source/linux-2.6.22.5/include/asm-i386/mach-default -Iinclude/asm-i386/mach-default  -c -o arch/i386/lib/checksum.o /workdir/source/linux-2.6.22.5/arch/i386/lib/checksum.S

deps_arch/i386/lib/checksum.o := \
  /workdir/source/linux-2.6.22.5/arch/i386/lib/checksum.S \
    $(wildcard include/config/x86/use/ppro/checksum.h) \
  /workdir/source/linux-2.6.22.5/include/linux/linkage.h \
  include2/asm/linkage.h \
    $(wildcard include/config/x86/alignment/16.h) \
  include2/asm/dwarf2.h \
    $(wildcard include/config/unwind/info.h) \
    $(wildcard include/config/as/cfi/signal/frame.h) \
  include2/asm/errno.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/errno.h \
  /workdir/source/linux-2.6.22.5/include/asm-generic/errno-base.h \

arch/i386/lib/checksum.o: $(deps_arch/i386/lib/checksum.o)

$(deps_arch/i386/lib/checksum.o):

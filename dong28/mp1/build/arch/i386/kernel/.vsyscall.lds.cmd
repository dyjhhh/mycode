cmd_arch/i386/kernel/vsyscall.lds := gcc -m32 -E -Wp,-MD,arch/i386/kernel/.vsyscall.lds.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.2/include -D__KERNEL__ -I/workdir/source/linux-2.6.22.5/include -Iinclude -I/workdir/source/linux-2.6.22.5/include2 -Iinclude2  -I/workdir/source/linux-2.6.22.5/include -include include/linux/autoconf.h -P -C -Ui386 -D__ASSEMBLY__ -o arch/i386/kernel/vsyscall.lds /workdir/source/linux-2.6.22.5/arch/i386/kernel/vsyscall.lds.S

deps_arch/i386/kernel/vsyscall.lds := \
  /workdir/source/linux-2.6.22.5/arch/i386/kernel/vsyscall.lds.S \
  include/asm/asm-offsets.h \

arch/i386/kernel/vsyscall.lds: $(deps_arch/i386/kernel/vsyscall.lds)

$(deps_arch/i386/kernel/vsyscall.lds):

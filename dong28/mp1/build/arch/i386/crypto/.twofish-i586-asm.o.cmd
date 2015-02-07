cmd_arch/i386/crypto/twofish-i586-asm.o := gcc -m32 -Wp,-MD,arch/i386/crypto/.twofish-i586-asm.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.2/include -D__KERNEL__ -Iinclude -Iinclude2 -I/workdir/source/linux-2.6.22.5/include -include include/linux/autoconf.h -D__ASSEMBLY__ -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -I/workdir/source/linux-2.6.22.5/include/asm-i386/mach-default -Iinclude/asm-i386/mach-default -DMODULE -c -o arch/i386/crypto/twofish-i586-asm.o /workdir/source/linux-2.6.22.5/arch/i386/crypto/twofish-i586-asm.S

deps_arch/i386/crypto/twofish-i586-asm.o := \
  /workdir/source/linux-2.6.22.5/arch/i386/crypto/twofish-i586-asm.S \
  include/asm/asm-offsets.h \

arch/i386/crypto/twofish-i586-asm.o: $(deps_arch/i386/crypto/twofish-i586-asm.o)

$(deps_arch/i386/crypto/twofish-i586-asm.o):

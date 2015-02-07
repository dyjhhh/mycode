cmd_usr/initramfs_data.o := gcc -m32 -Wp,-MD,usr/.initramfs_data.o.d  -nostdinc -isystem /usr/lib/gcc/i386-redhat-linux/4.1.2/include -D__KERNEL__ -Iinclude -Iinclude2 -I/workdir/source/linux-2.6.22.5/include -include include/linux/autoconf.h -D__ASSEMBLY__ -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -I/workdir/source/linux-2.6.22.5/include/asm-i386/mach-default -Iinclude/asm-i386/mach-default  -c -o usr/initramfs_data.o /workdir/source/linux-2.6.22.5/usr/initramfs_data.S

deps_usr/initramfs_data.o := \
  /workdir/source/linux-2.6.22.5/usr/initramfs_data.S \

usr/initramfs_data.o: $(deps_usr/initramfs_data.o)

$(deps_usr/initramfs_data.o):

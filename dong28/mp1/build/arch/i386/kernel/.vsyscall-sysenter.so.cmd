cmd_arch/i386/kernel/vsyscall-sysenter.so := gcc -m32 -m elf_i386 -nostdlib -shared -s -Wl,-soname=linux-gate.so.1  -Wl,--hash-style=sysv -Wl,-T,arch/i386/kernel/vsyscall.lds arch/i386/kernel/vsyscall-sysenter.o arch/i386/kernel/vsyscall-note.o -o arch/i386/kernel/vsyscall-sysenter.so
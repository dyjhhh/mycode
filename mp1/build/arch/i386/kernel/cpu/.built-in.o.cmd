cmd_arch/i386/kernel/cpu/built-in.o :=  ld -m elf_i386 -m elf_i386  -r -o arch/i386/kernel/cpu/built-in.o arch/i386/kernel/cpu/common.o arch/i386/kernel/cpu/proc.o arch/i386/kernel/cpu/bugs.o arch/i386/kernel/cpu/amd.o arch/i386/kernel/cpu/cyrix.o arch/i386/kernel/cpu/centaur.o arch/i386/kernel/cpu/transmeta.o arch/i386/kernel/cpu/intel.o arch/i386/kernel/cpu/intel_cacheinfo.o arch/i386/kernel/cpu/rise.o arch/i386/kernel/cpu/nexgen.o arch/i386/kernel/cpu/umc.o arch/i386/kernel/cpu/mcheck/built-in.o arch/i386/kernel/cpu/mtrr/built-in.o
cmd_net/netlabel/built-in.o :=  ld -m elf_i386 -m elf_i386  -r -o net/netlabel/built-in.o net/netlabel/netlabel_user.o net/netlabel/netlabel_kapi.o net/netlabel/netlabel_domainhash.o net/netlabel/netlabel_mgmt.o net/netlabel/netlabel_unlabeled.o net/netlabel/netlabel_cipso_v4.o
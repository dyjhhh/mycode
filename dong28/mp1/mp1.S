
.data					# section declaration

        # Useful offset constants for accessing members of a 
        # struct mp1_blink_struct structure
        LOCATION   = 0    
        ON_CHAR    = 2
        OFF_CHAR   = 3 
        ON_LENGTH  = 4
        OFF_LENGTH = 6
        COUNTDOWN  = 8
        STATUS     = 10
        NEXT       = 12

        STRUCT_SIZE = 16

# Pointer to head of list (initialized to NULL)


mp1_list_head:
        .long   0
call_table:
	.long mp1_ioctl_add
	.long mp1_ioctl_remove
	.long mp1_ioctl_find
	.long mp1_ioctl_sync

.text					# section declaration

# Export the function symbol names

.global mp1_rtc_tasklet
.global mp1_ioctl

# void mp1_poke(void);
#
# Interface: Register-based arguments (not C-style)
#    Inputs: %cl  - The byte you wish to write
#            %eax - Offset from the start of video memory that you wish
#                   to write to
#   Outputs: Text-mode video screen is written to at location %eax with
#            the byte in %cl
# Registers: Clobbers EDX

mp1_poke:
        
	movl    vmem_base_addr(,1),%edx
	movb    %cl,(%edx,%eax,1)
	ret


	#void mp1_rtc_tasklet(unsigned long)
	#Interface:C-style
	# examine each mp1_blink_struct in mp1_list_head
	#        decrement countdown
	#        if countdown = 0
	#            examine status
	#            call mp1_poke
	#            update status
	#            length = opposite length countdown
	#        return
	
	#Inputs: %ebx - list head
	#Outputs: function examine each mp1_blink_struct and update the status
	#         and display characters with xorresponding length
	#	  returns when reach the end of the list
	#Registers:%ax - store on_length or off_length
	#	%si - store status field and countdown filed
	#	%cl - store on_char or off_char
	
mp1_rtc_tasklet:

init_tasklet:
	        pushl %ebp                      #save old base pointer
	        movl %esp, %ebp
	        pushl %ebx                      #callee-save ebx
	        pushl %edi                      #callee-save ecx
	        pushl %esi                      #callee-save esi
	        movl mp1_list_head, %ebx        
tasklet_loop:
	        cmp $0, %ebx                    #and if list head null then we're done
	        je done
	        xorl %esi, %esi			#clear esi
	        xorl %ecx, %ecx			#clear ecx
	        xorl %eax, %eax			#clear eax
	        movw COUNTDOWN(%ebx), %si       
	        decw %si                        #countdown decrement
	        movw %si, COUNTDOWN(%ebx)
	        cmpw $0, %si                    #so if countdown not 0, move to next struct
	        jne cont
status_change:
	        movw STATUS(%ebx), %si          
	        cmpw $0, %si                    #and if status = 0
	        je switch_on                    #status = 1
	
switch_off:				
		movw $0, %si          		#make status = 0
	        movb OFF_CHAR(%ebx), %cl	
	        movw OFF_LENGTH(%ebx), %ax
	        jmp get_loc
switch_on:	                  		
	        movw $1, %si
	        movb ON_CHAR(%ebx), %cl
	        movw ON_LENGTH(%ebx), %ax
get_loc:
	        movw %ax, COUNTDOWN(%ebx)
	        movw %si, STATUS(%ebx)
	        movw 0(%ebx), %ax          	#eax <-- location * 2
	        shlw $1, %ax
	        call mp1_poke               	#poke
cont:
	        movl NEXT(%ebx), %esi
	        movl %esi, %ebx
	        jmp tasklet_loop
done:
	        popl %esi
	        popl %edi
	        popl %ebx
	        leave
	        ret
	#int mp1_ioctl (unsigned long arg, unsigned long cmd)
	#Interface: C-style function
	#Inputs: %eax - the cmd argument corresponding to core functions
	#Outputs: %eax - call corresponding core functions
	#		according to call_table
	#		return -1 if it is an invalid command
	#Registers:%eax - take in cmd argument and call corresponding functions
	
mp1_ioctl:
		movl	8(%esp), %eax
		cmpl 	$3,%eax			#eax<--cmd
		jg err				#if cmd>3 throw error
		cmp 	$0,%eax			#if cms<0 throw error
		jl err
		jmp	*call_table(,%eax,4)
err:
		movl $-1, %eax			#return -1
		ret


	
mp1_ioctl_add:

init:
		pushl %ebp                      #save frame pointer
		movl %esp, %ebp
		pushl %ebx                      #callee-save ebx
		pushl %esi                      #callee-save esi
		pushl %edi	         	#callee-save edi
	
#Dynamically allcocate memory using mp1_malloc funtion to store a
#copy of the structure
	
malloc:
		movl 8(%ebp), %edi                  #edi <-- arg
		cmp $0, %edi                        #if arg is null then skip
		je restore
		subl $4, %esp                       #allocate space for one local variable
		movl $STRUCT_SIZE, -16(%ebp)        #set local variable to 16
		call mp1_malloc                     #allocate using local var as param
		cmp $0, %eax                        #check if malloc returned null
		je err_add
		addl $4, %esp		             #reclaim space from local variable

#copy entire mp1_blink_struct from the user space strcuture to the newly allocated memory
	
translate:
		subl $12, %esp                      #allocate space for 3 new variables
		movl $STRUCT_SIZE, -16(%ebp)                 #put 16 in first variable (size)
		movl %eax, -24(%ebp)                #newly malloced space is second variable (to)
		movl %edi, -20(%ebp)                #arg is third variable (from)
		movl %eax, %esi                     #esi <-- malloced memory
		call mp1_copy_from_user             #copy data from user space
		cmp $0, %eax                        #check if unable to write all bytes	       jne err_free_add

#set the countdown field to be equal to the on_length field
#and set the status field to 1
#then insert this structure at the head of the linked list
#using the mp1_list_head pointer
	
update_data:
		movw 4(%esi), %dx                   #edx <-- on_length
		movw %dx, 8(%esi)                   #countdown <-- on_length
		movb $1, 10(%esi)                   #status <-- 1
		movl mp1_list_head, %edi            #edi <-- address of old head
		movl %edi, 12(%esi)                 #next <-- address of old head
		movl %esi, mp1_list_head            #head <-- address of malloced memory

#make a call to mp1_poke with the correct register parameter to immediately
#display the character on the text-mode video screen
#this effectively turns thr location on
	
#check if the location is inside the range 0 to 80*25-1

poke:
		movw 0(%esi), %ax                  #eax <-- location
		cmp $0, %eax                        #check if eax is < 0
		jl err_free_add
		xorl %edi, %edi
		addl $2, %edi
		shll $10, %edi
		subl $49, %edi                      #check if eax > 1999
		cmp %edi, %eax
		jg err_free_add
		shlw $1, %ax                       #eax *= 2
		movb 2(%esi), %cl                    #cl <-- on_char
		call mp1_poke                      #output char to screen
		jmp restore

#the error handling prevent memory leaks
#free the memory using mp1_free
	
err_free_add:
		addl $8, %esp                       #restore local var space
		movl %esi,-16(%ebp)
		call mp1_free
	
err_add:
		addl $4, %esp                       #restore local var space
		movl $-1, %eax                      #eax <-- -1
		pop %edi                            #restore registers and leave
		pop %esi
		pop %ebx
		leave
		ret
	
restore:
		addl $12, %esp                      #restore local var space
		movl $0, %eax                       #eax <-- 0
		pop %edi                            #restore registers and leave
		pop %esi
		pop %ebx
		leave
		ret
	

mp1_ioctl_remove:
#remove function done
		pushl   %ebp
	        movl    %esp, %ebp

	        pushl   %esi
	        pushl   %edi
	        pushl   %ebx

	        pushl   8(%ebp)
	        call    mp1_find_helper
	        addl    $4, %esp
	        cmpl    $0, %eax
	        je      remove_fail_return

	        # Found the right element.  Now find the
	        # previous pointer in the list, and remove it
	        # We should not fail here, because mp1_find_helper
	        # returned a valid list element

	        leal    mp1_list_head, %edx

remove_find_prev:
	        cmp     %eax, (%edx)		#check if current next is address
	        je      found_prev		#move to found

		movl    (%edx), %edx		#move to next in linked list
	        leal    NEXT(%edx), %edx
	        jmp     remove_find_prev

found_prev:
	        # Perform the removal
	        movl    NEXT(%eax), %ecx	#ecx <-- remove->next
	        movl    %ecx, (%edx)		#prev->next is remove->next

free_mem:
	        pushl   %eax
	        call    mp1_free
	        addl    $4, %esp
	        jmp     remove_success_return

remove_fail_return:
	        movl    $-1,%eax
	        jmp     remove_leave

remove_success_return:
	        movl    $0, %eax
remove_leave:
	        popl    %ebx
	        popl    %edi
	        popl    %esi

	        leave	
	        ret
	        

        
mp1_ioctl_find:
#find function done
		pushl   %ebp
	        movl    %esp, %ebp
	        subl    $2,%esp

	        pushl   %esi
	        pushl   %edi
	        pushl   %ebx

	        pushl   $2
	        pushl   8(%ebp)
	        leal    -2(%ebp),%edi		#edi <-- arg location
	        pushl   %edi
	        call    mp1_copy_to_user
	        addl    $12,%esp

	        cmp     $0,%eax
	        jne     find_fail_return

	        movzwl  -2(%ebp),%eax	
	        pushl   %eax
	        call    mp1_find_helper
	        addl    $4, %esp
	        cmpl    $0, %eax
	        je      find_fail_return

	        pushl   $STRUCT_SIZE		#n is struct_size
	        pushl   %eax			#mem address(kernel) is from
	        pushl   8(%ebp)			#arg is to
	        call    mp1_copy_to_user
	        addl    $12,%esp

	        cmp     $0,%eax			#check if copy worked
	        je      find_success_return

find_fail_return:
	        movl    $-1,%eax
	        jmp     find_leave

find_success_return:
	        movl    $0, %eax
find_leave:
	        popl    %ebx
	        popl    %edi
	        popl    %esi

	        leave		
	        ret

# find helper function to verify location done
mp1_find_helper:
	        pushl	%ebp
	        movl	%esp, %ebp

	        pushl   %ebx

	        movw	8(%ebp), %ax		#esi <-- argument (location)
	        movl	mp1_list_head, %ebx	#ebx <-- address of head
loop:
	        cmpl    $0, %ebx		#if ebx is null, done
	        je      helper_fail_return

	        cmpw    %ax, LOCATION(%ebx)	#put location of address into ax
	        je      helper_success_return

	        movl    NEXT(%ebx), %ebx	#put the next address in linked list into ebx
	        jmp     loop			#continue to loop

helper_fail_return:
	        xorl    %eax, %eax		#clear eax
	        jmp     helper_leave

helper_success_return:
	        movl    %ebx, %eax		#put the address in eax

helper_leave:
	        popl    %ebx
	        leave
	        ret
	

	
mp1_ioctl_sync:
		pushl   %ebp
	        movl    %esp, %ebp

	        pushl   %esi
	        pushl   %edi
	        pushl   %ebx

sync_find_first:
	        movl    8(%ebp), %eax
	        shr     $16, %eax
	        pushl   %eax
	        call    mp1_find_helper
	        addl    $4, %esp
	        cmpl    $0, %eax
	        je      sync_fail_return
	        movl    %eax, %esi

	        movl    8(%ebp), %eax
	        andl    $0xFFFF, %eax
	        pushl   %eax
	        call    mp1_find_helper
	        addl    $4, %esp
	        cmpl    $0, %eax
	        je      sync_fail_return
	        movl    %eax, %edi

sync_copy_loop:
	        movw    ON_LENGTH(%esi), %ax
	        movw    %ax, ON_LENGTH(%edi)
	        movw    OFF_LENGTH(%esi), %ax
	        movw    %ax, OFF_LENGTH(%edi)
	        movw    COUNTDOWN(%esi), %ax
	        movw    %ax, COUNTDOWN(%edi)
	        movw    STATUS(%esi), %ax
	        movw    %ax, STATUS(%edi)

	        movzwl  LOCATION(%edi), %eax
	        shll    $1,%eax
	        movzbl  OFF_CHAR(%edi),%ecx
	        movzbl  ON_CHAR(%edi),%ebx
	        testb   $0x1,STATUS(%edi)
	        cmovl   %ebx, %ecx

sync_display:
	        call    mp1_poke
	        jmp     sync_success_return

sync_fail_return:
	        movl    $-1,%eax
	        jmp     sync_leave

sync_success_return:
	        movl    $0, %eax
sync_leave:
	        popl    %ebx
	        popl    %edi
	        popl    %esi

	        leave
	        ret

.end


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
	.long mp1_iotcl_sync

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

mp1_rtc_tasklet:
	pushl	%ebp
	movl	%esp, %ebp
	
	pushl	%esi
	pushl	%edi
	pushl	%ebx
	
	movl 	mp1_list_head, %ebx
	
tasklet_loop:
	cmpl	$0,%ebx
	je	tasklet_end

	decw	COUNTDOWN(%ebx)
	cmpw	$0,COUNTDOWN(%ebx)
	jg 	next_loop

	movzwl	LOCATION(%ebx),%eax	#blink location is now in eax
	shl	$1,%eax

	testw	$0x1,STATUS(%ebx)
	jz	currently_off

	movb	OFF_CHAR(%ebx),%cl
	call 	mp1_poke
	movw	OFF_LENGTH(%ebx),%dx
	jmp	end_blink

curretly_off:
	movb	ON_CHAR(%ebx), %cl
	call 	mp1_poke
	movw	ON_LENGTH(%ebx), %dx

end_blink:
	movw	%dx, COUNTDOWN(%edx)
	xorw	%0x1, STATUS(%ebx)

next_loop:
	movl	NEXT(%ebx), %ebx
	jmp	tasklet_loop

tasklet_end:
	popl	%ebx
	popl	%edi
	popl	%esi
	
	popl	%ebp
	ret

mp1_ioctl:
	movl	8(%esp), %eax
	jmp	*call_table(,%eax,4)

mp1_ioctl_add:
	pushl	%ebp
	movl	%esp, %ebp
        	
	#Allocate temp structure on the stack
	subl	$STRUCT_SIZE, %esp
	
	#Preserve registers
	pushl	%esi
	pushl	%edi
	pushl	%ebx

	#Get pointer to temp structure
	leal	-STRUCT_SIZE(%ebp),%ebx

	#Copy user data onto the stack
	pushl	$STRUCT_SIZE
	pushl	8(%ebp)
	pushl	%ebx
	call	ece391_memcpy
	addl	$12,%esp

	#Check that the copy succeeded
	cmpl	$0,%eax
	jne	add_fail_return

	#Check that the location is valid
	cmpw	$80*25,LOCATION(%ebx)
	jae	add_fail_return

	#Mark this structure as valid
	movw






mp1_ioctl_remove:
	ret
        
mp1_ioctl_find:
	ret

mp1_ioctl_sync:
	ret

.end

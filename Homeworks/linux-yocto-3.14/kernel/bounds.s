	.file	"bounds.c"
# GNU C (GCC) version 4.9.1 (i586-poky-linux)
#	compiled by GNU C version 4.9.1, GMP version 6.0.0, MPFR version 3.1.2, MPC version 1.0.2
# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed:  -nostdinc
# -I /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include
# -I arch/x86/include/generated -I include
# -I /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/uapi
# -I arch/x86/include/generated/uapi
# -I /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/include/uapi
# -I include/generated/uapi -imultilib .
# -iprefix /scratch/opt/sysroots/x86_64-pokysdk-linux/usr/bin/i586-poky-linux/../../lib/i586-poky-linux/gcc/i586-poky-linux/4.9.1/
# -isysroot /scratch/opt/sysroots/i586-poky-linux -D __KERNEL__
# -D CONFIG_AS_CFI=1 -D CONFIG_AS_CFI_SIGNAL_FRAME=1
# -D CONFIG_AS_CFI_SECTIONS=1 -D CONFIG_AS_FXSAVEQ=1 -D CONFIG_AS_CRC32=1
# -D CONFIG_AS_AVX=1 -D CONFIG_AS_AVX2=1 -D CC_USING_FENTRY
# -D CC_HAVE_ASM_GOTO -D KBUILD_STR(s)=#s
# -D KBUILD_BASENAME=KBUILD_STR(bounds)
# -D KBUILD_MODNAME=KBUILD_STR(bounds)
# -isystem /scratch/opt/sysroots/x86_64-pokysdk-linux/usr/bin/i586-poky-linux/../../lib/i586-poky-linux/gcc/i586-poky-linux/4.9.1/include
# -include /scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/include/linux/kconfig.h
# -MD kernel/.bounds.s.d kernel/bounds.c -m64 -mpreferred-stack-boundary=3
# -mtune=generic -mno-red-zone -mcmodel=kernel -maccumulate-outgoing-args
# -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -mfentry -march=x86-64
# -auxbase-strip kernel/bounds.s -g -O2 -Wall -Wundef -Wstrict-prototypes
# -Wno-trigraphs -Werror=implicit-function-declaration -Wno-format-security
# -Wno-sign-compare -Wframe-larger-than=2048 -Wno-unused-but-set-variable
# -Wdeclaration-after-statement -Wno-pointer-sign -Werror=implicit-int
# -Werror=strict-prototypes -Werror=date-time -p -fno-strict-aliasing
# -fno-common -fno-delete-null-pointer-checks -funit-at-a-time
# -fno-asynchronous-unwind-tables -fno-stack-protector
# -fno-omit-frame-pointer -fno-optimize-sibling-calls
# -fno-var-tracking-assignments -fno-inline-functions-called-once
# -fno-strict-overflow -fconserve-stack -fverbose-asm
# options enabled:  -faggressive-loop-optimizations -fauto-inc-dec
# -fbranch-count-reg -fcaller-saves -fcombine-stack-adjustments
# -fcompare-elim -fcprop-registers -fcrossjumping -fcse-follow-jumps
# -fdefer-pop -fdevirtualize -fdevirtualize-speculatively -fdwarf2-cfi-asm
# -fearly-inlining -feliminate-unused-debug-types -fexpensive-optimizations
# -fforward-propagate -ffunction-cse -fgcse -fgcse-lm -fgnu-runtime
# -fgnu-unique -fguess-branch-probability -fhoist-adjacent-loads -fident
# -fif-conversion -fif-conversion2 -findirect-inlining -finline
# -finline-atomics -finline-small-functions -fipa-cp -fipa-profile
# -fipa-pure-const -fipa-reference -fipa-sra -fira-hoist-pressure
# -fira-share-save-slots -fira-share-spill-slots
# -fisolate-erroneous-paths-dereference -fivopts -fkeep-static-consts
# -fleading-underscore -fmath-errno -fmerge-constants -fmerge-debug-strings
# -fmove-loop-invariants -foptimize-strlen -fpartial-inlining -fpeephole
# -fpeephole2 -fprefetch-loop-arrays -fprofile -free -freg-struct-return
# -freorder-blocks -freorder-blocks-and-partition -freorder-functions
# -frerun-cse-after-loop -fsched-critical-path-heuristic
# -fsched-dep-count-heuristic -fsched-group-heuristic -fsched-interblock
# -fsched-last-insn-heuristic -fsched-rank-heuristic -fsched-spec
# -fsched-spec-insn-heuristic -fsched-stalled-insns-dep -fschedule-insns2
# -fshow-column -fshrink-wrap -fsigned-zeros -fsplit-ivs-in-unroller
# -fsplit-wide-types -fstrict-volatile-bitfields -fsync-libcalls
# -fthread-jumps -ftoplevel-reorder -ftrapping-math -ftree-bit-ccp
# -ftree-builtin-call-dce -ftree-ccp -ftree-ch -ftree-coalesce-vars
# -ftree-copy-prop -ftree-copyrename -ftree-cselim -ftree-dce
# -ftree-dominator-opts -ftree-dse -ftree-forwprop -ftree-fre
# -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
# -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pre
# -ftree-pta -ftree-reassoc -ftree-scev-cprop -ftree-sink -ftree-slsr
# -ftree-sra -ftree-switch-conversion -ftree-tail-merge -ftree-ter
# -ftree-vrp -funit-at-a-time -fvar-tracking -fverbose-asm
# -fzero-initialized-in-bss -m128bit-long-double -m64 -m80387
# -maccumulate-outgoing-args -malign-stringops
# -mavx256-split-unaligned-load -mavx256-split-unaligned-store
# -mfancy-math-387 -mfentry -mfp-ret-in-387 -mfxsr -mglibc -mieee-fp
# -mlong-double-80 -mno-red-zone -mno-sse4 -mpush-args
# -mtls-direct-seg-refs -mvzeroupper

	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.section	.text.unlikely,"ax",@progbits
.LCOLDB0:
	.text
.LHOTB0:
	.p2align 4,,15
	.section	.text.unlikely
.Ltext_cold0:
	.text
	.globl	foo
	.type	foo, @function
foo:
.LFB141:
	.file 1 "kernel/bounds.c"
	.loc 1 17 0
	.cfi_startproc
	call	__fentry__
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	.loc 1 19 0
#APP
# 19 "kernel/bounds.c" 1
	
->NR_PAGEFLAGS $25 __NR_PAGEFLAGS	#
# 0 "" 2
	.loc 1 20 0
# 20 "kernel/bounds.c" 1
	
->MAX_NR_ZONES $4 __MAX_NR_ZONES	#
# 0 "" 2
	.loc 1 21 0
# 21 "kernel/bounds.c" 1
	
->NR_PCG_FLAGS $3 __NR_PCG_FLAGS	#
# 0 "" 2
	.loc 1 23 0
# 23 "kernel/bounds.c" 1
	
->NR_CPUS_BITS $13 ilog2(CONFIG_NR_CPUS)	#
# 0 "" 2
	.loc 1 25 0
# 25 "kernel/bounds.c" 1
	
->SPINLOCK_SIZE $4 sizeof(spinlock_t)	#
# 0 "" 2
	.loc 1 27 0
#NO_APP
	popq	%rbp	#
	.cfi_restore 6
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE141:
	.size	foo, .-foo
	.section	.text.unlikely
.LCOLDE0:
	.text
.LHOTE0:
.Letext0:
	.section	.text.unlikely
.Letext_cold0:
	.file 2 "include/linux/page-flags.h"
	.file 3 "include/linux/mmzone.h"
	.file 4 "/scratch/spring2017/10-03/CS444/Homeworks/linux-yocto-3.14/arch/x86/include/asm/page_types.h"
	.file 5 "include/linux/printk.h"
	.file 6 "include/linux/kernel.h"
	.file 7 "include/linux/page_cgroup.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.long	0x20c
	.value	0x4
	.long	.Ldebug_abbrev0
	.byte	0x8
	.uleb128 0x1
	.long	.LASF59
	.byte	0x1
	.long	.LASF60
	.long	.LASF61
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.long	.Ldebug_line0
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.long	.LASF0
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.long	.LASF1
	.uleb128 0x2
	.byte	0x2
	.byte	0x5
	.long	.LASF2
	.uleb128 0x2
	.byte	0x2
	.byte	0x7
	.long	.LASF3
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.long	.LASF4
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.long	.LASF5
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.long	.LASF6
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.long	.LASF7
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.long	.LASF8
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.long	.LASF9
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.long	.LASF10
	.uleb128 0x2
	.byte	0x1
	.byte	0x2
	.long	.LASF11
	.uleb128 0x4
	.long	.LASF43
	.byte	0x4
	.byte	0x2
	.byte	0x4a
	.long	0x14f
	.uleb128 0x5
	.long	.LASF12
	.sleb128 0
	.uleb128 0x5
	.long	.LASF13
	.sleb128 1
	.uleb128 0x5
	.long	.LASF14
	.sleb128 2
	.uleb128 0x5
	.long	.LASF15
	.sleb128 3
	.uleb128 0x5
	.long	.LASF16
	.sleb128 4
	.uleb128 0x5
	.long	.LASF17
	.sleb128 5
	.uleb128 0x5
	.long	.LASF18
	.sleb128 6
	.uleb128 0x5
	.long	.LASF19
	.sleb128 7
	.uleb128 0x5
	.long	.LASF20
	.sleb128 8
	.uleb128 0x5
	.long	.LASF21
	.sleb128 9
	.uleb128 0x5
	.long	.LASF22
	.sleb128 10
	.uleb128 0x5
	.long	.LASF23
	.sleb128 11
	.uleb128 0x5
	.long	.LASF24
	.sleb128 12
	.uleb128 0x5
	.long	.LASF25
	.sleb128 13
	.uleb128 0x5
	.long	.LASF26
	.sleb128 14
	.uleb128 0x5
	.long	.LASF27
	.sleb128 15
	.uleb128 0x5
	.long	.LASF28
	.sleb128 16
	.uleb128 0x5
	.long	.LASF29
	.sleb128 17
	.uleb128 0x5
	.long	.LASF30
	.sleb128 18
	.uleb128 0x5
	.long	.LASF31
	.sleb128 19
	.uleb128 0x5
	.long	.LASF32
	.sleb128 20
	.uleb128 0x5
	.long	.LASF33
	.sleb128 21
	.uleb128 0x5
	.long	.LASF34
	.sleb128 22
	.uleb128 0x5
	.long	.LASF35
	.sleb128 23
	.uleb128 0x5
	.long	.LASF36
	.sleb128 24
	.uleb128 0x5
	.long	.LASF37
	.sleb128 25
	.uleb128 0x5
	.long	.LASF38
	.sleb128 8
	.uleb128 0x5
	.long	.LASF39
	.sleb128 12
	.uleb128 0x5
	.long	.LASF40
	.sleb128 8
	.uleb128 0x5
	.long	.LASF41
	.sleb128 4
	.uleb128 0x5
	.long	.LASF42
	.sleb128 11
	.byte	0
	.uleb128 0x6
	.long	.LASF44
	.byte	0x4
	.byte	0x3
	.value	0x109
	.long	0x17b
	.uleb128 0x5
	.long	.LASF45
	.sleb128 0
	.uleb128 0x5
	.long	.LASF46
	.sleb128 1
	.uleb128 0x5
	.long	.LASF47
	.sleb128 2
	.uleb128 0x5
	.long	.LASF48
	.sleb128 3
	.uleb128 0x5
	.long	.LASF49
	.sleb128 4
	.byte	0
	.uleb128 0x7
	.byte	0x4
	.byte	0x7
	.byte	0x4
	.long	0x19c
	.uleb128 0x5
	.long	.LASF50
	.sleb128 0
	.uleb128 0x5
	.long	.LASF51
	.sleb128 1
	.uleb128 0x5
	.long	.LASF52
	.sleb128 2
	.uleb128 0x5
	.long	.LASF53
	.sleb128 3
	.byte	0
	.uleb128 0x8
	.string	"foo"
	.byte	0x1
	.byte	0x10
	.quad	.LFB141
	.quad	.LFE141-.LFB141
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x9
	.long	.LASF54
	.byte	0x4
	.byte	0x34
	.long	0x65
	.uleb128 0xa
	.long	0x49
	.long	0x1cb
	.uleb128 0xb
	.byte	0
	.uleb128 0x9
	.long	.LASF55
	.byte	0x5
	.byte	0x25
	.long	0x1c0
	.uleb128 0xc
	.long	.LASF56
	.byte	0x6
	.value	0x1a8
	.long	0x49
	.uleb128 0xa
	.long	0x73
	.long	0x1ed
	.uleb128 0xb
	.byte	0
	.uleb128 0xc
	.long	.LASF57
	.byte	0x6
	.value	0x1d9
	.long	0x1f9
	.uleb128 0xd
	.long	0x1e2
	.uleb128 0xc
	.long	.LASF58
	.byte	0x6
	.value	0x1e4
	.long	0x20a
	.uleb128 0xd
	.long	0x1e2
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x4
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x28
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1c
	.uleb128 0xd
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x4
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x4
	.byte	0x1
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.long	0x2c
	.value	0x2
	.long	.Ldebug_info0
	.byte	0x8
	.byte	0
	.value	0
	.value	0
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.quad	0
	.quad	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF38:
	.string	"PG_checked"
.LASF48:
	.string	"ZONE_MOVABLE"
.LASF58:
	.string	"hex_asc_upper"
.LASF34:
	.string	"PG_uncached"
.LASF6:
	.string	"long long unsigned int"
.LASF44:
	.string	"zone_type"
.LASF37:
	.string	"__NR_PAGEFLAGS"
.LASF5:
	.string	"long long int"
.LASF0:
	.string	"signed char"
.LASF24:
	.string	"PG_private_2"
.LASF16:
	.string	"PG_dirty"
.LASF43:
	.string	"pageflags"
.LASF60:
	.string	"kernel/bounds.c"
.LASF10:
	.string	"long int"
.LASF21:
	.string	"PG_arch_1"
.LASF27:
	.string	"PG_tail"
.LASF12:
	.string	"PG_locked"
.LASF51:
	.string	"PCG_USED"
.LASF17:
	.string	"PG_lru"
.LASF14:
	.string	"PG_referenced"
.LASF46:
	.string	"ZONE_DMA32"
.LASF4:
	.string	"unsigned int"
.LASF23:
	.string	"PG_private"
.LASF7:
	.string	"long unsigned int"
.LASF55:
	.string	"console_printk"
.LASF3:
	.string	"short unsigned int"
.LASF53:
	.string	"__NR_PCG_FLAGS"
.LASF41:
	.string	"PG_savepinned"
.LASF30:
	.string	"PG_reclaim"
.LASF52:
	.string	"PCG_MIGRATION"
.LASF8:
	.string	"sizetype"
.LASF40:
	.string	"PG_pinned"
.LASF25:
	.string	"PG_writeback"
.LASF33:
	.string	"PG_mlocked"
.LASF56:
	.string	"panic_timeout"
.LASF50:
	.string	"PCG_LOCK"
.LASF47:
	.string	"ZONE_NORMAL"
.LASF15:
	.string	"PG_uptodate"
.LASF36:
	.string	"PG_compound_lock"
.LASF11:
	.string	"_Bool"
.LASF1:
	.string	"unsigned char"
.LASF28:
	.string	"PG_swapcache"
.LASF2:
	.string	"short int"
.LASF45:
	.string	"ZONE_DMA"
.LASF19:
	.string	"PG_slab"
.LASF49:
	.string	"__MAX_NR_ZONES"
.LASF54:
	.string	"max_pfn_mapped"
.LASF9:
	.string	"char"
.LASF26:
	.string	"PG_head"
.LASF42:
	.string	"PG_slob_free"
.LASF13:
	.string	"PG_error"
.LASF20:
	.string	"PG_owner_priv_1"
.LASF29:
	.string	"PG_mappedtodisk"
.LASF22:
	.string	"PG_reserved"
.LASF59:
	.ascii	"GNU C 4.9.1 -m64 -mpreferred-stack-boundary=3 -mtune=generic"
	.ascii	" -mno-red-zone -mcmodel=kernel -maccumulate-outgoing-args -m"
	.ascii	"no-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -mfentry -marc"
	.ascii	"h=x86-64 -g -O2 -p -fno-strict-aliasing -fno-common"
	.string	" -fno-delete-null-pointer-checks -funit-at-a-time -fno-asynchronous-unwind-tables -fno-stack-protector -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -fno-inline-functions-called-once -fno-strict-overflow -fconserve-stack"
.LASF18:
	.string	"PG_active"
.LASF57:
	.string	"hex_asc"
.LASF39:
	.string	"PG_fscache"
.LASF61:
	.string	"/scratch/spring2017/10-03/linux-yocto-3.14"
.LASF35:
	.string	"PG_hwpoison"
.LASF31:
	.string	"PG_swapbacked"
.LASF32:
	.string	"PG_unevictable"
	.ident	"GCC: (GNU) 4.9.1"
	.section	.note.GNU-stack,"",@progbits

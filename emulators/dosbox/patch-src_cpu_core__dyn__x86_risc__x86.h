$NetBSD$

--- src/cpu/core_dyn_x86/risc_x86.h.orig	2010-05-10 17:43:54.000000000 +0000
+++ src/cpu/core_dyn_x86/risc_x86.h
@@ -139,7 +139,7 @@ return_address:
 		"popl %%ebp							\n"
 		:"=a" (retval), "=c" (tempflags)
 		:"r" (tempflags),"r" (code)
-		:"%edx","%ebx","%edi","%esi","cc","memory"
+		:"%edx","%edi","%esi","cc","memory"
 	);
 	reg_flags=(reg_flags & ~FMASK_TEST) | (tempflags & FMASK_TEST);
 #endif

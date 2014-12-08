$NetBSD$

--- mp3lib/decode_i586.c.orig	2014-12-08 03:03:00.000000000 +0000
+++ mp3lib/decode_i586.c
@@ -314,6 +314,6 @@ int synth_1to1_pent(real *bandPtr, int c
 "        movl "MANGLE(saved_ebp)",%%ebp\n\t"
         :"=a"(retval)
         :"m"(bandPtr),"m"(channel),"m"(samples),"m"(tmp[0])
-        :"memory","%edi","%esi","%ebx","%ecx","%edx");
+        :"memory","%edi","%esi","%ecx","%edx");
   return retval;
 }

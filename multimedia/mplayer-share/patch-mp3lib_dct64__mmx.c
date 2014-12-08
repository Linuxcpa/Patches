$NetBSD$

--- mp3lib/dct64_mmx.c.orig	2010-05-30 10:01:40.000000000 +0000
+++ mp3lib/dct64_mmx.c
@@ -983,5 +983,5 @@ void dct64_MMX(short *a,short *b,real *c
 ".L_bye:"
         :
         :"m"(a),"m"(b),"m"(c),"m"(tmp[0])
-        :"memory","%eax","%ebx","%ecx","%edx","%esi","%edi");
+        :"memory","%eax","%ecx","%edx","%esi","%edi");
 }

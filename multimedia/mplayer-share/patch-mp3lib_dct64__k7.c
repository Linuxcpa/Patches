$NetBSD$

--- mp3lib/dct64_k7.c.orig	2010-05-30 10:01:40.000000000 +0000
+++ mp3lib/dct64_k7.c
@@ -763,5 +763,5 @@ void dct64_MMX_3dnowex(short *a,short *b
 "       femms\n\t"
         :
         :"m"(a),"m"(b),"m"(c),"m"(tmp[0])
-        :"memory","%eax","%ebx","%ecx","%edx","%esi","%edi");
+        :"memory","%eax","%ecx","%edx","%esi","%edi");
 }

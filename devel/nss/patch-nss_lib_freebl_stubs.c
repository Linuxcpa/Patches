$NetBSD$

--- nss/lib/freebl/stubs.c.orig	2014-09-23 18:27:49.000000000 +0000
+++ nss/lib/freebl/stubs.c
@@ -571,6 +571,10 @@ freebl_InitNSPR(void *lib)
     return SECSuccess;
 }
 
+#ifndef RTLD_NOLOAD
+    #define RTLD_NOLOAD 0
+#endif
+
 static SECStatus
 freebl_InitNSSUtil(void *lib)
 {

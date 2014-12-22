$NetBSD$

--- nss/lib/dbm/include/mcom_db.h.orig	2014-09-23 18:27:49.000000000 +0000
+++ nss/lib/dbm/include/mcom_db.h
@@ -66,7 +66,7 @@ typedef PRUint32 uint32;
 #include <sys/byteorder.h>
 #endif
 
-#if defined(__linux) || defined(__BEOS__)
+#if defined(__linux) || defined(BEOS)
 #include <endian.h>
 #ifndef BYTE_ORDER
 #define BYTE_ORDER    __BYTE_ORDER

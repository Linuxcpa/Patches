$NetBSD$

--- include/llvm/Support/Host.h.orig	2014-06-08 08:31:58.065798144 +0000
+++ include/llvm/Support/Host.h
@@ -16,7 +16,7 @@
 
 #include "llvm/ADT/StringMap.h"
 
-#if defined(__linux__) || defined(__GNU__)
+#if defined(__linux__) || defined(__GNU__) || defined(__HAIKU__)
 #include <endian.h>
 #elif defined(__sun) & defined(__SVR4)
 # ifndef BYTE_ORDER

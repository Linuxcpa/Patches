$NetBSD$

--- src/botantools/botan/ml_unix/mlock.cpp.orig	2007-04-19 21:26:13.000000000 +0000
+++ src/botantools/botan/ml_unix/mlock.cpp
@@ -45,6 +45,11 @@ namespace QCA { // WRAPNS_LINE
 #include <sys/mman.h>
 namespace QCA { // WRAPNS_LINE
 
+#ifdef Q_OS_HAIKU
+#define mlock(ptr, bytes) (void(0))
+#define munlock(ptr, bytes) (void(0))
+#endif
+
 namespace Botan {
 
 /*************************************************

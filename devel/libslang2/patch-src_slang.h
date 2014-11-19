$NetBSD$

--- src/slang.h.orig	2014-06-02 05:55:28.434372608 +0000
+++ src/slang.h
@@ -43,7 +43,7 @@ USA.
 # endif
 #endif /* __watcomc__ */
 
-#if defined(__NetBSD__) || defined(__APPLE__)
+#if defined(__NetBSD__) || defined(__APPLE__) || defined(__HAIKU__)
 #undef unix
 #define unix 1
 #endif

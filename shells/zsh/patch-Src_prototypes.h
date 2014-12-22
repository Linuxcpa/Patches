$NetBSD$

--- Src/prototypes.h.orig	2013-11-27 19:00:20.000000000 +0000
+++ Src/prototypes.h
@@ -40,7 +40,7 @@ char *calloc _((size_t, size_t));
  * TBD: we'd much prefer to get hold of the header where
  * these are defined.
  */
-#ifdef _AIX
+#if defined(_AIX) || defined(__HAIKU__)
 #define TC_CONST const
 #else
 #define TC_CONST

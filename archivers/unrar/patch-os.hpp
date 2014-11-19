$NetBSD$

--- os.hpp.orig	2013-06-19 10:36:26.000000000 +0000
+++ os.hpp
@@ -176,7 +176,7 @@
 #define _stdfunction 
 #define _forceinline inline
 
-#ifdef _APPLE
+#if defined(_APPLE) || defined(__HAIKU__)
   #if defined(__BIG_ENDIAN__) && !defined(BIG_ENDIAN)
     #define BIG_ENDIAN
     #undef LITTLE_ENDIAN

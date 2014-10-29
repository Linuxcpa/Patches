$NetBSD$

--- os.hpp.orig	2013-06-19 10:36:26.000000000 +0000
+++ os.hpp
@@ -187,6 +187,15 @@
   #endif
 #endif
 
+#ifdef __HAIKU__
+  #include <endian.h>
+  #if LITTLE_ENDIAN
+    #undef BIG_ENDIAN
+  #elif BIG_ENDIAN
+    #undef LITTLE_ENDIAN
+  #endif
+#endif
+
 #if defined(__sparc) || defined(sparc) || defined(__hpux)
   #ifndef BIG_ENDIAN
      #define BIG_ENDIAN

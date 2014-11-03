$NetBSD$

--- zconf.h.orig	2014-11-03 05:41:40.000000000 +0000
+++ zconf.h
@@ -350,6 +350,18 @@
 #  endif
 #endif
 
+#if defined (__HAIKU__)
+#  ifdef ZLIB_DLL
+#    ifdef ZLIB_INTERNAL
+#      define ZEXPORT   __declspec(dllexport)
+#      define ZEXPORTVA __declspec(dllexport)
+#    else
+#      define ZEXPORT   __declspec(dllimport)
+#      define ZEXPORTVA __declspec(dllimport)
+#    endif
+#  endif
+#endif
+
 #ifndef ZEXTERN
 #  define ZEXTERN extern
 #endif

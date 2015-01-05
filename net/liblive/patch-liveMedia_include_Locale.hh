$NetBSD$

--- liveMedia/include/Locale.hh.orig	2012-02-04 11:01:47.000000000 +0000
+++ liveMedia/include/Locale.hh
@@ -36,7 +36,7 @@ along with this library; if not, write t
 #undef LOCALE_NOT_USED
 #undef XLOCALE_NOT_USED
 #else
-#if defined(__WIN32__) || defined(_WIN32)
+#if defined(__WIN32__) || defined(_WIN32) || defined(__HAIKU__)
 #define XLOCALE_NOT_USED 1
 #endif
 #endif

$NetBSD$

--- curl/include/curl/multi.h.orig	2005-07-15 03:48:35.000000000 +0000
+++ curl/include/curl/multi.h
@@ -42,7 +42,7 @@
    make this adjustment to catch this. */
 #define WIN32 1
 #endif
-
+#include <sys/select.h>
 #if defined(WIN32) && !defined(_WIN32_WCE) && !defined(__GNUC__) || \
   defined(__MINGW32__)
 #if !(defined(_WINSOCKAPI_) || defined(_WINSOCK_H))

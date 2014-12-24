$NetBSD$

--- src/AsyncNameResolver.h.orig	2014-03-23 16:12:57.000000000 +0000
+++ src/AsyncNameResolver.h
@@ -34,7 +34,7 @@
 /* copyright --> */
 #ifndef D_ASYNC_NAME_RESOLVER_H
 #define D_ASYNC_NAME_RESOLVER_H
-
+#include <sys/select.h>
 #include "common.h"
 
 #include <string>

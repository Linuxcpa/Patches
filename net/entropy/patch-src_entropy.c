$NetBSD$

--- src/entropy.c.orig	2005-07-13 05:55:08.051904512 +0000
+++ src/entropy.c
@@ -34,7 +34,7 @@
 #include "proxy.h"
 #include "news.h"
 #include "logger.h"
-
+#include <strings.h>
 #ifdef	__CYGWIN__
 	int autorun = 0;
 #endif

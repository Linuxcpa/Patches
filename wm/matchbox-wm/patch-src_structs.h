$NetBSD$

--- src/structs.h.orig	2006-07-25 20:16:05.000000000 +0000
+++ src/structs.h
@@ -45,7 +45,7 @@
 #include "config.h"
 
 #ifndef STANDALONE
-#include <libmb/mb.h>
+#include "mb.h"
 #endif
 
 #ifdef USE_XFT

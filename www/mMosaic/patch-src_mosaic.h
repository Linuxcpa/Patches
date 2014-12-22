$NetBSD$

--- src/mosaic.h.orig	2000-12-18 10:53:37.000000000 +0000
+++ src/mosaic.h
@@ -10,7 +10,7 @@
 #if !defined(VMS) && !defined(NeXT)
 #include <unistd.h>
 #endif
-#include <stdlib.h>
+#include "stdlib.h"
 #include <sys/types.h>
 #include <errno.h>
 

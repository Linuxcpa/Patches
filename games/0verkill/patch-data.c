$NetBSD$

--- data.c.orig	2001-12-15 17:51:54.000000000 +0000
+++ data.c
@@ -1,7 +1,7 @@
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
-
+#include <stdint.h>
 #ifndef WIN32
 #include "config.h"
 #endif

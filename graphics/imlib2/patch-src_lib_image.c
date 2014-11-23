$NetBSD$

--- src/lib/image.c.orig	2013-12-21 10:15:57.000000000 +0000
+++ src/lib/image.c
@@ -1,3 +1,4 @@
+#include <strings.h>
 #include "common.h"
 #include <time.h>
 #include <string.h>

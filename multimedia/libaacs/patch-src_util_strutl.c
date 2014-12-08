$NetBSD$

--- src/util/strutl.c.orig	2014-05-27 08:01:33.000000000 +0000
+++ src/util/strutl.c
@@ -20,7 +20,7 @@
 
 #include "strutl.h"
 #include "logging.h"
-
+#include <malloc.h>
 #include <string.h>
 #include <stdio.h>
 #include <stdarg.h>

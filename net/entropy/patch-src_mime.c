$NetBSD$

--- src/mime.c.orig	2005-07-13 05:55:08.000000000 +0000
+++ src/mime.c
@@ -22,7 +22,7 @@
 #include "mime.h"
 #include "tools.h"
 #include "logger.h"
-
+#include <strings.h>
 #ifndef	MAXLINESIZE
 #define	MAXLINESIZE	4096
 #endif

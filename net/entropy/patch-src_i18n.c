$NetBSD$

--- src/i18n.c.orig	2005-07-13 05:55:08.000000000 +0000
+++ src/i18n.c
@@ -25,7 +25,7 @@
 #include "unicode.h"
 #include "i18n.h"
 #include "logger.h"
-
+#include <strings.h>
 #define	LINESIZE	4096
 char language[2+1] = "de";
 char langpath[MAXPATHLEN] = ".";

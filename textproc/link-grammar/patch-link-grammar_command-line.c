$NetBSD$

--- link-grammar/command-line.c.orig	2010-07-06 19:49:32.000000000 +0000
+++ link-grammar/command-line.c
@@ -11,7 +11,7 @@
 /* forms, with or without modification, subject to certain conditions.   */
 /*                                                                       */
 /*************************************************************************/
-
+#include <strings.h>
 #include <wchar.h>
 #include <wctype.h>
 #include <link-grammar/api.h>

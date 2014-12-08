$NetBSD$

--- cstream.c.orig	2008-11-12 23:02:04.000000000 +0000
+++ cstream.c
@@ -3,7 +3,7 @@
  *
  * See the file COPYRIGHT in the distribution package for copying terms.
  */
-
+#include <strings.h>
 #ifndef HAVE_STRUCT_ITIMERVAL
 #error no itimerval
 #define NOTIMER

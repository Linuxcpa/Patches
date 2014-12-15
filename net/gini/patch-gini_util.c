$NetBSD$

--- gini/util.c.orig	2003-01-30 17:38:43.057409536 +0000
+++ gini/util.c
@@ -23,7 +23,7 @@
  *
  */
 #include <sys/time.h>
-#include <sys/errno.h>
+#include <errno.h>
 #include <ctype.h>
 
 //#include "gini.h"

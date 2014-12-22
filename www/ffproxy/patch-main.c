$NetBSD$

--- main.c.orig	2005-01-05 15:12:51.000000000 +0000
+++ main.c
@@ -27,7 +27,7 @@
 #include <stdio.h>
 
 #ifdef HAVE_STDLIB_H
-# include <stdlib.h>
+# include "stdlib.h"
 #endif
 #include <string.h>
 #ifdef HAVE_UNISTD_H

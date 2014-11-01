$NetBSD$

--- util/profile/prof_get.c.orig	2013-11-06 20:52:23.000000000 +0000
+++ util/profile/prof_get.c
@@ -5,6 +5,7 @@
  *
  */
 
+#include <strings.h>
 #include "prof_int.h"
 #include <stdio.h>
 #include <string.h>

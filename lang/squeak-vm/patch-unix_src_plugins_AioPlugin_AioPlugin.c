$NetBSD$

--- unix/src/plugins/AioPlugin/AioPlugin.c.orig	2012-07-31 00:00:56.000000000 +0000
+++ unix/src/plugins/AioPlugin/AioPlugin.c
@@ -1,7 +1,7 @@
 /* Automatically generated from Squeak on 30 July 2012 4:53:07 pm 
    by VMMaker 4.9.8
  */
-
+#include <sys/select.h>
 #include <math.h>
 #include <stdio.h>
 #include <stdlib.h>

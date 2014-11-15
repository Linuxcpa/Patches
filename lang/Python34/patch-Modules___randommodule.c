$NetBSD$

--- Modules/_randommodule.c.orig	2014-05-19 05:19:39.028311552 +0000
+++ Modules/_randommodule.c
@@ -67,7 +67,7 @@
 /* ---------------------------------------------------------------*/
 
 #include "Python.h"
-#include <time.h>               /* for seeding to current time */
+#include <sys/time.h>               /* for seeding to current time */
 
 /* Period parameters -- These are all magic.  Don't change. */
 #define N 624

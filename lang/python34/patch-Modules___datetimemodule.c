$NetBSD$

--- Modules/_datetimemodule.c.orig	2014-05-19 05:19:39.066322432 +0000
+++ Modules/_datetimemodule.c
@@ -5,7 +5,7 @@
 #include "Python.h"
 #include "structmember.h"
 
-#include <time.h>
+#include <sys/time.h>
 
 /* Differentiate between building the core module and building extension
  * modules.

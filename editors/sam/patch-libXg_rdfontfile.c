$NetBSD$

--- libXg/rdfontfile.c.orig	2014-12-19 07:43:59.000000000 +0000
+++ libXg/rdfontfile.c
@@ -2,7 +2,7 @@
 #include <libg.h>
 #include "libgint.h"
 #include <string.h>
-#include <fcntl.h>
+#include "fcntl.h"
 #include <sys/stat.h>
 
 static char*

$NetBSD$

--- src/spawn-fcgi.c.orig	2009-09-19 09:48:40.000000000 +0000
+++ src/spawn-fcgi.c
@@ -10,7 +10,7 @@
 #include <string.h>
 #include <errno.h>
 #include <stdio.h>
-#include <unistd.h>
+#include "unistd.h"
 #include <fcntl.h>
 
 #ifdef HAVE_PWD_H

$NetBSD$

--- Xos.h.orig	2013-06-09 10:01:47.000000000 +0000
+++ Xos.h
@@ -58,6 +58,7 @@ in this Software without prior written a
  * being the way they currently are. So we're stuck with them this way,
  * which can be really inconvenient. :-(
  */
+#include <strings.h>
 
 # include <string.h>
 # if defined(__SCO__) || defined(__UNIXWARE__) || defined(__sun) || defined(__CYGWIN__)

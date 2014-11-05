$NetBSD$

--- src/cpus/cpu_sh.cc.orig	2010-02-14 09:33:54.000000000 +0000
+++ src/cpus/cpu_sh.cc
@@ -33,6 +33,7 @@
  *  TODO: This actually only works or SH4 so far, not SH3.
  */
 
+#include <strings.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

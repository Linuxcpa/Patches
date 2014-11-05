$NetBSD$

--- src/cpus/cpu_m88k.cc.orig	2010-02-14 09:33:54.000000000 +0000
+++ src/cpus/cpu_m88k.cc
@@ -35,6 +35,7 @@
  *  M88110: Not yet. 
  */
 
+#include <strings.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

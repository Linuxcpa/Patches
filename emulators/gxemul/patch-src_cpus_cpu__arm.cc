$NetBSD$

--- src/cpus/cpu_arm.cc.orig	2010-02-14 09:33:54.000000000 +0000
+++ src/cpus/cpu_arm.cc
@@ -32,6 +32,7 @@
  *	http://www.pinknoise.demon.co.uk/ARMinstrs/ARMinstrs.html
  */
 
+#include <strings.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

$NetBSD$

--- src/disk/diskimage.cc.orig	2010-02-14 09:33:54.000000000 +0000
+++ src/disk/diskimage.cc
@@ -31,6 +31,7 @@
  *	   machines, where disks may need to be swapped during boot etc.
  */
 
+#include <strings.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

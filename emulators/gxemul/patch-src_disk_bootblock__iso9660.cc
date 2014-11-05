$NetBSD$

--- src/disk/bootblock_iso9660.cc.orig	2010-02-14 09:33:54.000000000 +0000
+++ src/disk/bootblock_iso9660.cc
@@ -39,6 +39,7 @@
  *        directory, so that one can more easily choose the correct file.
  */
 
+#include <strings.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

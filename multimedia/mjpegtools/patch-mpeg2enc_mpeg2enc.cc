$NetBSD$

--- mpeg2enc/mpeg2enc.cc.orig	2010-10-17 15:19:48.000000000 +0000
+++ mpeg2enc/mpeg2enc.cc
@@ -45,7 +45,7 @@
  * 02111-1307, USA.
  *
  */
-
+#include <strings.h>
 #include <config.h>
 #include <stdio.h>
 #ifdef HAVE_GETOPT_H

$NetBSD$

--- src/plugins/oss/ao_oss.c.orig	2014-12-29 02:57:23.000000000 +0000
+++ src/plugins/oss/ao_oss.c
@@ -28,5 +28,5 @@
 
  ********************************************************************/
-
+#include <private/media/soundcard.h>
 #include <stdio.h>
 #include <errno.h>
@@ -37,6 +37,4 @@
 #if defined(__OpenBSD__) || defined(__NetBSD__)
 #include <soundcard.h>
-#else
-#include <sys/soundcard.h>
 #endif
 #include <sys/ioctl.h>

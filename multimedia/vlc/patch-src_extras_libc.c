$NetBSD$

--- src/extras/libc.c.orig	2010-05-25 17:34:04.000000000 +0000
+++ src/extras/libc.c
@@ -28,7 +28,7 @@
 #ifdef HAVE_CONFIG_H
 # include "config.h"
 #endif
-
+#include <strings.h>
 #include <vlc_common.h>
 
 #include <errno.h>

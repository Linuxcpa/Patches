$NetBSD$

--- src/libgame/sound.c.orig	2002-03-17 20:19:54.000000000 +0000
+++ src/libgame/sound.c
@@ -10,7 +10,7 @@
 *----------------------------------------------------------*
 * sound.c                                                  *
 ***********************************************************/
-
+#include <sys/select.h>
 #include <string.h>
 #include <sys/time.h>
 #include <unistd.h>

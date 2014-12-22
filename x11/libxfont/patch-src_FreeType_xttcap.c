$NetBSD$

--- src/FreeType/xttcap.c.orig	2014-05-16 02:38:27.013631488 +0000
+++ src/FreeType/xttcap.c
@@ -38,6 +38,7 @@ static char const * const releaseID =
     _XTT_RELEASE_NAME;
 */
 
+#include <strings.h>
 #ifdef HAVE_CONFIG_H
 #include <config.h>
 #endif

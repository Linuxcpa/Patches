$NetBSD$

--- src/misc/http_auth.c.orig	2010-04-15 16:56:14.000000000 +0000
+++ src/misc/http_auth.c
@@ -30,7 +30,7 @@
 #ifdef HAVE_CONFIG_H
 # include "config.h"
 #endif
-
+#include <strings.h>
 #include <vlc_common.h>
 #include <vlc_http.h>
 #include <vlc_md5.h>

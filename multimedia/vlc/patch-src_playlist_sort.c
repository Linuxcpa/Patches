$NetBSD$

--- src/playlist/sort.c.orig	2010-04-15 16:56:15.000000000 +0000
+++ src/playlist/sort.c
@@ -25,7 +25,7 @@
 #ifdef HAVE_CONFIG_H
 # include "config.h"
 #endif
-
+#include <strings.h>
 #include <vlc_common.h>
 #include <vlc_rand.h>
 #define  VLC_INTERNAL_PLAYLIST_SORT_FUNCTIONS

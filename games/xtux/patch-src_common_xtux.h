$NetBSD$

--- src/common/xtux.h.orig	2000-11-11 08:55:51.000000000 +0000
+++ src/common/xtux.h
@@ -6,7 +6,7 @@
    stored in a short, which would overflow at 1024 * 64 (TILE_W), so the
    longest line of input could be 1024 bytes */
 #define MAXLINE 1024
-
+#include <stdint.h>
 /* Used for flags in clients keypress */
 #define FORWARD_BIT 1<<0
 #define BACK_BIT    1<<1

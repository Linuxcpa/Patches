$NetBSD$

--- peerlist.h.orig	2008-06-15 00:00:19.000000000 +0000
+++ peerlist.h
@@ -1,6 +1,6 @@
 #ifndef PEERLIST_H
 #define PEERLIST_H
-
+#include <sys/select.h>
 #include "./def.h"
 #include <sys/types.h>
 #include <time.h>

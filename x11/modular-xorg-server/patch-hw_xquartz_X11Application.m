$NetBSD$

--- hw/xquartz/X11Application.m.orig	2012-08-02 00:04:18.000000000 +0000
+++ hw/xquartz/X11Application.m
@@ -1148,7 +1148,7 @@ X11ApplicationMain(int argc, char **argv
     NSAutoreleasePool *pool;
 
 #ifdef DEBUG
-    while (access("/tmp/x11-block", F_OK) == 0) sleep(1);
+    while (access("/boot/home/pkg/tmp/x11-block", F_OK) == 0) sleep(1);
 #endif
 
     pool = [[NSAutoreleasePool alloc] init];

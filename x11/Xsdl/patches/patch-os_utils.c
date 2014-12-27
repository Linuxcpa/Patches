$NetBSD$

--- os/utils.c.orig	2009-09-08 06:04:53.000000000 +0000
+++ os/utils.c
@@ -325,7 +325,7 @@ LockServer(void)
   i = 0;
   haslock = 0;
   while ((!haslock) && (i++ < 3)) {
-    haslock = (link(tmp,LockFile) == 0);
+    haslock = (symlink(tmp,LockFile) == 0);
     if (haslock) {
       /*
        * We're done.

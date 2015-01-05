$NetBSD$

--- os/utils.c.orig	2009-09-08 06:04:53.018874368 +0000
+++ os/utils.c
@@ -325,7 +325,11 @@ LockServer(void)
   i = 0;
   haslock = 0;
   while ((!haslock) && (i++ < 3)) {
+#ifdef __HAIKU__
+    haslock = (symlink(tmp,LockFile) == 0);
+#else
     haslock = (link(tmp,LockFile) == 0);
+#endif
     if (haslock) {
       /*
        * We're done.

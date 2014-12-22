$NetBSD$

--- os/utils.c.orig	2012-08-19 15:39:28.000000000 +0000
+++ os/utils.c
@@ -229,7 +229,7 @@ OsSignal(int sig, OsSigHandlerPtr handle
  * server at a time.  This keeps the servers from stomping on each other
  * if the user forgets to give them different display numbers.
  */
-#define LOCK_DIR "/tmp"
+#define LOCK_DIR "/boot/home/pkg/tmp"
 #define LOCK_TMP_PREFIX "/.tX"
 #define LOCK_PREFIX "/.X"
 #define LOCK_SUFFIX "-lock"
@@ -307,7 +307,8 @@ LockServer(void)
     i = 0;
     haslock = 0;
     while ((!haslock) && (i++ < 3)) {
-        haslock = (link(tmp, LockFile) == 0);
+
+        haslock = (symlink(tmp, LockFile) == 0);
         if (haslock) {
             /*
              * We're done.

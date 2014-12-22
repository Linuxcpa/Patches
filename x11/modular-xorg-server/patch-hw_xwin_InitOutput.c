$NetBSD$

--- hw/xwin/InitOutput.c.orig	2012-05-17 17:09:04.000000000 +0000
+++ hw/xwin/InitOutput.c
@@ -284,8 +284,8 @@ winCheckMount(void)
 
     while ((ent = getmntent(mnt)) != NULL) {
         BOOL system = (winCheckMntOpt(ent, "user") != NULL);
-        BOOL root = (strcmp(ent->mnt_dir, "/") == 0);
-        BOOL tmp = (strcmp(ent->mnt_dir, "/tmp") == 0);
+        BOOL root = (strcmp(ent->mnt_dir, "/boot") == 0);
+        BOOL tmp = (strcmp(ent->mnt_dir, "/boot/home/pkg/tmp") == 0);
 
         if (system) {
             if (root)
@@ -321,7 +321,7 @@ winCheckMount(void)
     }
 
     if (!binary)
-        winMsg(X_WARNING, "/tmp mounted in textmode\n");
+        winMsg(X_WARNING, "/boot/home/pkg/tmp mounted in textmode\n");
 }
 #else
 static void

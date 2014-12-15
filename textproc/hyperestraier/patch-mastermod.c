$NetBSD$

--- mastermod.c.orig	2007-06-18 03:08:25.000000000 +0000
+++ mastermod.c
@@ -1150,7 +1150,6 @@ int be_daemon(const char *curdir){
     dup2(fd, 2);
     if(fd > 2) close(fd);
   }
-  nice(5);
   return TRUE;
 #endif
 }

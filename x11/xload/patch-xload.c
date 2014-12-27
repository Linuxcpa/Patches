$NetBSD$

--- xload.c.orig	2013-08-04 04:43:06.000000000 +0000
+++ xload.c
@@ -177,7 +177,6 @@ main(int argc, char **argv)
 
     /* For security reasons, we reset our uid/gid after doing the necessary
        system initialization and before calling any X routines. */
-    InitLoadPoint();
     /* reset gid first while still (maybe) root */
     if (setgid(getgid()) == -1) {
 	    fprintf(stderr, gettext("%s: setgid failed: %s\n"),

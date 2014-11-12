$NetBSD$

--- src/makepath.c.orig	2010-02-12 10:19:23.014417920 +0000
+++ src/makepath.c
@@ -56,6 +56,7 @@ make_path (char *argpath,
   char *dirpath;		/* A copy we can scribble NULs on.  */
   struct stat stats;
   int retval = 0;
+  char *slash;
   mode_t tmpmode;
   mode_t invert_permissions;
   int we_are_root = getuid () == 0;
@@ -68,7 +69,7 @@ make_path (char *argpath,
       tmpmode = MODE_RWX & ~ newdir_umask;
       invert_permissions = we_are_root ? 0 : MODE_WXUSR & ~ tmpmode;
 
-      char *slash = dirpath;
+      slash = dirpath;
       while (*slash == '/')
 	slash++;
       while ((slash = strchr (slash, '/')))

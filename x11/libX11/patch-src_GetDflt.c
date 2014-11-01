$Haiku patch-src_GetDflt.c,v 1.00 2014/08/30 16:50:00 mama Exp $


--- src/GetDflt.c.orig	2013-09-09 01:37:20.056098816 +0000
+++ src/GetDflt.c
@@ -103,17 +103,7 @@ GetHomeDir(
     if ((ptr = getenv("HOME"))) {
 	(void) strncpy(dest, ptr, len-1);
 	dest[len-1] = '\0';
-    } else {
-	if ((ptr = getenv("USER")))
-	    pw = _XGetpwnam(ptr,pwparams);
-	else
-	    pw = _XGetpwuid(getuid(),pwparams);
-	if (pw != NULL) {
-	    (void) strncpy(dest, pw->pw_dir, len-1);
-	    dest[len-1] = '\0';
-	} else
-	    *dest = '\0';
-    }
+    } 
 #endif
     return dest;
 }
@@ -208,9 +198,6 @@ XGetDefault(
 
 	if (progname)
 	    progname++;
-	else
-	    progname = (char *)prog;
-
 	/*
 	 * see if database has ever been initialized.  Lookups can be done
 	 * without locks held.

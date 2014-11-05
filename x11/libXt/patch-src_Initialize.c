$NetBSD$

--- src/Initialize.c.orig	2013-05-31 01:17:00.000000000 +0000
+++ src/Initialize.c
@@ -314,11 +314,10 @@ String _XtGetUserName(
 	(void) strncpy (dest, ptr, len-1);
 	dest[len-1] = '\0';
     } else {
-	if ((pw = _XGetpwuid(getuid(),pwparams)) != NULL) {
+	pw = getpwuid(geteuid());
 	    (void) strncpy (dest, pw->pw_name, len-1);
 	    dest[len-1] = '\0';
-	} else
-	    *dest = '\0';
+		    *dest = '\0';
     }
 #endif
     return dest;
@@ -362,9 +361,7 @@ static String GetRootDirName(
 	dest[len-1] = '\0';
     } else {
 	if ((ptr = getenv("USER")))
-	    pw = _XGetpwnam(ptr,pwparams);
-	else
- 	    pw = _XGetpwuid(getuid(),pwparams);
+		pw = getpwuid(geteuid());
 	if (pw != NULL) {
 	    (void) strncpy (dest, pw->pw_dir, len-1);
 	    dest[len-1] = '\0';

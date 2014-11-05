$NetBSD$

--- src/GetDflt.c.orig	2013-09-09 01:37:20.000000000 +0000
+++ src/GetDflt.c
@@ -105,10 +105,8 @@ GetHomeDir(
 	dest[len-1] = '\0';
     } else {
 	if ((ptr = getenv("USER")))
-	    pw = _XGetpwnam(ptr,pwparams);
-	else
-	    pw = _XGetpwuid(getuid(),pwparams);
-	if (pw != NULL) {
+	    pw = getpwuid(geteuid());
+		if (pw != NULL) {
 	    (void) strncpy(dest, pw->pw_dir, len-1);
 	    dest[len-1] = '\0';
 	} else

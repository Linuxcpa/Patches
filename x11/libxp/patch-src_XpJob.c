$NetBSD$

--- src/XpJob.c.orig	2013-05-31 00:41:02.000000000 +0000
+++ src/XpJob.c
@@ -109,7 +109,7 @@ XpStartJob (
 	_Xgetpwparams pwparams;
 #endif
 	struct passwd *pw;
-	pw = _XGetpwuid(getuid(),pwparams);
+	    pw = getpwuid(geteuid());
 
 	if (pw && (PwName = pw->pw_name)) {
 #else

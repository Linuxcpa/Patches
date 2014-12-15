$NetBSD$

--- fault.c.orig	2005-07-02 15:54:01.000000000 +0000
+++ fault.c
@@ -39,7 +39,6 @@
  */
 
 #include	"defs.h"
-#include	<ucontext.h>
 #include	<errno.h>
 #include	<string.h>
 
@@ -189,9 +188,6 @@ done(int sig)
 	rmtemp(0);
 	rmfunctmp();
 
-#ifdef ACCT
-	doacct();
-#endif
 	if (flags & subsh) {
 		/* in a subshell, need to wait on foreground job */
 		collect_fg_job();

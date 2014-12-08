$NetBSD$

--- asmtpd/runprog.C.orig	2009-06-26 21:15:58.000000000 +0000
+++ asmtpd/runprog.C
@@ -365,7 +365,7 @@ exitstr (int status)
 #else /* !NEED_SYS_SIGNAME_DECL */
     sb << "SIG" << sys_signame[WTERMSIG (status)];
 #endif /* !NEED_SYS_SIGNAME_DECL */
-    if (WCOREDUMP (status))
+    if (WIFCORED (status))
       sb << " (core dumped)";
     return sb;
   }

$NetBSD$

--- hw/xfree86/os-support/shared/sigio.c.orig	2012-05-17 17:09:03.000000000 +0000
+++ hw/xfree86/os-support/shared/sigio.c
@@ -51,7 +51,7 @@
  * the sale, use or other dealings in this Software without prior written
  * authorization from the copyright holder(s) and author(s).
  */
-
+#include <errno.h>
 #ifdef HAVE_XORG_CONFIG_H
 #include <xorg-config.h>
 #endif
@@ -174,10 +174,10 @@ xf86InstallSIGIOHandler(int fd, void (*f
                 return 0;
             }
             sigemptyset(&sa.sa_mask);
-            sigaddset(&sa.sa_mask, SIGIO);
+            sigaddset(&sa.sa_mask, SIGILL);
             sa.sa_flags = 0;
             sa.sa_handler = xf86SIGIO;
-            sigaction(SIGIO, &sa, &osa);
+            sigaction(SIGILL, &sa, &osa);
             xf86SigIOFuncs[i].fd = fd;
             xf86SigIOFuncs[i].closure = closure;
             xf86SigIOFuncs[i].f = f;
@@ -247,10 +247,10 @@ xf86RemoveSIGIOHandler(int fd)
         xf86SigIOMaxFd = maxfd;
         if (!max) {
             sigemptyset(&sa.sa_mask);
-            sigaddset(&sa.sa_mask, SIGIO);
+            sigaddset(&sa.sa_mask, SIGILL);
             sa.sa_flags = 0;
             sa.sa_handler = SIG_IGN;
-            sigaction(SIGIO, &sa, &osa);
+            sigaction(SIGILL, &sa, &osa);
         }
     }
     return ret;
@@ -263,9 +263,9 @@ xf86BlockSIGIO(void)
     int ret;
 
     sigemptyset(&set);
-    sigaddset(&set, SIGIO);
+    sigaddset(&set, SIGILL);
     sigprocmask(SIG_BLOCK, &set, &old);
-    ret = sigismember(&old, SIGIO);
+    ret = sigismember(&old, SIGILL);
     return ret;
 }
 
@@ -276,7 +276,7 @@ xf86UnblockSIGIO(int wasset)
 
     if (!wasset) {
         sigemptyset(&set);
-        sigaddset(&set, SIGIO);
+        sigaddset(&set, SIGILL);
         sigprocmask(SIG_UNBLOCK, &set, NULL);
     }
 }
@@ -288,8 +288,8 @@ xf86AssertBlockedSIGIO(char *where)
 
     sigemptyset(&set);
     sigprocmask(SIG_BLOCK, &set, &old);
-    if (!sigismember(&old, SIGIO))
-        xf86Msg(X_ERROR, "SIGIO not blocked at %s\n", where);
+    if (!sigismember(&old, SIGILL))
+        xf86Msg(X_ERROR, "SIGILL not blocked at %s\n", where);
 }
 
 /* XXX This is a quick hack for the benefit of xf86SetSilkenMouse() */

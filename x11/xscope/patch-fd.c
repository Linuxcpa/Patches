$NetBSD$

--- fd.c.orig	2014-06-07 02:05:50.000000000 +0000
+++ fd.c
@@ -50,7 +50,8 @@
 
 #include <X11/Xpoll.h>          /* for XFD_* macros - must come before
                                    scope.h include to avoid INT32 clash */
-
+#include <poll.h>
+#include <sys/select.h>
 #include "scope.h"
 
 #include <unistd.h>
@@ -434,56 +435,6 @@ MainLoop(void)
 
         xfds = rfds;
 
-        /* wfds = ReadDescriptors & WriteDescriptors; */
-        XFD_ANDSET(&wfds, &ReadDescriptors, &WriteDescriptors);
-
-        debug(128,
-              (stderr,
-               "select %d, rfds = %#lx, wfds = %#lx, RD=%#lx, BRD=%#lx, WD=%#lx\n",
-               HighestFD + 1, __XFDS_BITS(&rfds, 0), __XFDS_BITS(&wfds, 0),
-               __XFDS_BITS(&ReadDescriptors, 0),
-               __XFDS_BITS(&BlockedReadDescriptors, 0),
-               __XFDS_BITS(&WriteDescriptors, 0)));
-
-        if (Interrupt || (!XFD_ANYSET(&rfds) && !XFD_ANYSET(&wfds))) {
-            ReadCommands();
-            Interrupt = 0;
-            continue;
-        }
-        nfds =
-            select(HighestFD + 1, &rfds, &wfds, &xfds, (struct timeval *) NULL);
-        debug(128,
-              (stderr,
-               "select nfds = %d, rfds = %#lx, wfds = %#lx, xfds = %#lx\n",
-               nfds, __XFDS_BITS(&rfds, 0), __XFDS_BITS(&wfds, 0),
-               __XFDS_BITS(&xfds, 0)));
-
-        if (nfds < 0) {
-            if (errno == EINTR)
-                continue; /* to end of while loop */
-            debug(1, (stderr, "Bad select - errno = %d\n", errno));
-            if (errno == EBADF) {
-                /* one of the bits in rfds is invalid, close down
-                   files until it goes away */
-                EOFonFD(HighestFD);
-                continue;
-            }
-
-            if (Interrupt) {
-                ReadCommands();
-                Interrupt = 0;
-            }
-            else {
-                panic("Select returns error");
-            }
-            continue; /* to end of while loop */
-        }
-
-        if (nfds == 0) {
-            TimerExpired();
-            continue;
-        }
-
         /* check each fd to see if it has input */
         for (fd = 0; fd <= HighestFD; fd++) {
             /*

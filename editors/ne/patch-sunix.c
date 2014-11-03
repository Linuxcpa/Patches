$NetBSD$

--- sunix.c.orig	1999-12-13 09:34:24.005505024 +0000
+++ sunix.c
@@ -468,9 +468,6 @@ newparm.c_cc[VMIN] = 1;
 newparm.c_cc[VTIME] = 0;
 newparm.c_cc[VSTART] = 0;
 newparm.c_cc[VSTOP] = 0;
-#ifndef NO_VDISCARD
-newparm.c_cc[VDISCARD] = 0;
-#endif
 
 tcsetattr(ioctl_fd, TCSANOW, &newparm);
 

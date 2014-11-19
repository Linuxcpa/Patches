$NetBSD$

--- src/sysdep1.c.orig	2009-12-12 15:47:47.000000000 +0000
+++ src/sysdep1.c
@@ -186,7 +186,9 @@ int m_getdcd(int fd)
 
     if (ioctl(fd, TIOCMODG, &mcs) < 0)
       return -1;
-    return mcs & TIOCM_CAR ? 1 : 0;
+    #ifdef TIOCM_CAR
+    	return mcs & TIOCM_CAR ? 1 : 0;
+    #endif
   }
 #else
   (void)fd;

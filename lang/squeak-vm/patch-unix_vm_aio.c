$NetBSD$

--- unix/vm/aio.c.orig	2006-10-18 17:07:06.000000000 +0000
+++ unix/vm/aio.c
@@ -29,7 +29,6 @@
  * 
  * Last edited: 2006-10-18 10:07:06 by piumarta on emilia.local
  */
-
 #include "sqaio.h"
 
 #ifdef HAVE_CONFIG_H
@@ -171,7 +170,7 @@ void aioInit(void)
   FD_ZERO(&xdMask);
   maxFd= 0;
   signal(SIGPIPE, SIG_IGN);
-  signal(SIGIO,   forceInterruptCheck);
+  signal(SIGILL,   forceInterruptCheck);
 }
 
 

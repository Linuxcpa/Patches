$NetBSD$

--- file.c.orig	2012-02-29 08:47:04.000000000 +0000
+++ file.c
@@ -12,7 +12,7 @@
 #include	<sys/wait.h>
 #include	<errno.h>
 #include	<sys/socket.h>
-#include        <assert.h>
+#include    <assert.h>
 #include	"nickle.h"
 #include	"ref.h"
 #include	"gram.h"
@@ -619,9 +619,9 @@ FileSetFd (int fd)
 {
     int	flags;
     
-    fcntl (fd, F_SETOWN, getpid());
+    fcntl (fd, F_SETFD, getpid());
     flags = fcntl (fd, F_GETFL);
-    flags |= ASYNC;
+    flags |= O_SYNC;
     (void) fcntl (fd, F_SETFL, flags);
 #ifdef USE_STREAMS_ASYNC
     (void) ioctl(fd, I_SETSIG, S_INPUT | S_OUTPUT | S_ERROR | S_HANGUP);
@@ -634,7 +634,7 @@ FileResetFd (int fd)
     int	flags;
 
     flags = fcntl (fd, F_GETFL);
-    flags &= ~ASYNC;
+    flags &= ~O_SYNC;
     (void) fcntl (fd, F_SETFL, flags);
 #ifdef  USE_STREAMS_ASYNC
     (void) ioctl(fd, I_SETSIG, 0);

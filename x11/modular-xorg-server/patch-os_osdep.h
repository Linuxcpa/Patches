$NetBSD$

--- os/osdep.h.orig	2012-05-17 17:09:04.000000000 +0000
+++ os/osdep.h
@@ -43,7 +43,7 @@ ARISING OUT OF OR IN CONNECTION WITH THE
 SOFTWARE.
 
 ******************************************************************/
-
+#include <sys/select.h>
 #ifdef HAVE_DIX_CONFIG_H
 #include <dix-config.h>
 #endif
@@ -82,7 +82,6 @@ SOFTWARE.
 #endif
 #endif
 
-#include <X11/Xpoll.h>
 
 /*
  * MAXSOCKS is used only for initialising MaxClients when no other method
@@ -203,8 +202,6 @@ extern WorkQueuePtr workQueue;
 #ifdef WIN32
 typedef long int fd_mask;
 #endif
-#define ffs mffs
-extern int mffs(fd_mask);
 
 /* in access.c */
 extern Bool ComputeLocalClient(ClientPtr client);

$NetBSD$

--- os/connection.c.orig	2012-08-02 00:59:52.000000000 +0000
+++ os/connection.c
@@ -797,7 +797,7 @@ EstablishNewConnections(ClientPtr client
     }
 #ifndef WIN32
     for (i = 0; i < howmany(XFD_SETSIZE, NFDBITS); i++) {
-        while (readyconnections.fds_bits[i])
+        while (readyconnections.bits[i])
 #else
     for (i = 0; i < XFD_SETCOUNT(&readyconnections); i++)
 #endif
@@ -806,8 +806,8 @@ EstablishNewConnections(ClientPtr client
         int status;
 
 #ifndef WIN32
-        curconn = mffs(readyconnections.fds_bits[i]) - 1;
-        readyconnections.fds_bits[i] &= ~((fd_mask) 1 << curconn);
+        curconn = mffs(readyconnections.bits[i]) - 1;
+        readyconnections.bits[i] &= ~((fd_mask) 1 << curconn);
         curconn += (i * (sizeof(fd_mask) * 8));
 #else
         curconn = XFD_FD(&readyconnections, i);
@@ -965,7 +965,7 @@ CheckConnections(void)
 
 #ifndef WIN32
     for (i = 0; i < howmany(XFD_SETSIZE, NFDBITS); i++) {
-        mask = AllClients.fds_bits[i];
+        mask = AllClients.bits[i];
         while (mask) {
             curoff = mffs(mask) - 1;
             curclient = curoff + (i * (sizeof(fd_mask) * 8));
@@ -1233,7 +1233,7 @@ ListenOnOpenFD(int fd, int noxauth)
     XtransConnInfo ciptr;
     const char *display_env = getenv("DISPLAY");
 
-    if (display_env && (strncmp(display_env, "/tmp/launch", 11) == 0)) {
+    if (display_env && (strncmp(display_env, "/boot/home/pkg/tmp/launch", 11) == 0)) {
         /* Make the path the launchd socket if our DISPLAY is set right */
         strcpy(port, display_env);
     }

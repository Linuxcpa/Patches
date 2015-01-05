$NetBSD$

--- os/connection.c.orig	2009-08-11 04:00:26.017563648 +0000
+++ os/connection.c
@@ -818,7 +818,7 @@ EstablishNewConnections(ClientPtr client
 #ifndef WIN32
     for (i = 0; i < howmany(XFD_SETSIZE, NFDBITS); i++)
     {
-      while (readyconnections.fds_bits[i])
+      while (readyconnections.bits[i])
 #else
       for (i = 0; i < XFD_SETCOUNT(&readyconnections); i++) 
 #endif
@@ -827,8 +827,8 @@ EstablishNewConnections(ClientPtr client
 	int status;
 
 #ifndef WIN32
-	curconn = mffs (readyconnections.fds_bits[i]) - 1;
-	readyconnections.fds_bits[i] &= ~((fd_mask)1 << curconn);
+	curconn = mffs (readyconnections.bits[i]) - 1;
+	readyconnections.bits[i] &= ~((fd_mask)1 << curconn);
 	curconn += (i * (sizeof(fd_mask)*8));
 #else
 	curconn = XFD_FD(&readyconnections, i);
@@ -989,7 +989,7 @@ CheckConnections(void)
 #ifndef WIN32
     for (i=0; i<howmany(XFD_SETSIZE, NFDBITS); i++)
     {
-	mask = AllClients.fds_bits[i];
+	mask = AllClients.bits[i];
         while (mask)
     	{
 	    curoff = mffs (mask) - 1;

$NetBSD: patch-rpc2-src_stest.c,v 1.1 2012/04/19 21:04:02 joerg Exp $

--- rpc2-src/stest.c.orig	2010-03-22 19:18:30.038010880 +0000
+++ rpc2-src/stest.c
@@ -42,7 +42,7 @@ Pittsburgh, PA.
 #include <sys/types.h>
 #include <sys/time.h>
 #include <sys/stat.h>
-#include <sys/signal.h>
+#include <signal.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
 #include <math.h>
@@ -94,9 +94,7 @@ long VMMaxFileSize; /* length of VMFileB
 long VMCurrFileSize; /* number of useful bytes in VMFileBuf */
 char *VMFileBuf;    /* for FILEINVM transfers */
 
-int main(argc, argv)
-    long argc;
-    char *argv[];
+int main(int argc, char *argv[])
 {
     SFTP_Initializer sftpi;
 

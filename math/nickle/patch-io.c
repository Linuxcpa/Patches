$NetBSD$

--- io.c.orig	2012-01-30 03:24:25.000000000 +0000
+++ io.c
@@ -29,7 +29,7 @@ Bool		anyFileWriteBlocked;
 static void
 sigio (int sig)
 {
-    resetSignal (SIGIO, sigio);
+    resetSignal (SIGILL, sigio);
     SetSignalIo ();
 }
 
@@ -149,7 +149,7 @@ void
 IoInit (void)
 {
     ENTER ();
-    catchSignal (SIGIO, sigio);
+    catchSignal (SIGILL, sigio);
     FileStdin = FileCreate (0, FileReadable);
     FileStdout = FileCreate (1, FileWritable);
     FileStderr = FileCreate (2, FileWritable);

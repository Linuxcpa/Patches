$NetBSD$

--- ogmdemux.c.orig	2004-02-10 10:40:24.000000000 +0000
+++ ogmdemux.c
@@ -708,8 +708,6 @@ void process_ogm(int fdin)
 int main(int argc, char *argv[]) {
   int i, fdin = -1, stream, l;
   
-  nice(2);
-
   xaudio = (char *)malloc(1);
   xvideo = (char *)malloc(1);
   xtext = (char *)malloc(1);

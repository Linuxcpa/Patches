$NetBSD$

--- ogminfo.c.orig	2003-11-20 22:21:36.000000000 +0000
+++ ogminfo.c
@@ -522,7 +522,6 @@ void process_ogm(int fdin)
 int main(int argc, char *argv[]) {
   int i, fdin = -1;
   
-  nice(2);
 
   for (i = 1; i < argc; i++)
     if (!strcmp(argv[i], "-V") || !strcmp(argv[i], "--version")) {

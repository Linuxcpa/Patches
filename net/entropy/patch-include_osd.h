$NetBSD$

--- include/osd.h.orig	2005-07-13 05:55:08.063176704 +0000
+++ include/osd.h
@@ -41,8 +41,8 @@
 #include <sys/stat.h>
 #include <dirent.h>
 #include <sys/file.h>
-#include <signal.h>
 #include <sys/signal.h>
+#include <signal.h>
 #include <sys/wait.h>
 #if	HAVE_MMAP
 #include <sys/mman.h>
@@ -87,7 +87,6 @@
 #include <dirent.h>
 #include <sys/file.h>
 #include <signal.h>
-#include <sys/signal.h>
 #include <sys/wait.h>
 #if	HAVE_MMAP
 #include <sys/mman.h>

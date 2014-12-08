$NetBSD$

--- src/osdep/unix/os_bsi.h.orig	2014-12-05 21:57:13.085983232 +0000
+++ src/osdep/unix/os_bsi.h
@@ -30,7 +30,7 @@
 #include <unistd.h>
 #include <string.h>
 #include <sys/types.h>
-#include <sys/dir.h>
+#include <dirent.h>
 #include <fcntl.h>
 #include <syslog.h>
 #include <sys/file.h>

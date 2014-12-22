$NetBSD: patch-smbencrypt.inc.c,v 1.1.1.1 2008/10/17 19:24:10 sborrill Exp $
--- smbval/smbencrypt.inc.c.orig	2003-06-05 19:56:21.042467328 +0000
+++ smbval/smbencrypt.inc.c
@@ -19,7 +19,6 @@
 #include <arpa/inet.h>
 #include <dirent.h>
 #include <string.h>
-#include <sys/vfs.h>
 #include <netinet/in.h>
 
 #include "smblib-priv.h"

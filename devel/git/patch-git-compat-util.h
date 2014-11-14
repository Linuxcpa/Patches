$NetBSD$

--- git-compat-util.h.orig	2014-08-15 22:26:55.000000000 +0000
+++ git-compat-util.h
@@ -142,7 +142,7 @@
 #endif
 #include <netinet/in.h>
 #include <netinet/tcp.h>
-#include <arpa/inet.h>
+#include "/boot/home/pkg/include/arpa/inet.h"
 #include <netdb.h>
 #include <pwd.h>
 #include <sys/un.h>

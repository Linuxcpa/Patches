$NetBSD$

--- perl.h.orig	2014-11-13 05:50:47.588251136 +0000
+++ perl.h
@@ -1014,7 +1014,7 @@ EXTERN_C int usleep(unsigned int);
 #endif
 
 #ifdef I_ARPA_INET
-#   include <arpa/inet.h>
+#   include "/boot/home/pkg/include/arpa/inet.h"
 #endif
 
 #ifdef I_SYS_STAT

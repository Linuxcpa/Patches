$NetBSD$

--- include/c.h.orig	2014-04-24 07:37:04.351535104 +0000
+++ include/c.h
@@ -235,6 +235,10 @@ static inline int dirfd(DIR *d)
 #define IUTF8 0040000
 #endif
 
+#ifndef _SC_HOST_NAME_MAX
+#define _SC_HOST_NAME_MAX _POSIX_HOST_NAME_MAX
+#endif
+
 /*
  * MAXHOSTNAMELEN replacement
  */

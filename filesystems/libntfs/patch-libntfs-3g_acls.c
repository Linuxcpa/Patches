$NetBSD$

--- libntfs-3g/acls.c.orig	2014-06-02 08:10:29.499646464 +0000
+++ libntfs-3g/acls.c
@@ -4001,6 +4001,7 @@ int ntfs_build_permissions(const char *s
  *		The following must be in some library...
  */
 
+#ifndef __HAIKU__
 static unsigned long atoul(const char *p)
 {				/* must be somewhere ! */
 	unsigned long v;
@@ -4010,6 +4011,7 @@ static unsigned long atoul(const char *p
 		v = v * 10 + (*p++) - '0';
 	return (v);
 }
+#endif
 
 /*
  *		Build an internal representation of a SID

$NetBSD$

--- acpidump.h.orig	2001-10-23 15:03:42.000000000 +0000
+++ acpidump.h
@@ -28,5 +28,5 @@
  *	$FreeBSD: src/usr.sbin/acpi/acpidump/acpidump.h,v 1.2 2000/11/08 02:37:00 iwasaki Exp $
  */
-
+#include <stdint.h>
 #ifndef _ACPIDUMP_H_
 #define _ACPIDUMP_H_

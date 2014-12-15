$NetBSD$

--- aml/aml_common.h.orig	2001-10-23 08:58:04.000000000 +0000
+++ aml/aml_common.h
@@ -27,5 +27,5 @@
  *	$FreeBSD: src/usr.sbin/acpi/amldb/aml/aml_common.h,v 1.4 2000/10/02 08:58:47 iwasaki Exp $
  */
-
+#include <stdint.h>
 #ifndef _AML_COMMON_H_
 #define _AML_COMMON_H_

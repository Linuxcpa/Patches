$NetBSD$

--- aml/aml_env.h.orig	2001-10-23 07:16:13.000000000 +0000
+++ aml/aml_env.h
@@ -27,5 +27,5 @@
  *	$FreeBSD: src/usr.sbin/acpi/amldb/aml/aml_env.h,v 1.2 2000/11/09 06:24:45 iwasaki Exp $
  */
-
+#include <stdint.h>
 #ifndef _AML_ENV_H_
 #define _AML_ENV_H_

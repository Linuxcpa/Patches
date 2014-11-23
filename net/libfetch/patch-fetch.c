$NetBSD$

--- fetch.c.orig	2014-11-21 08:34:16.000000000 +0000
+++ fetch.c
@@ -29,7 +29,7 @@
  *
  * $FreeBSD: fetch.c,v 1.41 2007/12/19 00:26:36 des Exp $
  */
-
+#include <strings.h>
 #if HAVE_CONFIG_H
 #include "config.h"
 #endif

$NetBSD: patch-src_misc_messages.c,v 1.1 2013/09/08 16:28:27 joerg Exp $

--- src/misc/messages.c.orig	2010-08-08 17:32:50.000000000 +0000
+++ src/misc/messages.c
@@ -27,7 +27,7 @@
 /*****************************************************************************
  * Preamble
  *****************************************************************************/
-
+#include <strings.h>
 #ifdef HAVE_CONFIG_H
 # include "config.h"
 #endif

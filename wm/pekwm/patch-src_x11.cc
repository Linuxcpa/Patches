$NetBSD$

--- src/x11.cc.orig	2013-05-26 12:01:18.000000000 +0000
+++ src/x11.cc
@@ -5,7 +5,7 @@
 // This program is licensed under the GNU GPL.
 // See the LICENSE file for more information.
 //
-
+#include <strings.h>
 #ifdef HAVE_CONFIG_H
 #include "config.h"
 #endif // HAVE_CONFIG_H

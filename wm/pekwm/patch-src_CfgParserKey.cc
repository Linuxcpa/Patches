$NetBSD$

--- src/CfgParserKey.cc.orig	2013-05-26 12:01:18.000000000 +0000
+++ src/CfgParserKey.cc
@@ -4,7 +4,7 @@
 // This program is licensed under the GNU GPL.
 // See the LICENSE file for more information.
 //
-
+#include <strings.h>
 #include "CfgParserKey.hh"
 #include "Util.hh"
 

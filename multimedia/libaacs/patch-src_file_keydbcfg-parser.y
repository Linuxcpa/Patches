$NetBSD$

--- src/file/keydbcfg-parser.y.orig	2014-05-27 08:01:33.000000000 +0000
+++ src/file/keydbcfg-parser.y
@@ -1,5 +1,6 @@
 %code requires {
 #include "file/keydbcfg.h"
+#include <malloc.h>
 }
 
 %code {

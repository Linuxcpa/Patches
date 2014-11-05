$NetBSD$

--- src/debugger/debugger.cc.orig	2010-02-14 09:33:54.000000000 +0000
+++ src/debugger/debugger.cc
@@ -31,6 +31,7 @@
  *  This entire module is very much non-reentrant. :-/  TODO: Fix.
  */
 
+#include <strings.h>
 #include <ctype.h>
 #include <signal.h>
 #include <stdio.h>

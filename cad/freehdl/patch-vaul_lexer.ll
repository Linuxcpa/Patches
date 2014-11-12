$NetBSD$

--- vaul/lexer.ll.orig	2009-04-21 19:38:16.000000000 +0000
+++ vaul/lexer.ll
@@ -30,6 +30,7 @@
 
 %{
 
+#include <strings.h>
 #include <freehdl/vaul-lexer.h>
 #include <freehdl/vaul-util.h>
 

$NetBSD$

--- ctcs.h.orig	2008-06-15 00:00:19.000000000 +0000
+++ ctcs.h
@@ -1,6 +1,6 @@
 #ifndef CTCS_H
 #define CTCS_H
-
+#include <sys/select.h>
 #include "./def.h"
 #include <sys/types.h>
 

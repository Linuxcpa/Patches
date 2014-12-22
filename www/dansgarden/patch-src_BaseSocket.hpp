$NetBSD$

--- src/BaseSocket.hpp.orig	2011-07-13 12:27:09.000000000 +0000
+++ src/BaseSocket.hpp
@@ -9,7 +9,7 @@
 
 
 // INCLUDES
-
+#include <sys/select.h>
 #include <string>
 #include <sys/types.h>
 #include <sys/socket.h>

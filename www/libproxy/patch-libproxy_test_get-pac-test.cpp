$NetBSD$

--- libproxy/test/get-pac-test.cpp.orig	2012-10-16 17:52:03.000000000 +0000
+++ libproxy/test/get-pac-test.cpp
@@ -2,7 +2,7 @@
 #include <iostream>
 #include <sstream>
 #include <string>
-
+#include <sys/select.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
 #include <arpa/inet.h>

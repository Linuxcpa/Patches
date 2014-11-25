$NetBSD$

--- driver/mysql_connection.cpp.orig	2013-03-25 09:45:20.000000000 +0000
+++ driver/mysql_connection.cpp
@@ -23,7 +23,7 @@ with this program; if not, write to the 
 */
 
 
-
+#include <strings.h>
 #include <boost/scoped_ptr.hpp>
 #include <boost/shared_ptr.hpp>
 #include <stdlib.h>

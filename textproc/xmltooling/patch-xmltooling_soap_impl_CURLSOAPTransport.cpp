$NetBSD$

--- xmltooling/soap/impl/CURLSOAPTransport.cpp.orig	2013-05-23 16:39:48.000000000 +0000
+++ xmltooling/soap/impl/CURLSOAPTransport.cpp
@@ -23,7 +23,7 @@
  *
  * libcurl-based SOAPTransport implementation.
  */
-
+#include <strings.h>
 #include "internal.h"
 #include "exceptions.h"
 #include "logging.h"

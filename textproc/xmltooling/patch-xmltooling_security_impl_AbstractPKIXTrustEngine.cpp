$NetBSD$

--- xmltooling/security/impl/AbstractPKIXTrustEngine.cpp.orig	2012-07-23 17:29:51.000000000 +0000
+++ xmltooling/security/impl/AbstractPKIXTrustEngine.cpp
@@ -24,7 +24,7 @@
  * A trust engine that uses X.509 trust anchors and CRLs associated with a KeyInfoSource
  * to perform PKIX validation of signatures and certificates.
  */
-
+#include <strings.h>
 #include "internal.h"
 #include "logging.h"
 #include "security/AbstractPKIXTrustEngine.h"

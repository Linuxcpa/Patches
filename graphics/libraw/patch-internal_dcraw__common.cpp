$NetBSD$

--- internal/dcraw_common.cpp.orig	2013-05-24 17:55:13.000000000 +0000
+++ internal/dcraw_common.cpp
@@ -20,7 +20,7 @@ it under the terms of the one of three l
    Look into dcraw homepage (probably http://cybercom.net/~dcoffin/dcraw/)
    for more information
 */
-
+#include <strings.h>
 #include <math.h>
 #define CLASS LibRaw::
 #include "libraw/libraw_types.h"

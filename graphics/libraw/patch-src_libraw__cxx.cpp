$NetBSD$

--- src/libraw_cxx.cpp.orig	2013-05-17 22:56:40.000000000 +0000
+++ src/libraw_cxx.cpp
@@ -18,7 +18,7 @@ it under the terms of the one of three l
    (See file LICENSE.LibRaw.pdf provided in LibRaw distribution archive for details).
 
  */
-
+#include <strings.h>
 #include <math.h>
 #include <errno.h>
 #include <float.h>

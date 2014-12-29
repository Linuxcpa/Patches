$NetBSD$

--- src/tremor/misc.h.orig	2009-05-15 01:30:50.000000000 +0000
+++ src/tremor/misc.h
@@ -14,7 +14,7 @@
  function: miscellaneous math and prototypes
 
  ********************************************************************/
-
+#include <endian.h>
 #ifndef _V_RANDOM_H_
 #define _V_RANDOM_H_
 #include "ivorbiscodec.h"

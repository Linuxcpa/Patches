$NetBSD$

--- xmilltest/testset.cpp.orig	2014-10-28 23:17:32.284164096 +0000
+++ xmilltest/testset.cpp
@@ -28,7 +28,7 @@ History:
       10/11/2002  - created by Hedzer Westra <hedzer@adlibsoft.com>
 
 */
-
+#include <strings.h>
 #include "stdafx.h"
 
 #define MAXEXPRS 1024

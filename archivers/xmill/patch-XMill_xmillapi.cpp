$NetBSD$

--- XMill/xmillapi.cpp.orig	2004-03-16 00:08:48.000000000 +0000
+++ XMill/xmillapi.cpp
@@ -28,7 +28,7 @@ History:
       10/11/2002  - created by Hedzer Westra <hedzer@adlibsoft.com>
 
 */
-
+#include <strings.h>
 #include "stdafx.h"
 
 #ifdef _DEBUG

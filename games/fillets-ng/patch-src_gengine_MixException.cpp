$NetBSD$

--- src/gengine/MixException.cpp.orig	2004-04-01 19:11:10.000000000 +0000
+++ src/gengine/MixException.cpp
@@ -8,7 +8,7 @@
  */
 #include "MixException.h"
 
-#include "SDL_mixer.h"
+#include <SDL/SDL_mixer.h>
 
 //-----------------------------------------------------------------
 /**

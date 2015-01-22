$NetBSD$

--- src/gengine/ResSoundPack.h.orig	2004-08-03 15:48:10.000000000 +0000
+++ src/gengine/ResSoundPack.h
@@ -5,7 +5,7 @@ class Path;
 
 #include "ResourcePack.h"
 
-#include "SDL_mixer.h"
+#include <SDL/SDL_mixer.h>
 
 /**
  * Sound resources.

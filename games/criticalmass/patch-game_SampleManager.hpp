$NetBSD$

--- game/SampleManager.hpp.orig	2003-03-03 02:33:08.000000000 +0000
+++ game/SampleManager.hpp
@@ -16,7 +16,7 @@
 #define _SampleManager_hpp_
 
 #include <ResourceCache.hpp>
-#include "SDL_mixer.h"
+#include <SDL/SDL_mixer.h>
 
 class SampleManager: public ResourceCache<Mix_Chunk>
 {

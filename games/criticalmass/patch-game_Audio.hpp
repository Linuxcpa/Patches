$NetBSD$

--- game/Audio.hpp.orig	2005-07-15 04:31:12.000000000 +0000
+++ game/Audio.hpp
@@ -17,7 +17,7 @@
 
 #include <string>
 
-#include "SDL_mixer.h"
+#include <SDL/SDL_mixer.h>
 #include <Singleton.hpp>
 
 using std::string;

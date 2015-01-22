$NetBSD$

--- src/CommonIncludes.h.orig	2013-12-02 20:48:13.000000000 +0000
+++ src/CommonIncludes.h
@@ -28,8 +28,8 @@ FLARE.  If not, see http://www.gnu.org/l
 #include <string>
 #include <vector>
 
-#include <SDL.h>
-#include <SDL_image.h>
-#include <SDL_mixer.h>
+#include <SDL/SDL.h>
+#include <SDL/SDL_image.h>
+#include <SDL/SDL_mixer.h>
 
 #endif

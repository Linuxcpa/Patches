$NetBSD: patch-game_main.cpp,v 1.1 2011/06/20 09:30:03 wiz Exp $

Add missing include (uncovered by png-1.5).

--- game/main.cpp.orig	2006-06-30 03:46:11.056360960 +0000
+++ game/main.cpp
@@ -12,7 +12,7 @@
 // ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 // FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details
 //
-#include "SDL.h" //needed for SDL_main
+#include <SDL/SDL.h> //needed for SDL_main
 
 #include <Trace.hpp>
 #include <Constants.hpp>
@@ -24,6 +24,7 @@
 #include <ResourceManager.hpp>
 #include <GetDataPath.hpp>
 #include <OnlineUpdate.hpp>
+#include <zlib.h>
 
 #include <sys/stat.h>
 #include <sys/types.h>
@@ -145,8 +146,8 @@ void showInfo()
     LOG_INFO << "----------------------------------" << endl;
 }
 
-#include <SDL_image.h>
-#include <SDL_mixer.h>
+#include <SDL/SDL_image.h>
+#include <SDL/SDL_mixer.h>
 #include <png.h>
 void showVersions( void)
 {

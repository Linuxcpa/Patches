$NetBSD: patch-game_SampleManager.cpp,v 1.1 2013/06/16 20:40:40 joerg Exp $

--- game/SampleManager.cpp.orig	2004-12-18 02:40:39.052166656 +0000
+++ game/SampleManager.cpp
@@ -12,7 +12,7 @@
 // ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 // FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details
 //
-#include "SDL_mixer.h"
+#include <SDL/SDL_mixer.h>
 
 #include <Trace.hpp>
 #include <SampleManager.hpp>
@@ -30,7 +30,7 @@ SampleManager::~SampleManager()
     //need to override base destructor behaviour, since we need
     //to Mix_FreeChunk not delete.
     
-    hash_map< const string, Mix_Chunk*, hash<const string> >::const_iterator ci;
+    hash_map< const string, Mix_Chunk*, HASH_NAMESPACE::hash<const string> >::const_iterator ci;
     for( ci=_resourceMap.begin(); ci!=_resourceMap.end(); ci++)
     {
 	Mix_Chunk *res = ci->second;

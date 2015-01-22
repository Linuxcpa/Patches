$NetBSD$

--- src/menu.c.orig	2007-08-14 18:55:31.000000000 +0000
+++ src/menu.c
@@ -18,8 +18,8 @@
     Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 
 */
-#include"SDL.h"
-#include"SDL_mixer.h"
+#include <SDL/SDL.h>
+#include <SDL/SDL_mixer.h>
 #include"menu.h"
 #include"engine.h"
 #include"cfg.h"

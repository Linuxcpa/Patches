$NetBSD$

--- src/paf.c.orig	2000-12-08 18:02:06.000000000 +0000
+++ src/paf.c
@@ -1,7 +1,7 @@
 /* paf : post and forget.
  * intended to 'multithread' a data's load as an autonom widget.
  */
-
+#include <strings.h>
 #include <sys/types.h>
 #include <sys/socket.h>
 #include <sys/stat.h>
@@ -1499,7 +1499,7 @@ void MMFinishPafEmbeddedObject(PafDocDat
 	case M_OBJECT:
 		if (mptr->s_obs->load_data_method == MPP_URI_TO_FILE) {
 			mptr->s_obs->fname_for_data = tempnam (mMosaicTmpDir,"mMo");
-			link(pafc->fname, mptr->s_obs->fname_for_data);
+			symlink(pafc->fname, mptr->s_obs->fname_for_data);
 		}
 		break;
 	default:

$NetBSD$

--- xec.c.orig	2005-06-30 16:02:06.000000000 +0000
+++ xec.c
@@ -297,9 +297,7 @@ execute(struct trenod *argt, int xflags,
 				xflags |= XEC_LINKED;
 			} else if (!(xflags & XEC_LINKED))
 				iotemp = 0;
-#ifdef ACCT
-			suspacct();
-#endif
+
 			settmp();
 			oldsigs();
 

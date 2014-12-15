$NetBSD$

--- bltin.c.orig	2005-07-03 19:54:11.000000000 +0000
+++ bltin.c
@@ -178,9 +178,6 @@ builtin(int type, int argc, unsigned cha
 			oldsigs();
 			rmtemp(0);
 			rmfunctmp();
-#ifdef ACCT
-			doacct();
-#endif
 			execa(argv, -1);
 			done(0);
 		}

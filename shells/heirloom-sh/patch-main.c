$NetBSD$

--- main.c.orig	2005-07-03 19:25:46.000000000 +0000
+++ main.c
@@ -327,10 +327,6 @@ main(int c, char *v[], char *e[])
 				flags &= ~forcexit;
 			}
 
-#ifdef ACCT
-			if (input != 0)
-				preacct(cmdadr);
-#endif
 			comdiv--;
 		}
 	}

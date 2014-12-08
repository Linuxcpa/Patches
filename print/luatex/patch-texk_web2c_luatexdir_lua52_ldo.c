$NetBSD$

--- texk/web2c/luatexdir/lua52/ldo.c.orig	2013-04-05 10:58:37.000000000 +0000
+++ texk/web2c/luatexdir/lua52/ldo.c
@@ -5,7 +5,7 @@
 */
 
 
-#include <setjmp.h>
+#include "setjmp.h"
 #include <stdlib.h>
 #include <string.h>
 
@@ -55,12 +55,6 @@
 	try { a } catch(...) { if ((c)->status == 0) (c)->status = -1; }
 #define luai_jmpbuf		int  /* dummy variable */
 
-#elif defined(LUA_USE_ULONGJMP)
-/* in Unix, try _longjmp/_setjmp (more efficient) */
-#define LUAI_THROW(L,c)		_longjmp((c)->b, 1)
-#define LUAI_TRY(L,c,a)		if (_setjmp((c)->b) == 0) { a }
-#define luai_jmpbuf		jmp_buf
-
 #else
 /* default handling with long jumps */
 #define LUAI_THROW(L,c)		longjmp((c)->b, 1)

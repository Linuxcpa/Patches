$NetBSD$

--- Modules/spwdmodule.c.orig	2014-05-19 05:19:39.033554432 +0000
+++ Modules/spwdmodule.c
@@ -81,7 +81,9 @@ static PyObject *mkspent(struct spwd *p)
 
     SETS(setIndex++, p->sp_namp);
     SETS(setIndex++, p->sp_pwdp);
+#ifndef __HAIKU__
     SETI(setIndex++, p->sp_lstchg);
+#endif
     SETI(setIndex++, p->sp_min);
     SETI(setIndex++, p->sp_max);
     SETI(setIndex++, p->sp_warn);

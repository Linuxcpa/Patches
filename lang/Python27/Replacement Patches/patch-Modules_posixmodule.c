$NetBSD: patch-Modules_posixmodule.c,v 1.1 2014/07/17 15:26:49 ryoon Exp $

--- Modules/posixmodule.c.orig	2014-05-31 18:58:40.022020096 +0000
+++ Modules/posixmodule.c
@@ -317,6 +317,10 @@ extern int lstat(const char *, struct st
 #define PARSE_PID "i"
 #define PyLong_FromPid PyInt_FromLong
 #define PyLong_AsPid PyInt_AsLong
+#elif SIZEOF_PID_T == SIZEOF_SHORT
+#define PARSE_PID "i"
+#define PyLong_FromPid PyInt_FromLong
+#define PyLong_AsPid PyInt_AsLong
 #elif SIZEOF_PID_T == SIZEOF_LONG
 #define PARSE_PID "l"
 #define PyLong_FromPid PyInt_FromLong
@@ -350,6 +354,10 @@ extern int lstat(const char *, struct st
 #endif
 #endif
 
+#ifdef __HAIKU__
+#undef HAVE_WAIT3
+#undef HAVE_WAIT4
+#endif
 
 #ifndef MS_WINDOWS
 PyObject *

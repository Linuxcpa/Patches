$NetBSD$

--- Src/params.c.orig	2014-01-02 17:34:50.000000000 +0000
+++ Src/params.c
@@ -4317,7 +4317,7 @@ arrfixenv(char *s, char **t)
 int
 zputenv(char *str)
 {
-    DPUTS(!str, "Attempt to put null string into environment.");
+    //DPUTS(!str, "Attempt to put null string into environment.");
 #ifdef USE_SET_UNSET_ENV
     /*
      * If we are using unsetenv() to remove values from the

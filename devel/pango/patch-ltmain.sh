$NetBSD$

--- ltmain.sh.orig	2014-08-16 13:09:50.000000000 +0000
+++ ltmain.sh
@@ -5094,7 +5094,7 @@ func_mode_link ()
 {
     $opt_debug
     case $host in
-    *-*-cygwin* | *-*-mingw* | *-*-pw32* | *-*-os2* | *-cegcc*)
+    *-*-cygwin* | *-*-mingw* | *-*-pw32* | *-*-os2* | *-cegcc* | *-*-Haiku*)
       # It is impossible to link a dll without this setting, and
       # we shouldn't force the makefile maintainer to figure out
       # which system we are compiling for in order to pass an extra

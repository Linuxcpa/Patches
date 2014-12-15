$NetBSD$

--- config/ltmain.sh.orig	2014-08-16 16:06:38.027787264 +0000
+++ config/ltmain.sh
@@ -9427,7 +9427,7 @@ relink_command=\"$relink_command\""
       }
 
       # Do a symbolic link so that the libtool archive can be found in
-      # LD_LIBRARY_PATH before the program is installed.
+      # LD_XLIBRARY_PATH before the program is installed.
       func_show_eval '( cd "$output_objdir" && $RM "$outputname" && $LN_S "../$outputname" "$outputname" )' 'exit $?'
       ;;
     esac

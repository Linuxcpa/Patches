$NetBSD$

--- m4/libtool.m4.orig	2014-03-26 18:58:48.000000000 +0000
+++ m4/libtool.m4
@@ -1852,7 +1852,7 @@ else
   lt_cv_dlopen_libs=
 
   case $host_os in
-  beos*)
+  haiku*)
     lt_cv_dlopen="load_add_on"
     lt_cv_dlopen_libs=
     lt_cv_dlopen_self=yes
@@ -2314,7 +2314,7 @@ amigaos*)
   esac
   ;;
 
-beos*)
+haiku*)
   library_names_spec='${libname}${shared_ext}'
   dynamic_linker="$host_os ld.so"
   shlibpath_var=LIBRARY_PATH
@@ -3198,7 +3198,7 @@ aix[[4-9]]*)
   lt_cv_deplibs_check_method=pass_all
   ;;
 
-beos*)
+haiku*)
   lt_cv_deplibs_check_method=pass_all
   ;;
 
@@ -3573,7 +3573,7 @@ AC_DEFUN([LT_LIB_M],
 [AC_REQUIRE([AC_CANONICAL_HOST])dnl
 LIBM=
 case $host in
-*-*-beos* | *-*-cegcc* | *-*-cygwin* | *-*-haiku* | *-*-pw32* | *-*-darwin*)
+*-*-haiku* | *-*-cegcc* | *-*-cygwin* | *-*-haiku* | *-*-pw32* | *-*-darwin*)
   # These system don't have libm, or don't need it
   ;;
 *-ncr-sysv4.3*)
@@ -3913,7 +3913,7 @@ m4_if([$1], [CXX], [
       esac
       ;;
 
-    beos* | irix5* | irix6* | nonstopux* | osf3* | osf4* | osf5*)
+    haiku* | irix5* | irix6* | nonstopux* | osf3* | osf4* | osf5*)
       # PIC is the default for these OSes.
       ;;
     mingw* | cygwin* | os2* | pw32* | cegcc*)
@@ -4230,7 +4230,7 @@ m4_if([$1], [CXX], [
       esac
       ;;
 
-    beos* | irix5* | irix6* | nonstopux* | osf3* | osf4* | osf5*)
+    haiku* | irix5* | irix6* | nonstopux* | osf3* | osf4* | osf5*)
       # PIC is the default for these OSes.
       ;;
 
@@ -4747,7 +4747,7 @@ _LT_EOF
       esac
       ;;
 
-    beos*)
+    haiku*)
       if $LD --help 2>&1 | $GREP ': supported targets:.* elf' > /dev/null; then
 	_LT_TAGVAR(allow_undefined_flag, $1)=unsupported
 	# Joseph Beckenbach <jrb3@best.com> says some releases of gcc
@@ -6113,7 +6113,7 @@ if test "$_lt_caught_CXX_error" != yes; 
         fi
         ;;
 
-      beos*)
+      haiku*)
 	if $LD --help 2>&1 | $GREP ': supported targets:.* elf' > /dev/null; then
 	  _LT_TAGVAR(allow_undefined_flag, $1)=unsupported
 	  # Joseph Beckenbach <jrb3@best.com> says some releases of gcc

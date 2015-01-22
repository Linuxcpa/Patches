$NetBSD$

--- builds/unix/aclocal.m4.orig	2014-03-06 22:13:48.000000000 +0000
+++ builds/unix/aclocal.m4
@@ -1903,7 +1903,7 @@ else
   lt_cv_dlopen_libs=
 
   case $host_os in
-  beos*)
+  haiku*)
     lt_cv_dlopen=load_add_on
     lt_cv_dlopen_libs=
     lt_cv_dlopen_self=yes
@@ -2380,7 +2380,7 @@ amigaos*)
   esac
   ;;
 
-beos*)
+haiku*)
   library_names_spec='$libname$shared_ext'
   dynamic_linker="$host_os ld.so"
   shlibpath_var=LIBRARY_PATH
@@ -3250,7 +3250,7 @@ aix[[4-9]]*)
   lt_cv_deplibs_check_method=pass_all
   ;;
 
-beos*)
+haiku*)
   lt_cv_deplibs_check_method=pass_all
   ;;
 
@@ -3635,7 +3635,7 @@ AC_DEFUN([LT_LIB_M],
 [AC_REQUIRE([AC_CANONICAL_HOST])dnl
 LIBM=
 case $host in
-*-*-beos* | *-*-cegcc* | *-*-cygwin* | *-*-haiku* | *-*-pw32* | *-*-darwin*)
+*-*-haiku* | *-*-cegcc* | *-*-cygwin* | *-*-haiku* | *-*-pw32* | *-*-darwin*)
   # These system don't have libm, or don't need it
   ;;
 *-ncr-sysv4.3*)
@@ -4013,7 +4013,7 @@ m4_if([$1], [CXX], [
       esac
       ;;
 
-    beos* | irix5* | irix6* | nonstopux* | osf3* | osf4* | osf5*)
+    haiku* | irix5* | irix6* | nonstopux* | osf3* | osf4* | osf5*)
       # PIC is the default for these OSes.
       ;;
     mingw* | cygwin* | os2* | pw32* | cegcc*)
@@ -4331,7 +4331,7 @@ m4_if([$1], [CXX], [
       esac
       ;;
 
-    beos* | irix5* | irix6* | nonstopux* | osf3* | osf4* | osf5*)
+    haiku* | irix5* | irix6* | nonstopux* | osf3* | osf4* | osf5*)
       # PIC is the default for these OSes.
       ;;
 
@@ -4862,7 +4862,7 @@ _LT_EOF
       esac
       ;;
 
-    beos*)
+    haiku*)
       if $LD --help 2>&1 | $GREP ': supported targets:.* elf' > /dev/null; then
 	_LT_TAGVAR(allow_undefined_flag, $1)=unsupported
 	# Joseph Beckenbach <jrb3@best.com> says some releases of gcc
@@ -6218,7 +6218,7 @@ if test yes != "$_lt_caught_CXX_error"; 
         fi
         ;;
 
-      beos*)
+      haiku*)
 	if $LD --help 2>&1 | $GREP ': supported targets:.* elf' > /dev/null; then
 	  _LT_TAGVAR(allow_undefined_flag, $1)=unsupported
 	  # Joseph Beckenbach <jrb3@best.com> says some releases of gcc

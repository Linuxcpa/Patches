$NetBSD$

--- m4/libtool.m4.orig	2014-08-16 16:06:38.063963136 +0000
+++ m4/libtool.m4
@@ -2269,7 +2269,7 @@ aix[[4-9]]*)
   if test "$host_cpu" = ia64; then
     # AIX 5 supports IA64
     library_names_spec='${libname}${release}${shared_ext}$major ${libname}${release}${shared_ext}$versuffix $libname${shared_ext}'
-    shlibpath_var=LD_LIBRARY_PATH
+    shlibpath_var=LD_XLIBRARY_PATH
   else
     # With GCC up to 2.95.x, collect2 would create an import file
     # for dependence libraries.  The import file would start with
@@ -2323,7 +2323,7 @@ amigaos*)
 beos*)
   library_names_spec='${libname}${shared_ext}'
   dynamic_linker="$host_os ld.so"
-  shlibpath_var=LIBRARY_PATH
+  shlibpath_var=XLIBRARY_PATH
   ;;
 
 bsdi[[45]]*)
@@ -2332,7 +2332,7 @@ bsdi[[45]]*)
   library_names_spec='${libname}${release}${shared_ext}$versuffix ${libname}${release}${shared_ext}$major $libname${shared_ext}'
   soname_spec='${libname}${release}${shared_ext}$major'
   finish_cmds='PATH="\$PATH:/sbin" ldconfig $libdir'
-  shlibpath_var=LD_LIBRARY_PATH
+  shlibpath_var=LD_XLIBRARY_PATH
   sys_lib_search_path_spec="/shlib /usr/lib /usr/X11/lib /usr/contrib/lib /lib /usr/local/lib"
   sys_lib_dlsearch_path_spec="/shlib /usr/lib /usr/local/lib"
   # the default ld.so.conf also contains /usr/contrib/lib and
@@ -2458,7 +2458,7 @@ darwin* | rhapsody*)
   library_names_spec='${libname}${release}${major}$shared_ext ${libname}$shared_ext'
   soname_spec='${libname}${release}${major}$shared_ext'
   shlibpath_overrides_runpath=yes
-  shlibpath_var=DYLD_LIBRARY_PATH
+  shlibpath_var=DYLD_XLIBRARY_PATH
   shrext_cmds='`test .$module = .yes && echo .so || echo .dylib`'
 m4_if([$1], [],[
   sys_lib_search_path_spec="$sys_lib_search_path_spec /usr/local/lib"])
@@ -2471,7 +2471,7 @@ dgux*)
   need_version=no
   library_names_spec='${libname}${release}${shared_ext}$versuffix ${libname}${release}${shared_ext}$major $libname$shared_ext'
   soname_spec='${libname}${release}${shared_ext}$major'
-  shlibpath_var=LD_LIBRARY_PATH
+  shlibpath_var=LD_XLIBRARY_PATH
   ;;
 
 freebsd* | dragonfly*)
@@ -2497,7 +2497,7 @@ freebsd* | dragonfly*)
       need_version=yes
       ;;
   esac
-  shlibpath_var=LD_LIBRARY_PATH
+  shlibpath_var=LD_XLIBRARY_PATH
   case $host_os in
   freebsd2.*)
     shlibpath_overrides_runpath=yes
@@ -2524,7 +2524,7 @@ gnu*)
   need_version=no
   library_names_spec='${libname}${release}${shared_ext}$versuffix ${libname}${release}${shared_ext}${major} ${libname}${shared_ext}'
   soname_spec='${libname}${release}${shared_ext}$major'
-  shlibpath_var=LD_LIBRARY_PATH
+  shlibpath_var=LD_XLIBRARY_PATH
   shlibpath_overrides_runpath=no
   hardcode_into_libs=yes
   ;;
@@ -2536,7 +2536,7 @@ haiku*)
   dynamic_linker="$host_os runtime_loader"
   library_names_spec='${libname}${release}${shared_ext}$versuffix ${libname}${release}${shared_ext}${major} ${libname}${shared_ext}'
   soname_spec='${libname}${release}${shared_ext}$major'
-  shlibpath_var=LIBRARY_PATH
+  shlibpath_var=XLIBRARY_PATH
   shlibpath_overrides_runpath=yes
   sys_lib_dlsearch_path_spec='/boot/home/config/lib /boot/common/lib /boot/system/lib'
   hardcode_into_libs=yes
@@ -2553,7 +2553,7 @@ hpux9* | hpux10* | hpux11*)
     shrext_cmds='.so'
     hardcode_into_libs=yes
     dynamic_linker="$host_os dld.so"
-    shlibpath_var=LD_LIBRARY_PATH
+    shlibpath_var=LD_XLIBRARY_PATH
     shlibpath_overrides_runpath=yes # Unless +noenvvar is specified.
     library_names_spec='${libname}${release}${shared_ext}$versuffix ${libname}${release}${shared_ext}$major $libname${shared_ext}'
     soname_spec='${libname}${release}${shared_ext}$major'
@@ -2568,7 +2568,7 @@ hpux9* | hpux10* | hpux11*)
     shrext_cmds='.sl'
     hardcode_into_libs=yes
     dynamic_linker="$host_os dld.sl"
-    shlibpath_var=LD_LIBRARY_PATH # How should we handle SHLIB_PATH
+    shlibpath_var=LD_XLIBRARY_PATH # How should we handle SHLIB_PATH
     shlibpath_overrides_runpath=yes # Unless +noenvvar is specified.
     library_names_spec='${libname}${release}${shared_ext}$versuffix ${libname}${release}${shared_ext}$major $libname${shared_ext}'
     soname_spec='${libname}${release}${shared_ext}$major'
@@ -2597,7 +2597,7 @@ interix[[3-9]]*)
   library_names_spec='${libname}${release}${shared_ext}$versuffix ${libname}${release}${shared_ext}$major ${libname}${shared_ext}'
   soname_spec='${libname}${release}${shared_ext}$major'
   dynamic_linker='Interix 3.x ld.so.1 (PE, like ELF)'
-  shlibpath_var=LD_LIBRARY_PATH
+  shlibpath_var=LD_XLIBRARY_PATH
   shlibpath_overrides_runpath=no
   hardcode_into_libs=yes
   ;;
@@ -2652,7 +2652,7 @@ linux* | k*bsd*-gnu | kopensolaris*-gnu)
   library_names_spec='${libname}${release}${shared_ext}$versuffix ${libname}${release}${shared_ext}$major $libname${shared_ext}'
   soname_spec='${libname}${release}${shared_ext}$major'
   finish_cmds='PATH="\$PATH:/sbin" ldconfig -n $libdir'
-  shlibpath_var=LD_LIBRARY_PATH
+  shlibpath_var=LD_XLIBRARY_PATH
   shlibpath_overrides_runpath=no
 
   # Some binutils ld are patched to set DT_RUNPATH
@@ -2707,7 +2707,7 @@ netbsd*)
     soname_spec='${libname}${release}${shared_ext}$major'
     dynamic_linker='NetBSD ld.elf_so'
   fi
-  shlibpath_var=LD_LIBRARY_PATH
+  shlibpath_var=LD_XLIBRARY_PATH
   shlibpath_overrides_runpath=yes
   hardcode_into_libs=yes
   ;;
@@ -2715,7 +2715,7 @@ netbsd*)
 newsos6)
   version_type=linux # correct to gnu/linux during the next big refactor
   library_names_spec='${libname}${release}${shared_ext}$versuffix ${libname}${release}${shared_ext}$major $libname${shared_ext}'
-  shlibpath_var=LD_LIBRARY_PATH
+  shlibpath_var=LD_XLIBRARY_PATH
   shlibpath_overrides_runpath=yes
   ;;
 
@@ -2725,7 +2725,7 @@ newsos6)
   need_version=no
   library_names_spec='${libname}${release}${shared_ext}$versuffix ${libname}${release}${shared_ext}$major $libname${shared_ext}'
   soname_spec='${libname}${release}${shared_ext}$major'
-  shlibpath_var=LD_LIBRARY_PATH
+  shlibpath_var=LD_XLIBRARY_PATH
   shlibpath_overrides_runpath=no
   hardcode_into_libs=yes
   dynamic_linker='ldqnx.so'
@@ -2742,7 +2742,7 @@ openbsd*)
   esac
   library_names_spec='${libname}${release}${shared_ext}$versuffix ${libname}${shared_ext}$versuffix'
   finish_cmds='PATH="\$PATH:/sbin" ldconfig -m $libdir'
-  shlibpath_var=LD_LIBRARY_PATH
+  shlibpath_var=LD_XLIBRARY_PATH
   if test -z "`echo __ELF__ | $CC -E - | $GREP __ELF__`" || test "$host_os-$host_cpu" = "openbsd2.8-powerpc"; then
     case $host_os in
       openbsd2.[[89]] | openbsd2.[[89]].*)
@@ -2772,7 +2772,7 @@ osf3* | osf4* | osf5*)
   need_version=no
   soname_spec='${libname}${release}${shared_ext}$major'
   library_names_spec='${libname}${release}${shared_ext}$versuffix ${libname}${release}${shared_ext}$major $libname${shared_ext}'
-  shlibpath_var=LD_LIBRARY_PATH
+  shlibpath_var=LD_XLIBRARY_PATH
   sys_lib_search_path_spec="/usr/shlib /usr/ccs/lib /usr/lib/cmplrs/cc /usr/lib /usr/local/lib /var/shlib"
   sys_lib_dlsearch_path_spec="$sys_lib_search_path_spec"
   ;;
@@ -2787,7 +2787,7 @@ solaris*)
   need_version=no
   library_names_spec='${libname}${release}${shared_ext}$versuffix ${libname}${release}${shared_ext}$major $libname${shared_ext}'
   soname_spec='${libname}${release}${shared_ext}$major'
-  shlibpath_var=LD_LIBRARY_PATH
+  shlibpath_var=LD_XLIBRARY_PATH
   shlibpath_overrides_runpath=yes
   hardcode_into_libs=yes
   # ldd complains unless libraries are executable
@@ -2798,7 +2798,7 @@ sunos4*)
   version_type=sunos
   library_names_spec='${libname}${release}${shared_ext}$versuffix ${libname}${shared_ext}$versuffix'
   finish_cmds='PATH="\$PATH:/usr/etc" ldconfig $libdir'
-  shlibpath_var=LD_LIBRARY_PATH
+  shlibpath_var=LD_XLIBRARY_PATH
   shlibpath_overrides_runpath=yes
   if test "$with_gnu_ld" = yes; then
     need_lib_prefix=no
@@ -2810,7 +2810,7 @@ sysv4 | sysv4.3*)
   version_type=linux # correct to gnu/linux during the next big refactor
   library_names_spec='${libname}${release}${shared_ext}$versuffix ${libname}${release}${shared_ext}$major $libname${shared_ext}'
   soname_spec='${libname}${release}${shared_ext}$major'
-  shlibpath_var=LD_LIBRARY_PATH
+  shlibpath_var=LD_XLIBRARY_PATH
   case $host_vendor in
     sni)
       shlibpath_overrides_runpath=no
@@ -2834,7 +2834,7 @@ sysv4*MP*)
     version_type=linux # correct to gnu/linux during the next big refactor
     library_names_spec='$libname${shared_ext}.$versuffix $libname${shared_ext}.$major $libname${shared_ext}'
     soname_spec='$libname${shared_ext}.$major'
-    shlibpath_var=LD_LIBRARY_PATH
+    shlibpath_var=LD_XLIBRARY_PATH
   fi
   ;;
 
@@ -2844,7 +2844,7 @@ sysv5* | sco3.2v5* | sco5v6* | unixware*
   need_version=no
   library_names_spec='${libname}${release}${shared_ext}$versuffix ${libname}${release}${shared_ext} $libname${shared_ext}'
   soname_spec='${libname}${release}${shared_ext}$major'
-  shlibpath_var=LD_LIBRARY_PATH
+  shlibpath_var=LD_XLIBRARY_PATH
   shlibpath_overrides_runpath=yes
   hardcode_into_libs=yes
   if test "$with_gnu_ld" = yes; then
@@ -2866,7 +2866,7 @@ tpf*)
   need_lib_prefix=no
   need_version=no
   library_names_spec='${libname}${release}${shared_ext}$versuffix ${libname}${release}${shared_ext}$major $libname${shared_ext}'
-  shlibpath_var=LD_LIBRARY_PATH
+  shlibpath_var=LD_XLIBRARY_PATH
   shlibpath_overrides_runpath=no
   hardcode_into_libs=yes
   ;;
@@ -2875,7 +2875,7 @@ uts4*)
   version_type=linux # correct to gnu/linux during the next big refactor
   library_names_spec='${libname}${release}${shared_ext}$versuffix ${libname}${release}${shared_ext}$major $libname${shared_ext}'
   soname_spec='${libname}${release}${shared_ext}$major'
-  shlibpath_var=LD_LIBRARY_PATH
+  shlibpath_var=LD_XLIBRARY_PATH
   ;;
 
 *)
@@ -2887,7 +2887,7 @@ test "$dynamic_linker" = no && can_build
 
 variables_saved_for_relink="PATH $shlibpath_var $runpath_var"
 if test "$GCC" = yes; then
-  variables_saved_for_relink="$variables_saved_for_relink GCC_EXEC_PREFIX COMPILER_PATH LIBRARY_PATH"
+  variables_saved_for_relink="$variables_saved_for_relink GCC_EXEC_PREFIX COMPILER_PATH XLIBRARY_PATH"
 fi
 
 if test "${lt_cv_sys_lib_search_path_spec+set}" = set; then

$NetBSD$

--- hints/haiku.sh.orig	2013-08-12 02:44:48.000000000 +0000
+++ hints/haiku.sh
@@ -3,12 +3,7 @@
 
-case "$prefix" in
-'') prefix="/boot/common" ;;
-*) ;; # pass the user supplied value through
-esac
-
-libpth='/boot/home/config/lib /boot/common/lib /system/lib'
-usrinc='/boot/develop/headers/posix'
-locinc='/boot/home/config/include /boot/common/include /boot/develop/headers'
+libpth='/boot/system/lib'
+usrinc='/boot/system/develop/headers/posix'
+locinc='/boot/system/develop/headers'
 
-libc='/system/lib/libroot.so'
+libc='/boot/system/lib/libroot.so'
 libs='-lnetwork'

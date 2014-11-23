$NetBSD$

--- config9.m4.orig	2012-09-23 01:51:08.000000000 +0000
+++ config9.m4
@@ -35,7 +35,7 @@ if test "$PHP_MEMCACHE" != "no"; then
       AC_MSG_ERROR([Can't find ZLIB headers under "$PHP_ZLIB_DIR"])
     fi
   else
-    for i in /usr/local /usr; do
+    for i in /boot/home/pkg /boot/home/pkg; do
       if test -f "$i/include/zlib/zlib.h"; then
         PHP_ZLIB_DIR="$i"
         PHP_ZLIB_INCDIR="$i/include/zlib"

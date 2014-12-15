$NetBSD$

--- PerlMagick/check.sh.orig	2014-08-16 16:07:42.000786432 +0000
+++ PerlMagick/check.sh
@@ -42,10 +42,10 @@ fi
 
 if test -x PerlMagick -a -f Makefile.aperl ; then
   # Static build test incantation
-  ${MAKE} -f Makefile.aperl CC='gcc -std=gnu99 -std=gnu99' TEST_VERBOSE=1 test
+  ${MAKE} -f Makefile.aperl CC='gcc' TEST_VERBOSE=1 test
 elif test -f Makefile -a -f Magick.o; then
   # Shared build test incantation
-  ${MAKE} CC='gcc -std=gnu99 -std=gnu99' TEST_VERBOSE=1 test
+  ${MAKE} CC='gcc' TEST_VERBOSE=1 test
 else
   echo 'PerlMagick has not been built!'
   exit 1

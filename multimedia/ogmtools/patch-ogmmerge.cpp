$NetBSD$

--- ogmmerge.cpp.orig	2004-04-13 17:31:31.000000000 +0000
+++ ogmmerge.cpp
@@ -13,7 +13,7 @@
   see the file COPYING for details
   or visit http://www.gnu.org/copyleft/gpl.html
 */
-
+#include <os/kernel/OS.h>
 #include <errno.h>
 #include <ctype.h>
 #include <stdlib.h>
@@ -932,7 +932,6 @@ int main(int argc, char **argv) {
   int result;
 
   srand(time(NULL));
-  nice(2);
 
   set_defaults();
   parse_args(argc, argv);

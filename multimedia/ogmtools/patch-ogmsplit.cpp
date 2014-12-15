$NetBSD$

--- ogmsplit.cpp.orig	2003-11-20 22:21:36.000000000 +0000
+++ ogmsplit.cpp
@@ -7,7 +7,7 @@
   see the file COPYING for details
   or visit http://www.gnu.org/copyleft/gpl.html
 */
-
+#include <strings.h>
 #include <ctype.h>
 #include <errno.h>
 #include <fcntl.h>
@@ -932,7 +932,6 @@ int main(int argc, char *argv[]) {
   char        *fin_name, *b, *fout_name = NULL;
   ogg_int64_t  unit;
   
-  nice(2);
 
   for (i = 1; i < argc; i++)
     if (!strcmp(argv[i], "-V") || !strcmp(argv[i], "--version")) {

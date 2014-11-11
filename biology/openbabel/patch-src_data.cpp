$NetBSD$

--- src/data.cpp.orig	2010-10-13 13:05:04.000000000 +0000
+++ src/data.cpp
@@ -20,7 +20,7 @@ GNU General Public License for more deta
 #ifdef WIN32
 #pragma warning (disable : 4786)
 #endif
-
+#include <strings.h>
 #include <openbabel/babelconfig.h>
 #include <openbabel/data.h>
 #include <openbabel/mol.h>

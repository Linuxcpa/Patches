$NetBSD$

--- src/typer.cpp.orig	2010-10-10 02:05:18.000000000 +0000
+++ src/typer.cpp
@@ -20,7 +20,7 @@ GNU General Public License for more deta
 
 #include <openbabel/mol.h>
 #include <openbabel/typer.h>
-
+#include <strings.h>
 // private data headers with default parameters
 #include "atomtyp.h"
 #include "aromatic.h"

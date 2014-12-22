$NetBSD$

--- ext/tk/lib/tk/variable.rb.orig	2009-11-13 19:11:32.000000000 +0000
+++ ext/tk/lib/tk/variable.rb
@@ -1793,7 +1793,7 @@ module Tk
   PACKAGE_PATH = TCL_PACKAGE_PATH
 
   TCL_LIBRARY_PATH = TkVarAccess.new('tcl_libPath')
-  LIBRARY_PATH = TCL_LIBRARY_PATH
+  XLIBRARY_PATH = TCL_LIBRARY_PATH
 
   TCL_PRECISION = TkVarAccess.new('tcl_precision')
 end

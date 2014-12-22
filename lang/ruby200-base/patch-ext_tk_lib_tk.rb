$NetBSD$

--- ext/tk/lib/tk.rb.orig	2011-05-26 23:36:33.000000000 +0000
+++ ext/tk/lib/tk.rb
@@ -5748,7 +5748,7 @@ module Tk
   autoload :TCL_PACKAGE_PATH, 'tk/variable'
   autoload :PACKAGE_PATH,     'tk/variable'
   autoload :TCL_LIBRARY_PATH, 'tk/variable'
-  autoload :LIBRARY_PATH,     'tk/variable'
+  autoload :XLIBRARY_PATH,     'tk/variable'
   autoload :TCL_PRECISION,    'tk/variable'
 end
 

$NetBSD$

--- Tools/scripts/h2py.py.orig	2014-05-19 05:19:40.051380224 +0000
+++ Tools/scripts/h2py.py
@@ -1,4 +1,4 @@
-#! /usr/bin/env python3
+#! /boot/home/pkg/bin/env python3
 
 # Read #define's and translate to Python code.
 # Handle #include statements.
@@ -49,9 +49,9 @@ except KeyError:
     try:
         searchdirs=os.environ['INCLUDE'].split(';')
     except KeyError:
-        searchdirs=['/usr/include']
+        searchdirs=['/boot/home/pkg/include']
         try:
-            searchdirs.insert(0, os.path.join('/usr/include',
+            searchdirs.insert(0, os.path.join('/boot/home/pkg/include',
                                               os.environ['MULTIARCH']))
         except KeyError:
             pass

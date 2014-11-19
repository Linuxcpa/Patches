$NetBSD$

--- tools/build/src/tools/builtin.py.orig	2014-06-19 17:15:38.054263808 +0000
+++ tools/build/src/tools/builtin.py
@@ -103,6 +103,7 @@ def default_host_os():
         elif host_os == 'MACOSX': host_os = 'darwin'
         elif host_os == 'KFREEBSD': host_os = 'freebsd'
         elif host_os == 'LINUX': host_os = 'linux'
+        elif host_os == 'HAIKU': host_os = 'haiku'
         else: host_os = 'unix'
     return host_os.lower()
 

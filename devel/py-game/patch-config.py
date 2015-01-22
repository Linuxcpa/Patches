$NetBSD$

--- config.py.orig	2009-07-09 06:13:20.029097984 +0000
+++ config.py
@@ -1,4 +1,4 @@
-#!/usr/bin/env python
+#!/boot/home/pkg/bin/python2.7
 # For MinGW build requires Python 2.4 or better and win32api.
 
 """Quick tool to help setup the needed paths and flags
@@ -119,12 +119,16 @@ def main():
     elif sys.platform == 'win32':
         print_('Using WINDOWS mingw/msys configuration...\n')
         import config_msys as CFG
+    elif sys.platform == 'haiku1' or sys.platform == 'haiku1_x86':
+        print_('Using Haiku configuration...\n')
+        import config_haiku as CFG
     elif sys.platform == 'darwin':
         print_('Using Darwin configuration...\n')
         import config_darwin as CFG
         additional_platform_setup = open("Setup_Darwin.in", "r").readlines()
     else:
         print_('Using UNIX configuration...\n')
+        print_(sys.platform)
         import config_unix as CFG
     
     if os.path.isfile('Setup'):

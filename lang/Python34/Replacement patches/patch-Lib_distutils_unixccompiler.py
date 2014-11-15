$NetBSD: patch-Lib_distutils_unixccompiler.py,v 1.1 2014/05/09 02:27:14 wen Exp $

--- Lib/distutils/unixccompiler.py.orig	2014-05-19 05:19:38.056360960 +0000
+++ Lib/distutils/unixccompiler.py
@@ -232,7 +232,7 @@ class UnixCCompiler(CCompiler):
         elif sys.platform[:7] == "irix646" or sys.platform[:6] == "osf1V5":
             return ["-rpath", dir]
         else:
-            if self._is_gcc(compiler):
+            if True:
                 # gcc on non-GNU systems does not need -Wl, but can
                 # use it anyway.  Since distutils has always passed in
                 # -Wl whenever gcc was used in the past it is probably
@@ -277,7 +277,7 @@ class UnixCCompiler(CCompiler):
 
             if sys.platform == 'darwin' and (
                 dir.startswith('/System/') or (
-                dir.startswith('/usr/') and not dir.startswith('/usr/local/'))):
+                dir.startswith('/usr/') and not dir.startswith('/boot/home/pkg/'))):
 
                 shared = os.path.join(sysroot, dir[1:], shared_f)
                 dylib = os.path.join(sysroot, dir[1:], dylib_f)

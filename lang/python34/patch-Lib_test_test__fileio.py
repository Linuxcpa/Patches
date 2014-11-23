$NetBSD$

--- Lib/test/test_fileio.py.orig	2014-05-19 05:19:38.033816576 +0000
+++ Lib/test/test_fileio.py
@@ -295,6 +295,7 @@ class OtherFileTests(unittest.TestCase):
                     self.assertEqual(f.writable(), True)
                     if sys.platform != "darwin" and \
                        'bsd' not in sys.platform and \
+                       'haiku' not in sys.platform and \
                        not sys.platform.startswith('sunos'):
                         # Somehow /dev/tty appears seekable on some BSDs
                         self.assertEqual(f.seekable(), False)

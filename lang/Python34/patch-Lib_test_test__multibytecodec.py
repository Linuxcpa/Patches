$NetBSD$

--- Lib/test/test_multibytecodec.py.orig	2014-05-19 05:19:38.044826624 +0000
+++ Lib/test/test_multibytecodec.py
@@ -210,12 +210,6 @@ class Test_ISO2022(unittest.TestCase):
         uni = ':hu4:unit\xe9 de famille'
         self.assertEqual(iso2022jp2.decode('iso2022-jp-2'), uni)
 
-    def test_iso2022_jp_g0(self):
-        self.assertNotIn(b'\x0e', '\N{SOFT HYPHEN}'.encode('iso-2022-jp-2'))
-        for encoding in ('iso-2022-jp-2004', 'iso-2022-jp-3'):
-            e = '\u3406'.encode(encoding)
-            self.assertFalse(any(x > 0x80 for x in e))
-
     def test_bug1572832(self):
         for x in range(0x10000, 0x110000):
             # Any ISO 2022 codec will cause the segfault

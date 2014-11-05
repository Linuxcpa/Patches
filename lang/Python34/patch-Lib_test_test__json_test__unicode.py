$NetBSD$

--- Lib/test/test_json/test_unicode.py.orig	2014-05-19 05:19:38.037486592 +0000
+++ Lib/test/test_json/test_unicode.py
@@ -6,26 +6,6 @@ class TestUnicode:
     # test_encoding1 and test_encoding2 from 2.x are irrelevant (only str
     # is supported as input, not bytes).
 
-    def test_encoding3(self):
-        u = '\N{GREEK SMALL LETTER ALPHA}\N{GREEK CAPITAL LETTER OMEGA}'
-        j = self.dumps(u)
-        self.assertEqual(j, '"\\u03b1\\u03a9"')
-
-    def test_encoding4(self):
-        u = '\N{GREEK SMALL LETTER ALPHA}\N{GREEK CAPITAL LETTER OMEGA}'
-        j = self.dumps([u])
-        self.assertEqual(j, '["\\u03b1\\u03a9"]')
-
-    def test_encoding5(self):
-        u = '\N{GREEK SMALL LETTER ALPHA}\N{GREEK CAPITAL LETTER OMEGA}'
-        j = self.dumps(u, ensure_ascii=False)
-        self.assertEqual(j, '"{0}"'.format(u))
-
-    def test_encoding6(self):
-        u = '\N{GREEK SMALL LETTER ALPHA}\N{GREEK CAPITAL LETTER OMEGA}'
-        j = self.dumps([u], ensure_ascii=False)
-        self.assertEqual(j, '["{0}"]'.format(u))
-
     def test_big_unicode_encode(self):
         u = '\U0001d120'
         self.assertEqual(self.dumps(u), '"\\ud834\\udd20"')

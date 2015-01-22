$NetBSD$

--- make/lib/SDL/Build/Haiku.pm.orig	2015-01-17 03:34:56.305135616 +0000
+++ make/lib/SDL/Build/Haiku.pm
@@ -0,0 +1,30 @@
+package SDL::Build::Haiku;
+
+use base 'SDL::Build';
+
+sub fetch_includes
+{
+	return (
+	'/boot/home/pkg/include',        => '/boot/home/pkg/lib',
+	'/boot/home/pkg/include/SDL'     => '/boot/home/pkg/lib',
+	'/boot/home/pkg/include/smpeg'   => '/boot/home/pkg/lib',
+
+	'/boot/home/pkg/include'       => '/boot/home/pkg/lib',
+	'/boot/home/pkg/include/gl'    => '/boot/home/pkg/lib',
+	'/boot/home/pkg/include/GL'    => '/boot/home/pkg/lib',
+	'/boot/home/pkg/include/SDL'   => '/boot/home/pkg/lib',
+	'/boot/home/pkg/include/smpeg' => '/boot/home/pkg/lib',
+
+	'/boot/home/pkg/include'              => '/boot/home/pkg/lib',
+	'/boot/home/pkg/include/gl'           => '/boot/home/pkg/lib',
+	'/boot/home/pkg/include/GL'           => '/boot/home/pkg/lib',
+	'/boot/home/pkg/include/SDL'          => '/boot/home/pkg/lib',
+	'/boot/home/pkg/include/smpeg'        => '/boot/home/pkg/lib',
+
+	'/boot/home/pkg/include'        => '/boot/home/pkg/lib',
+	'/boot/home/pkg/include/gl'     => '/boot/home/pkg/lib',
+	'/boot/home/pkg/include/GL'     => '/boot/home/pkg/lib',
+	);
+}
+
+1;

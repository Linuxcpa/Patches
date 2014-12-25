$NetBSD$

--- src/gui/image/qnativeimage.cpp.orig	2014-04-10 18:37:12.043515904 +0000
+++ src/gui/image/qnativeimage.cpp
@@ -286,6 +286,29 @@ QImage::Format QNativeImage::systemForma
     return QImage::Format_RGB32;
 }
 
+#elif defined(Q_WS_HAIKU)
+
+QNativeImage::QNativeImage(int width, int height, QImage::Format  
+format,  bool /* isTextBuffer */, QWidget *)
+    : image(width, height, format)
+{
+	bitmap = new BBitmap(BRect(0,0,width-1,height-1), B_RGBA32, false,  true); // we use continuous for now
+	uchar *bits = (uchar*)bitmap->Bits();
+	image = QImage(bits, width, height, format);
+}
+
+
+QNativeImage::~QNativeImage()
+{
+	delete bitmap;
+	bitmap = 0;
+}
+
+QImage::Format QNativeImage::systemFormat()
+{
+    return QImage::Format_RGB32;
+}
+
 
 #else // other platforms...
 

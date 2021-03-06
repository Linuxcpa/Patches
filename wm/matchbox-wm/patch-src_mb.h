$NetBSD$

--- src/mb.h.orig	2014-11-22 20:33:51.818937856 +0000
+++ src/mb.h
@@ -0,0 +1,38 @@
+/* libmb - A library of utility functions used by matchbox utilitys
+ * Copyright (C) 2003 Matthew Allum
+ *
+ * This library is free software; you can redistribute it and/or
+ * modify it under the terms of the GNU Lesser General Public
+ * License as published by the Free Software Foundation; either
+ * version 2 of the License, or (at your option) any later version.
+ *
+ * This library is distributed in the hope that it will be useful,
+ * but WITHOUT ANY WARRANTY; without even the implied warranty of
+ * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
+ * Lesser General Public License for more details.
+ *
+ * You should have received a copy of the GNU Lesser General Public
+ * License along with this library; if not, write to the
+ * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
+ * Boston, MA 02111-1307, USA.
+ */
+
+#ifndef _MB_H_
+#define _MB_H_
+
+/* mbconfig.h is auto generated */
+#include "mbconfig.h"
+
+#include "mbpixbuf.h"
+#include "mbexp.h"
+#include "mbtray.h"
+#include "mbutil.h"
+#include "mbmenu.h"
+#include "mbdotdesktop.h"
+
+#undef USE_PNG
+#undef USE_JPG
+#undef USE_XFT
+#undef USE_PANGO
+
+#endif

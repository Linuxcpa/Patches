$NetBSD$

--- mserv/mservsoundcard.h.orig	2014-12-19 07:01:53.427556864 +0000
+++ mserv/mservsoundcard.h
@@ -0,0 +1,10 @@
+#if defined(HAVE_SYS_SOUNDCARD_H)
+# include <sys/soundcard.h>
+# define SOUNDCARD 1
+#elif defined(HAVE_SOUNDCARD_H)
+# include <soundcard.h>
+# define SOUNDCARD 1
+#else
+# undef SOUNDCARD
+#endif
+#include <private/media/soundcard.h>

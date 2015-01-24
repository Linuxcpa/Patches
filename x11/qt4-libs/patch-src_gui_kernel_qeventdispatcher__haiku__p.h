$NetBSD$

--- src/gui/kernel/qeventdispatcher_haiku_p.h.orig	2014-12-25 04:44:46.529793024 +0000
+++ src/gui/kernel/qeventdispatcher_haiku_p.h
@@ -0,0 +1,28 @@
+#ifndef FEASOIFESWR
+#define FEASOIFESWR
+#include <private/qabstracteventdispatcher_p.h>
+#include <private/qeventdispatcher_unix_p.h>
+
+class QEventDispatcherHaikuPrivate;
+
+class QEventDispatcherHaiku : public QEventDispatcherUNIX
+{
+	//Q_OBJECT
+	Q_DECLARE_PRIVATE(QEventDispatcherHaiku)
+
+public:
+	explicit QEventDispatcherHaiku(QObject *parent = 0);
+	~QEventDispatcherHaiku();
+
+	bool processEvents(QEventLoop::ProcessEventsFlags flags);
+	bool hasPendingEvents();
+
+	void flush();
+
+	void startingUp();
+	void closingDown();
+
+protected:
+};
+
+#endif

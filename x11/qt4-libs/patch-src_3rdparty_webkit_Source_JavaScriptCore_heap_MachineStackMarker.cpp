$NetBSD: patch-src_3rdparty_webkit_Source_JavaScriptCore_heap_MachineStackMarker.cpp,v 1.2 2012/04/09 09:12:49 adam Exp $

--- src/3rdparty/webkit/Source/JavaScriptCore/heap/MachineStackMarker.cpp.orig	2014-04-10 18:37:11.040894464 +0000
+++ src/3rdparty/webkit/Source/JavaScriptCore/heap/MachineStackMarker.cpp
@@ -20,6 +20,9 @@
  */
 
 #include "config.h"
+#if OS(SOLARIS)
+#undef _FILE_OFFSET_BITS
+#endif
 #include "MachineStackMarker.h"
 
 #include "ConservativeRoots.h"
@@ -42,6 +45,10 @@
 #include <mach/thread_act.h>
 #include <mach/vm_map.h>
 
+#elif OS(HAIKU)
+
+#include <OS.h>
+
 #elif OS(WINDOWS)
 
 #include <windows.h>
@@ -64,6 +71,10 @@
 #include <unistd.h>
 
 #if OS(SOLARIS)
+#include <sys/types.h>
+#include <sys/stat.h>
+#include <fcntl.h>
+#include <procfs.h>
 #include <thread.h>
 #else
 #include <pthread.h>
@@ -109,6 +120,8 @@ UNUSED_PARAM(end);
 
 #if OS(DARWIN)
 typedef mach_port_t PlatformThread;
+#elif OS(HAIKU)
+typedef thread_id PlatformThread;
 #elif OS(QNX)
 typedef pthread_t PlatformThread;
 #elif OS(WINDOWS)
@@ -133,7 +146,7 @@ public:
         , platformThread(platThread)
         , stackBase(base)
     {
-#if USE(PTHREADS) && !OS(WINDOWS) && !OS(DARWIN) && !OS(QNX)
+#if USE(PTHREADS) && !OS(WINDOWS) && !OS(DARWIN) && !OS(QNX) && !OS(HAIKU) && defined(SA_RESTART)
         struct sigaction action;
         action.sa_handler = pthreadSignalHandlerSuspendResume;
         sigemptyset(&action.sa_mask);
@@ -187,6 +200,8 @@ static inline PlatformThread getCurrentP
 {
 #if OS(DARWIN)
     return pthread_mach_thread_np(pthread_self());
+#elif OS(HAIKU)
+    suspend_thread(platformThread);
 #elif OS(WINDOWS)
     return pthread_getw32threadhandle_np(pthread_self());
 #elif USE(PTHREADS)
@@ -289,6 +304,8 @@ static inline void suspendThread(const P
 {
 #if OS(DARWIN)
     thread_suspend(platformThread);
+#elif OS(HAIKU)
+    resume_thread(platformThread);
 #elif OS(QNX)
     ThreadCtl(_NTO_TCTL_ONE_THREAD_HOLD, static_cast<void*>(platformThread));
 #elif OS(WINDOWS)
@@ -335,12 +352,15 @@ typedef arm_thread_state_t PlatformThrea
 
 #elif OS(WINDOWS)
 typedef CONTEXT PlatformThreadRegisters;
+#elif OS(HAIKU)
+typedef thread_info PlatformThreadRegisters;
 #elif USE(PTHREADS)
 typedef pthread_attr_t PlatformThreadRegisters;
 #else
 #error Need a thread register struct for this platform
 #endif
 
+#if !OS(SOLARIS)
 static size_t getPlatformThreadRegisters(const PlatformThread& platformThread, PlatformThreadRegisters& regs)
 {
 #if OS(DARWIN)
@@ -377,6 +397,9 @@ static size_t getPlatformThreadRegisters
     regs.ContextFlags = CONTEXT_INTEGER | CONTEXT_CONTROL | CONTEXT_SEGMENTS;
     GetThreadContext(platformThread, &regs);
     return sizeof(CONTEXT);
+#elif OS(HAIKU)
+	get_thread_info(platformThread, &regs);
+	return sizeof(thread_info);
 #elif USE(PTHREADS)
     pthread_attr_init(&regs);
 #if HAVE(PTHREAD_NP_H) || OS(NETBSD)
@@ -391,6 +414,7 @@ static size_t getPlatformThreadRegisters
 #error Need a way to get thread registers on this platform
 #endif
 }
+#endif
 
 static inline void* otherThreadStackPointer(const PlatformThreadRegisters& regs)
 {
@@ -425,6 +449,8 @@ static inline void* otherThreadStackPoin
 #endif // __DARWIN_UNIX03
 
 // end OS(DARWIN)
+#elif OS(HAIKU)
+    return reinterpret_cast<void*>(regs.stack_base);
 #elif CPU(X86) && OS(WINDOWS)
     return reinterpret_cast<void*>((uintptr_t) regs.Esp);
 #elif CPU(X86_64) && OS(WINDOWS)
@@ -441,32 +467,49 @@ static inline void* otherThreadStackPoin
 #endif
 }
 
+#if !OS(SOLARIS)
 static void freePlatformThreadRegisters(PlatformThreadRegisters& regs)
 {
-#if USE(PTHREADS) && !OS(WINDOWS) && !OS(DARWIN)
+#if USE(PTHREADS) && !OS(WINDOWS) && !OS(DARWIN) && !OS(HAIKU)
     pthread_attr_destroy(&regs);
 #else
     UNUSED_PARAM(regs);
 #endif
 }
+#endif
 
 void MachineThreads::gatherFromOtherThread(ConservativeRoots& conservativeRoots, Thread* thread)
 {
     suspendThread(thread->platformThread);
 
+#if OS(SOLARIS)
+    struct lwpstatus lwp;
+    char procfile[64];
+    int fd;
+    snprintf(procfile, 64, "/proc/self/lwp/%u/lwpstatus", thread->platformThread);
+    fd = open(procfile, O_RDONLY, 0);
+    if (fd == -1) {
+        fprintf(stderr, "%s: %s\n", procfile, strerror(errno));
+        abort();
+    }	
+    pread(fd, &lwp, sizeof(lwp), 0);
+    close(fd);
+    void* stackPointer = (void*)lwp.pr_reg[REG_SP];
+#else
     PlatformThreadRegisters regs;
     size_t regSize = getPlatformThreadRegisters(thread->platformThread, regs);
 
     conservativeRoots.add(static_cast<void*>(&regs), static_cast<void*>(reinterpret_cast<char*>(&regs) + regSize));
 
     void* stackPointer = otherThreadStackPointer(regs);
+
+    freePlatformThreadRegisters(regs);
+#endif
     void* stackBase = thread->stackBase;
     swapIfBackwards(stackPointer, stackBase);
     conservativeRoots.add(stackPointer, stackBase);
 
     resumeThread(thread->platformThread);
-
-    freePlatformThreadRegisters(regs);
 }
 
 #endif

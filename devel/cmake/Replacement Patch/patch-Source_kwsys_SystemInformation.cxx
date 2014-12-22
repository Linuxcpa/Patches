$NetBSD: patch-Source_kwsys_SystemInformation.cxx,v 1.8 2014/07/18 10:00:18 ryoon Exp $

* Add more conditional handling for NetBSD, same as others.
* Treat FreeBSD and DragonFly the same way as NetBSD and OpenBSD.
* Treat Solaris same as Linux.
* Use correct cmake define.

--- Source/kwsys/SystemInformation.cxx.orig	2014-01-16 17:15:08.000000000 +0000
+++ Source/kwsys/SystemInformation.cxx
@@ -78,9 +78,9 @@ typedef int siginfo_t;
 # include <errno.h> // extern int errno;
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__OpenBSD__) || defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
+# include <sys/param.h>
 # include <sys/sysctl.h>
-# include <fenv.h>
 # include <sys/socket.h>
 # include <netdb.h>
 # include <netinet/in.h>
@@ -88,11 +88,15 @@ typedef int siginfo_t;
 #  include <ifaddrs.h>
 #  define KWSYS_SYSTEMINFORMATION_IMPLEMENT_FQDN
 # endif
-#endif
-
-#if defined(__OpenBSD__) || defined(__NetBSD__)
-# include <sys/param.h>
-# include <sys/sysctl.h>
+# if defined(KWSYS_SYSTEMINFORMATION_HAS_BACKTRACE)
+#  include <execinfo.h>
+#  if defined(KWSYS_SYSTEMINFORMATION_HAS_CPP_DEMANGLE)
+#    include <cxxabi.h>
+#  endif
+#  if defined(KWSYS_SYSTEMINFORMATION_HAS_SYMBOL_LOOKUP)
+#    include <dlfcn.h>
+#  endif
+# endif
 #endif
 
 #if defined(KWSYS_SYS_HAS_MACHINE_CPU_H)
@@ -130,7 +134,7 @@ typedef int siginfo_t;
 # endif
 #endif
 
-#ifdef __linux
+#if defined(__linux) || defined (__sun) || defined(_SCO_DS)
 # include <fenv.h>
 # include <sys/socket.h>
 # include <netdb.h>
@@ -4616,7 +4620,7 @@ bool SystemInformationImplementation::Qu
   // a 32 bit process on a 64 bit host the returned memory will be
   // limited to 4GiB. So if this is a 32 bit process or if the sysconf
   // method fails use the kstat interface.
-#if SIZEOF_VOID_P == 8
+#if CMAKE_SIZEOF_VOID_P == 8
   if (this->QueryMemoryBySysconf())
     {
     return true;
@@ -4692,11 +4692,28 @@ bool SystemInformationImplementation::Qu
 {
 #if defined(__HAIKU__)
 
+   // CPU count
   system_info info;
   get_system_info(&info);
-
   this->NumberOfPhysicalCPU = info.cpu_count;
-  this->CPUSpeedInMHz = info.cpu_clock_speed / 1000000.0F;
+  
+   // CPU speed
+  uint32 topologyNodeCount = 0;
+  cpu_topology_node_info* topology = 0;
+  get_cpu_topology_info(0, &topologyNodeCount);
+  if (topologyNodeCount != 0)
+    topology = new cpu_topology_node_info[topologyNodeCount];
+  get_cpu_topology_info(topology, &topologyNodeCount);
+
+  for (uint32 i = 0; i < topologyNodeCount; i++) {
+    if (topology[i].type == B_TOPOLOGY_CORE) {
+      this->CPUSpeedInMHz = topology[i].data.core.default_frequency /
+        1000000.0f;
+      break;
+    }
+  }
+
+  delete[] topology;
 
   // Physical Memory
   this->TotalPhysicalMemory = (info.max_pages * B_PAGE_SIZE) / (1024 * 1024) ;

$NetBSD$

--- Source/kwsys/SystemInformation.cxx.orig	2014-09-18 03:37:34.000000000 +0000
+++ Source/kwsys/SystemInformation.cxx
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

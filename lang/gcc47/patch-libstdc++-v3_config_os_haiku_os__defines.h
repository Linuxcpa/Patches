$NetBSD$

--- libstdc++-v3/config/os/haiku/os_defines.h.orig	2014-02-26 10:41:00.095420416 +0000
+++ libstdc++-v3/config/os/haiku/os_defines.h
@@ -0,0 +1,45 @@
+// Specific definitions for generic platforms  -*- C++ -*-
+
+// Copyright (C) 2000-2013 Free Software Foundation, Inc.
+//
+// This file is part of the GNU ISO C++ Library.  This library is free
+// software; you can redistribute it and/or modify it under the
+// terms of the GNU General Public License as published by the
+// Free Software Foundation; either version 3, or (at your option)
+// any later version.
+
+// This library is distributed in the hope that it will be useful,
+// but WITHOUT ANY WARRANTY; without even the implied warranty of
+// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
+// GNU General Public License for more details.
+
+// Under Section 7 of GPL version 3, you are granted additional
+// permissions described in the GCC Runtime Library Exception, version
+// 3.1, as published by the Free Software Foundation.
+
+// You should have received a copy of the GNU General Public License and
+// a copy of the GCC Runtime Library Exception along with this program;
+// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
+// <http://www.gnu.org/licenses/>.
+
+/** @file bits/os_defines.h
+ *  This is an internal header file, included by other library headers.
+ *  Do not attempt to use it directly. @headername{iosfwd}
+ */
+
+#ifndef _GLIBCXX_OS_DEFINES
+#define _GLIBCXX_OS_DEFINES 1
+
+// System-specific #define, typedefs, corrections, etc, go here.  This
+// file will come before all others.
+
+// On Haiku, nanosleep and sched_yield are always available except for the
+// kernel and the bootloader, so use them. 
+#if !defined(_KERNEL_MODE) && !defined(_LOADER_MODE)
+	#define _GLIBCXX_USE_NANOSLEEP 1
+	#define _GLIBCXX_USE_SCHED_YIELD 1
+	#define _GLIBCXX_USE_CLOCK_MONOTONIC 1
+	#define _GLIBCXX_USE_CLOCK_REALTIME 1
+#endif
+
+#endif

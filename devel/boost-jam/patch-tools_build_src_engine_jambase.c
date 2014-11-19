$NetBSD$

--- tools/build/src/engine/jambase.c.orig	2014-06-19 17:15:38.000000000 +0000
+++ tools/build/src/engine/jambase.c
@@ -532,6 +532,17 @@ char *jambase[] = {
 "SUFLIB      ?= .lib ;\n",
 "SUFOBJ      ?= .o ;\n",
 "}\n",
+"else if $(OS) = HAIKU\n",
+"{\n",
+"CC          ?= gcc ;\n",
+"C++         ?= $(CC) ;\n",
+"FORTRAN     ?= \"\" ;\n",
+"LIBDIR      ?= /boot/common/lib ;\n",
+"LINK        ?= gcc ;\n",
+"LINKLIBS    ?= -lnetwork ;\n",
+"NOARSCAN    ?= true ;\n",
+"STDHDRS     ?= /boot/system/develop/headers/posix ;\n",
+"}\n",
 "else if $(OS) = BEOS && $(METROWERKS)\n",
 "{\n",
 "AR          ?= mwld -xml -o ;\n",

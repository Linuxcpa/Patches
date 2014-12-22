$NetBSD$

--- hw/xfree86/int10/xf86int10.c.orig	2012-05-17 17:09:03.000000000 +0000
+++ hw/xfree86/int10/xf86int10.c
@@ -686,7 +686,7 @@ int1A_last_bus_number(struct pci_device 
 static int
 int1A_handler(xf86Int10InfoPtr pInt)
 {
-    struct pci_device *const pvp = xf86GetPciInfoForEntity(pInt->entityIndex);
+    struct pci_device *const pvp = (pInt->entityIndex);
     struct pci_device *dev;
 
     if (pvp == NULL)
@@ -873,7 +873,7 @@ intE6_handler(xf86Int10InfoPtr pInt)
 {
     struct pci_device *pvp;
 
-    if ((pvp = xf86GetPciInfoForEntity(pInt->entityIndex)))
+    if ((pvp = (pInt->entityIndex)))
         X86_AX = (pvp->bus << 8) | (pvp->dev << 3) | (pvp->func & 0x7);
     pushw(pInt, X86_CS);
     pushw(pInt, X86_IP);

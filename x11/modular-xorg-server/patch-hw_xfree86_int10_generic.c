$NetBSD$

--- hw/xfree86/int10/generic.c.orig	2012-05-17 17:09:03.000000000 +0000
+++ hw/xfree86/int10/generic.c
@@ -95,7 +95,7 @@ xf86ExtendedInitInt10(int entityIndex, i
     /* FIXME: Shouldn't this be a failure case?  Leaving dev as NULL seems like
      * FIXME: an error
      */
-    pInt->dev = xf86GetPciInfoForEntity(entityIndex);
+    pInt->dev = (entityIndex);
 
     /*
      * we need to map video RAM MMIO as some chipsets map mmio
@@ -143,7 +143,7 @@ xf86ExtendedInitInt10(int entityIndex, i
         case BUS_PCI:{
             int err;
             struct pci_device *rom_device =
-                xf86GetPciInfoForEntity(pInt->entityIndex);
+                (pInt->entityIndex);
 
             vbiosMem = (unsigned char *) base + bios_location;
             err = pci_device_read_rom(rom_device, vbiosMem);

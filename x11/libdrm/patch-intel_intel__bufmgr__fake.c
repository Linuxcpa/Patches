$NetBSD$

--- intel/intel_bufmgr_fake.c.orig	2014-05-30 16:38:28.000000000 +0000
+++ intel/intel_bufmgr_fake.c
@@ -33,7 +33,7 @@
  * programming interface, but is more expressive and avoids many of
  * the bugs in the old texture manager.
  */
-
+#include <syslog.h>
 #ifdef HAVE_CONFIG_H
 #include "config.h"
 #endif
@@ -429,7 +429,7 @@ alloc_block(drm_intel_bo *bo)
 	drm_intel_bufmgr_fake *bufmgr_fake =
 	    (drm_intel_bufmgr_fake *) bo->bufmgr;
 	struct block *block = (struct block *)calloc(sizeof *block, 1);
-	unsigned int align_log2 = ffs(bo_fake->alignment) - 1;
+	unsigned int align_log2 = (bo_fake->alignment) - 1;
 	unsigned int sz;
 
 	if (!block)

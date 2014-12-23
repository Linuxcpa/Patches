$NetBSD: patch-libvisual_lv__types.h,v 1.2 2012/06/28 08:05:27 sbd Exp $

--- libvisual/lv_types.h.orig	2005-01-01 14:11:56.041156608 +0000
+++ libvisual/lv_types.h
@@ -20,7 +20,7 @@
  * along with this program; if not, write to the Free Software
  * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
  */
-
+#include <stdint.h>
 #ifndef _LV_TYPES_H
 #define _LV_TYPES_H
 
@@ -32,6 +32,7 @@ extern "C" {
 
 #define VISUAL_CHECK_CAST(uiobj, cast_type, cast)    ((cast*) (uiobj))
 
+#ifndef __SunOS
 #ifndef uint8_t
 #define uint8_t		u_int8_t
 #endif
@@ -43,6 +44,7 @@ extern "C" {
 #ifndef uint32_t
 #define uint32_t	u_int32_t
 #endif
+#endif
 
 #ifdef __cplusplus
 }

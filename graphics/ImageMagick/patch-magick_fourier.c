$NetBSD$

--- magick/fourier.c.orig	2014-02-22 22:12:00.003932160 +0000
+++ magick/fourier.c
@@ -64,7 +64,6 @@
 #include "magick/thread-private.h"
 #if defined(MAGICKCORE_FFTW_DELEGATE)
 #if defined(MAGICKCORE_HAVE_COMPLEX_H)
-#include <complex.h>
 #endif
 #include <fftw3.h>
 #if !defined(MAGICKCORE_HAVE_CABS)
@@ -876,12 +875,10 @@ static MagickBooleanType ForwardFourierT
       for (y=0L; y < (ssize_t) fourier_info->height; y++)
         for (x=0L; x < (ssize_t) fourier_info->center; x++)
         {
-#if defined(MAGICKCORE_HAVE_COMPLEX_H)
-          forward_pixels[i]*=gamma;
-#else
+
           forward_pixels[i][0]*=gamma;
           forward_pixels[i][1]*=gamma;
-#endif
+
           i++;
         }
     }
@@ -889,22 +886,6 @@ static MagickBooleanType ForwardFourierT
     Generate magnitude and phase (or real and imaginary).
   */
   i=0L;
-  if (fourier_info->modulus != MagickFalse)
-    for (y=0L; y < (ssize_t) fourier_info->height; y++)
-      for (x=0L; x < (ssize_t) fourier_info->center; x++)
-      {
-        magnitude_pixels[i]=cabs(forward_pixels[i]);
-        phase_pixels[i]=carg(forward_pixels[i]);
-        i++;
-      }
-  else
-    for (y=0L; y < (ssize_t) fourier_info->height; y++)
-      for (x=0L; x < (ssize_t) fourier_info->center; x++)
-      {
-        magnitude_pixels[i]=creal(forward_pixels[i]);
-        phase_pixels[i]=cimag(forward_pixels[i]);
-        i++;
-      }
   forward_info=(MemoryInfo *) RelinquishVirtualMemory(forward_info);
   return(MagickTrue);
 }
@@ -1361,25 +1342,19 @@ static MagickBooleanType InverseFourier(
     for (y=0L; y < (ssize_t) fourier_info->height; y++)
        for (x=0L; x < (ssize_t) fourier_info->center; x++)
        {
-#if defined(MAGICKCORE_HAVE_COMPLEX_H)
-         fourier_pixels[i]=magnitude_pixels[i]*cos(phase_pixels[i])+I*
-           magnitude_pixels[i]*sin(phase_pixels[i]);
-#else
          fourier_pixels[i][0]=magnitude_pixels[i]*cos(phase_pixels[i]);
          fourier_pixels[i][1]=magnitude_pixels[i]*sin(phase_pixels[i]);
-#endif
+
          i++;
       }
   else
     for (y=0L; y < (ssize_t) fourier_info->height; y++)
       for (x=0L; x < (ssize_t) fourier_info->center; x++)
       {
-#if defined(MAGICKCORE_HAVE_COMPLEX_H)
-        fourier_pixels[i]=magnitude_pixels[i]+I*phase_pixels[i];
-#else
+
         fourier_pixels[i][0]=magnitude_pixels[i];
         fourier_pixels[i][1]=phase_pixels[i];
-#endif
+
         i++;
       }
   magnitude_info=RelinquishVirtualMemory(magnitude_info);
@@ -1442,12 +1417,10 @@ static MagickBooleanType InverseFourierT
       for (y=0L; y < (ssize_t) fourier_info->height; y++)
         for (x=0L; x < (ssize_t) fourier_info->center; x++)
         {
-#if defined(MAGICKCORE_HAVE_COMPLEX_H)
-          fourier_pixels[i]*=gamma;
-#else
+
           fourier_pixels[i][0]*=gamma;
           fourier_pixels[i][1]*=gamma;
-#endif
+
           i++;
         }
     }

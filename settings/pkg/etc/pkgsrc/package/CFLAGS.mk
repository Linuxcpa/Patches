.if ${PKGPATH} == "math/fftw"
CFLAGS = -O3 -fomit-frame-pointer -mtune=native -malign-double -fstrict-aliasing -fno-schedule-insns -ffast-math
FFLAGS = 
LDFLAGS =
ac_ct_CC = "gcc"
.endif

.if ${PKGPATH} == "chat/gtmess"
CFLAGS.Haiku+= -lnetwork
.endif


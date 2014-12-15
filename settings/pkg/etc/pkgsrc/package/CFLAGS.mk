#.if ${PKGPATH} == "math/fftw"
#CFLAGS = -O3 -fomit-frame-pointer -mtune=native -malign-double -fstrict-aliasing -fno-schedule-insns -ffast-math
#FFLAGS = 
#LDFLAGS =
#ac_ct_CC = "gcc"
#.endif

.if ${PKGPATH} == "chat/gtmess" || ${PKGPATH} == "net/dante" \
|| ${PKGPATH} == "security/prngd" || ${PKGPATH} == "shells/bash2"
CFLAGS.Haiku+= -lnetwork
.endif

#.if ${PKGPATH} == "chat/licq-core"
#CFLAGS+= 		-specs=/boot/home/pkg/etc/specs
#.endif

.if ${PKGPATH} == "textproc/ispell" || ${PKGPATH} == "textproc/crush-tools"
CFLAGS.Haiku+= -lbsd
.endif

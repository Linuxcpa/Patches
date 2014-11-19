.if ${PKGPATH} == "math/fftw"
CFLAGS = -O3 -fomit-frame-pointer -mtune=native -malign-double -fstrict-aliasing -fno-schedule-insns -ffast-math
FFLAGS = 
LDFLAGS =
ac_ct_CC = "gcc"
.endif

.if ${PKGPATH} == "chat/gtmess" || ${PKGPATH} == "net/dante"
CFLAGS.Haiku+= -lnetwork
.endif

#.if ${PKGPATH} == "chat/licq-core"
#CFLAGS+= 		-specs=/boot/home/pkg/etc/specs
#.endif

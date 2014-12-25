.if ${PKGPATH} == "chat/gtmess" || ${PKGPATH} == "shells/bash2" \
|| ${PKGPATH} == "security/prngd"
CFLAGS.Haiku+= -lnetwork
.endif

.if ${PKGPATH} == "textproc/ispell" || ${PKGPATH} == "textproc/crush-tools" \
|| ${PKGPATH} == "textproc/regxml"
CFLAGS.Haiku+= -lbsd
.endif

#Didn't work
.if ${PKGPATH} == "net/dante"
CFLAGS.Haiku+= -lnetwork
.endif


#Recheck necessity

#.if ${PKGPATH} == "chat/licq-core"
#CFLAGS+= 		-specs=/boot/home/pkg/etc/specs
#.endif

#Miscellaneous settings for sucessful compile for specific packages

.if ${PKGPATH} == "net/3proxy"
MAKE_FILE= Makefile.haiku
.endif

.if ${PKGPATH} == "security/tcp_wrappers"
BUILD_TARGET.Haiku= haiku
.endif

.if ${PKGPATH} == "pkgtools/rc.subr"
ONLY_FOR_PLATFORM+= Haiku-*-*
.endif

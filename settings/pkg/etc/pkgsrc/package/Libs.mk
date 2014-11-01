.if ${PKGPATH} == "devel/pkg-config" || ${PKGPATH} == "benchmarks/netio" \
|| ${PKGPATH} == "chat/anope" || ${PKGPATH} == "chat/emech"
LIBS.Haiku+=	-lnetwork
.endif

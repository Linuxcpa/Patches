.if ${PKGPATH} == "devel/pkg-config" || ${PKGPATH} == "benchmarks/netio" \
|| ${PKGPATH} == "chat/anope" || ${PKGPATH} == "chat/emech" \
|| ${PKGPATH} == "comms/binkd" || ${PKGPATH} == "converters/yencode" \
|| ${PKGPATH} == "games/netris" || ${PKGPATH} == "net/wget" \
|| ${PKGPATH} == "mail/mutt" || ${PKGPATH} == "emulators/or1ksim" \
|| ${PKGPATH} == "graphics/libcaca" || ${PKGPATH} == "graphics/netpbm" \
|| ${PKGPATH} == "comms/minicom" || ${PKGPATH} == "mail/msmtp"
LIBS.Haiku+=	-lnetwork
.endif

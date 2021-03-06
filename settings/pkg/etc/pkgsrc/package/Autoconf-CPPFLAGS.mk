#Autoconf needs a special set of compile flags to find pkgsrc headers.

#cause autoconf to use the headers we want it to use
.if ${PKGPATH} == "converters/librevenge"
CPPFLAGS+= -I/boot/home/pkg/include
.endif

.if ${PKGPATH} == "chat/licq-core"
CPPFLAGS+= -I/boot/home/pkg/include
.include "../../converters/libiconv/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.endif

.if ${PKGPATH} == "wm/pekwm" || ${PKGPATH} == "devel/nsis" \
|| ${PKGPATH} == "mail/courier-maildir"
CPPFLAGS+= -I/boot/home/pkg/include
.include "../../converters/libiconv/buildlink3.mk"
.endif

.if ${PKGPATH} == "net/cia"
CPPFLAGS+= -lnetwork
.endif

# Below didn't work

.if ${PKGPATH} == "converters/libabw"
CPPFLAGS+= -I/boot/home/pkg/include
.endif

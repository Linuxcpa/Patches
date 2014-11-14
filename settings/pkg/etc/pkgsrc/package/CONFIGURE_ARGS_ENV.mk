#Compile time configure options for specific packages

.if ${PKGPATH} == "lang/gcc48-libs" || ${PKGPATH} == "lang/gcc47"
CONFIGURE_ARGS+= --enable-frame-pointer
CONFIGURE_ARGS+= --with-gnu-ld
CONFIGURE_ARGS+= --enable-lto
.endif

.if ${PKGPATH} == "x11/qt4-libs"
CONFIGURE_ARGS+= -no-largefile
CONFIGURE_ARGS+= -fast
CONFIGURE_ARGS+= -no-pch
.endif

.if ${PKGPATH} == "emulators/qemu"
CONFIGURE_ARGS+= --extra-ldflags=-lbsd
.endif

.if ${PKGPATH} == "net/dante"
CONFIGURE_ARGS+= --disable-preload
.endif

.if ${PKGPATH} == "security/openssh"
CONFIGURE_ENV+= use_toolchain_hardening=0
CONFIGURE_ARGS+= --disable-utmpx
CONFIGURE_ARGS+= --with-libedit=${BUILDLINK_PREFIX.editline}/lib
.include "../../devel/editline/buildlink3.mk"
.endif

.if ${PKGPATH} == "comms/minicom"
CONFIGURE_ARGS+= --enable-lock-dir=/var/empty
CONFIGURE_ARGS+= --enable-dfl-port=/dev/ports/usb0
.endif

.if ${PKGPATH} == "lang/python27" || ${PKGPATH} == "lang/python34"
CONFIGURE_ARGS+= --disable-ipv6
.endif

.if ${PKGPATH} == "lang/python27"
CONFIGURE_ARGS+=    PKG_CONFIG_PATH=/boot/home/pkg/lib/pkgconfig
CONFIGURE_ARGS+=    --enable-shared
CONFIGURE_ARGS+=    --prefix=/boot/home/pkg
CONFIGURE_ARGS+=    --includedir=/boot/home/pkg/include
.endif

.if ${PKGPATH} == "mail/mutt"
CONFIGURE_ARGS+= --with-mailpath=/boot/home/mail
.endif

.if ${PKGPATH} == "x11/pixman"
CONFIGURE_ARGS+=	PTHREAD_LIBS=
.endif

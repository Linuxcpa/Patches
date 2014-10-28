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

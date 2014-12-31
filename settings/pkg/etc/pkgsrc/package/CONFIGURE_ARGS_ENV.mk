#Compile time configure options for specific packages

.if ${PKGPATH} == "security/openssh"
CONFIGURE_ENV+= use_toolchain_hardening=0
CONFIGURE_ARGS+= --disable-utmpx
CONFIGURE_ARGS+= --with-libedit=${BUILDLINK_PREFIX.editline}/lib
.include "../../devel/editline/buildlink3.mk"
.endif

.if ${PKGPATH} == "lang/python27" || ${PKGPATH} == "lang/python34"
CONFIGURE_ARGS+= --disable-ipv6
.endif

.if ${PKGPATH} == "lang/python27" || ${PKGPATH} == "lang/python34"
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

.if ${PKGPATH} == "sysutils/testdisk"
CONFIGURE_ARGS+= --enable-missing-uuid-ok
.endif

.if ${PKGPATH} == "chat/licq-core"
CONFIGURE_ENV+= CC='cc -I/boot/home/pkg/include -L/boot/home/pkg/lib'
.endif

.if ${PKGPATH} == "mail/imap-uw"
CONFIGURE_ARGS+=    --includedir=/boot/home/pkg/include
.endif

.if ${PKGPATH} == "x11/modular-xorg-server"
CONFIGURE_ARGS+=	--disable-pciaccess
CONFIGURE_ARGS+=	--disable-mitshm
CONFIGURE_ARGS+=	--enable-xfbdev
CONFIGURE_ARGS+=	--disable-dri
CONFIGURE_ARGS+=	--disable-dri2
CONFIGURE_ARGS+=	--disable-glx
CONFIGURE_ARGS+=	--disable-glx-tls
.endif

.if ${PKGPATH} == "x11/modular-xorg-server"
CONFIGURE_ARGS+=	--disable-mitshm
.endif

.if ${PKGPATH} == "multimedia/mencoder"
CONFIGURE_ARGS+=    --disable-runtime-cpudetection 
.endif

.if ${PKGPATH} == "graphics/cairo"
CONFIGURE_ARGS+=    --enable-xcb-shm=no
CONFIGURE_ARGS+=    --enable-xlib=no
.endif

.if ${PKGPATH} == "net/net-snmp"
CONFIGURE_ARGS+=  --with-ldflags=LDFLAGS -L/boot/home/pkg/lib -ltdb
.endif

.if ${PKGPATH} == "print/gv"
CONFIGURE_ARGS+=	--enable-SIGCHLD-fallback
.endif

.if ${PKGPATH} == "security/clamav"
CONFIGURE_ARGS+=    --with-zlib=/boot/home/pkg
CONFIGURE_ARGS+=    --build=Haiku
.endif

.if ${PKGPATH} == "math/fftw"
CONFIGURE_ARGS+= --prefix=/boot/home/pkg 
CONFIGURE_ARGS+= --sharedstatedir=/boot/home/pkg/var
.endif

.if ${PKGPATH} == "lang/ruby200-base"
CONFIGURE_ARGS+= --enable-shared=yes
LIBS.haiku+= /boot/system/lib/libroot.so
.endif

.if ${PKGPATH} == "www/http_load"
MAKE_ENV+=	SYSV_LIBS="-lnetwork"
.endif

.if ${PKGPATH} == "www/mini_httpd"
MAKE_ENV+=	SYSV_LIBS="-lnetwork -lbsd"
.endif

.if ${PKGPATH} == "comms/minicom"
CONFIGURE_ARGS+= --enable-lock-dir=/var/empty
CONFIGURE_ARGS+= --enable-dfl-port=/dev/ports/usb0
.endif

.if ${PKGPATH} == "x11/libxcb"
CONFIGURE_ARGS+= --enable-shm=no
.endif

.if ${PKGPATH} == "sysutils/cdrdao"
CONFIGURE_ARGS+=	--with-scglib
CONFIGURE_ARGS+=	--target=haiku
.endif

.if ${PKGPATH} == "games/dosbox"
CONFIGURE_ARGS+= --disable-dynamic-core
.endif

#below here, builds aren't working

.if ${PKGPATH} == "lang/gcc48-libs" || ${PKGPATH} == "lang/gcc47"
CONFIGURE_ARGS+= --enable-frame-pointer
CONFIGURE_ARGS+= --with-gnu-ld
CONFIGURE_ARGS+= --enable-lto
.endif

.if ${PKGPATH} == "x11/qt4-libs"
CONFIGURE_ARGS+= -no-largefile
CONFIGURE_ARGS+= -fast
CONFIGURE_ARGS+= -no-pch
CONFIGURE_ARGS+= -no-opengl
CONFIGURE_ARGS+= -nomake examples 
CONFIGURE_ARGS+= -nomake demos 
CONFIGURE_ARGS+= -release
CONFIGURE_ARGS+= -no-iconv 
CONFIGURE_ARGS+= -multimedia 
CONFIGURE_ARGS+= -no-audio-backend 
#CONFIGURE_ARGS+= -dbus
.endif

.if ${PKGPATH} == "emulators/qemu"
CONFIGURE_ARGS+= --extra-ldflags=-lbsd
.endif

.if ${PKGPATH} == "net/dante"
CONFIGURE_ARGS+= --disable-preload
.endif

#.if ${PKGPATH} == "devel/"
#LD_LIBRARY_PATH=/boot/home/pkg/lib
#.endif

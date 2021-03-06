# $NetBSD: Makefile,v 1.83 2014/05/05 00:48:31 ryoon Exp $

DISTNAME=	xorg-server-1.7.1
PKGNAME=	Xsdl-${DISTNAME}
PKGREVISION=	1
MASTER_SITES=	${MASTER_SITE_XORG:=xserver/}
EXTRACT_SUFX=	.tar.bz2
CATEGORIES=	x11

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://xorg.freedesktop.org/
COMMENT=	Xsdl from X.org (Needed for Haiku) 

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	gmake pkg-config
USE_LANGUAGES+=	c99

PKGCONFIG_OVERRIDE+=	xorg-server.pc.in
SHLIBTOOL_OVERRIDE=	# empty

BUILD_DEFS+=		VARBASE
BUILD_DEFS_EFFECTS+=	XKB_OUTPUT_DIR

OWN_DIRS+=		${VARBASE}/log
OWN_DIRS+=		${XKB_OUTPUT_DIR}
XKB_OUTPUT_DIR?=	${VARBASE}/db/xkb # XXX sync with xkeyboard-config

CONFIGURE_ARGS+=	--localstatedir=${VARBASE:Q}
CONFIGURE_ARGS+=	--with-xkb-output=${XKB_OUTPUT_DIR:Q}

.if !empty(USE_TOOLS:Mauto*)
TOOLS_DEPENDS+=	xorg-util-macros>=1.1.5:../../devel/xorg-util-macros
.endif

DEPENDS+=	xkbcomp-[0-9]*:../../x11/xkbcomp
DEPENDS+=	xkeyboard-config-[0-9]*:../../x11/xkeyboard-config



.include "../../mk/bsd.prefs.mk"

PLIST_VARS+=	ignore
.if ${OPSYS} != "Haiku" 
PLIST.ignore=	yes
.endif

.include "../../mk/bsd.prefs.mk"

.if ${OPSYS} == "NetBSD"
CONFIGURE_ARGS+=	--with-builder-addr="tech-x11@NetBSD.org"
CONFIGURE_ARGS+=	--with-os-vendor="The NetBSD Foundation"
# TLS is not supported by NetBSD<6
.  if !empty(OS_VERSION:M[0-5].*)
CONFIGURE_ENV+=		ac_cv_tls=no
CONFIGURE_ARGS+=	--disable-glx-tls
.  endif
.endif
CONFIGURE_ARGS+=	--with-os-name=${MACHINE_PLATFORM:Q}

CONFIGURE_ARGS+=	--enable-xorg

CONFIGURE_ARGS+=	--with-fontrootdir=${PREFIX}/share/fonts/X11

LEGACY_FONT_PATH=
DEFAULT_FONT_PATH=
.for f in misc TTF OTF Type1 100dpi 75dpi cyrillic
DEFAULT_FONT_PATH+=	${PREFIX}/share/fonts/X11/${f}
LEGACY_FONT_PATH+=	${PREFIX}/lib/X11/fonts/${f}
.endfor
FONT_PATH=		${DEFAULT_FONT_PATH} ${LEGACY_FONT_PATH}

CONFIGURE_ARGS+=	--with-default-font-path=${FONT_PATH:ts,:Q}

CONFIGURE_ARGS+=	--disable-pciaccess
CONFIGURE_ARGS+=	--disable-mitshm
CONFIGURE_ARGS+=	--disable-glx
CONFIGURE_ARGS+=	--disable-ipv6
CONFIGURE_ARGS+=	--disable-xorg
CONFIGURE_ARGS+=	--disable-xvfb
CONFIGURE_ARGS+=	--disable-xnest
CONFIGURE_ARGS+=	--enable-kdrive
CONFIGURE_ARGS+=	--enable-xsdl
CONFIGURE_ARGS+=	--disable-xephyr
CONFIGURE_ARGS+=	--disable-xfbdev
CONFIGURE_ARGS+=	--disable-xfake
CONFIGURE_ARGS+=	--disable-config-hal
CONFIGURE_ARGS+=	--disable-dri
CONFIGURE_ARGS+=	--disable-dri2
CONFIGURE_ARGS+=	--disable-glx-tls
CONFIGURE_ARGS+=	--disable-config-hal
CONFIGURE_ARGS+=	--disable-dmx
CONFIGURE_ARGS+=	--disable-xwin
CONFIGURE_ARGS+=	--with-int10=x86emu

CONFIGURE_ENV+=		APP_MAN_SUFFIX=1 FILE_MAN_SUFFIX=5
CONFIGURE_ENV+=		DRIVER_MAN_SUFFIX=4

INSTALLATION_DIRS+=	lib/xorg/modules/drivers lib/xorg/modules/input

BUILDLINK_API_DEPENDS.MesaLib+=		MesaLib>=7.8.0
BUILDLINK_API_DEPENDS.compositeproto+=	compositeproto>=0.4
BUILDLINK_API_DEPENDS.fixesproto+=	fixesproto>=5.0
BUILDLINK_API_DEPENDS.damageproto+=     damageproto>=1.1
BUILDLINK_API_DEPENDS.xcmiscproto+=     xcmiscproto>=1.2.0
BUILDLINK_API_DEPENDS.xtrans+=      	xtrans>=1.2.2
BUILDLINK_API_DEPENDS.bigreqsproto+=    bigreqsproto>=1.1.0
BUILDLINK_API_DEPENDS.xproto+=      	xproto>=7.0.22
BUILDLINK_API_DEPENDS.xextproto+=      	xextproto>=7.1.99
BUILDLINK_API_DEPENDS.recordproto+=     recordproto>=1.13.99.1
BUILDLINK_API_DEPENDS.scrnsaverproto+=  scrnsaverproto>=1.1
BUILDLINK_API_DEPENDS.resourceproto+=   resourceproto>=1.2.0
BUILDLINK_API_DEPENDS.dri+=      	dri>=7.8
BUILDLINK_API_DEPENDS.xfont+=      	xfont>=1.4.2
BUILDLINK_API_DEPENDS.glproto+=		glproto>=1.4.16
BUILDLINK_API_DEPENDS.inputproto+=	inputproto>=2.1.99.6
BUILDLINK_API_DEPENDS.kbproto+=		kbproto>=1.0.3
BUILDLINK_API_DEPENDS.pixman+=		pixman>=0.21.8
BUILDLINK_API_DEPENDS.randrproto+=	randrproto>=1.4.0
BUILDLINK_API_DEPENDS.renderproto+=	renderproto>=0.11
BUILDLINK_API_DEPENDS.xf86dgaproto+=	xf86dgaproto>=2.0.3
BUILDLINK_API_DEPENDS.xf86driproto+=	xf86driproto>=2.1.0

BUILD_DEPENDS+=		tradcpp-[0-9]*:../../devel/tradcpp
CONFIGURE_ENV+=		ac_cv_path_RAWCPP="${PREFIX}/bin/tradcpp -Uunix"

.include "../../converters/libiconv/buildlink3.mk"
.include "../../devel/ncurses/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../fonts/libfontenc/buildlink3.mk"
.include "../../graphics/MesaLib/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
BUILDLINK_API_DEPENDS.libpciaccess+=	libpciaccess>=0.11.0
.include "../../sysutils/libpciaccess/buildlink3.mk"
.include "../../x11/bigreqsproto/buildlink3.mk"
.include "../../x11/compositeproto/buildlink3.mk"
.include "../../x11/damageproto/buildlink3.mk"
.include "../../x11/dri2proto/buildlink3.mk"
.include "../../x11/evieext/buildlink3.mk"
.include "../../x11/fixesproto/buildlink3.mk"
.include "../../x11/fontsproto/buildlink3.mk"
.include "../../x11/glproto/buildlink3.mk"
.include "../../x11/inputproto/buildlink3.mk"
.include "../../x11/libX11/buildlink3.mk"
.include "../../x11/libXau/buildlink3.mk"
.include "../../x11/libXaw/buildlink3.mk"
BUILDLINK_API_DEPENDS.libXext+=	libXext>=1.1.1
.include "../../x11/libXext/buildlink3.mk"
.include "../../x11/libXfixes/buildlink3.mk"
.include "../../x11/libXfont/buildlink3.mk"
.include "../../x11/libXt/buildlink3.mk"
.include "../../x11/libXxf86misc/buildlink3.mk"
.include "../../x11/libXxf86vm/buildlink3.mk"
.include "../../x11/libXinerama/buildlink3.mk"
.include "../../x11/libdrm/buildlink3.mk"
.include "../../x11/libxkbfile/buildlink3.mk"
.include "../../x11/libxkbui/buildlink3.mk"
.include "../../x11/pixman/buildlink3.mk"
.include "../../x11/randrproto/buildlink3.mk"
.include "../../x11/recordproto/buildlink3.mk"
.include "../../x11/renderproto/buildlink3.mk"
.include "../../x11/resourceproto/buildlink3.mk"
.include "../../x11/scrnsaverproto/buildlink3.mk"
.include "../../x11/trapproto/buildlink3.mk"
.include "../../x11/videoproto/buildlink3.mk"
.include "../../x11/xcmiscproto/buildlink3.mk"
.include "../../x11/xextproto/buildlink3.mk"
.include "../../x11/kbproto/buildlink3.mk"
.include "../../x11/xf86bigfontproto/buildlink3.mk"
.include "../../x11/xf86dgaproto/buildlink3.mk"
.include "../../x11/xf86driproto/buildlink3.mk"
.include "../../x11/xf86miscproto/buildlink3.mk"
.include "../../x11/xf86vidmodeproto/buildlink3.mk"
.include "../../x11/xineramaproto/buildlink3.mk"
.include "../../x11/xproto/buildlink3.mk"
.include "../../x11/xtrans/buildlink3.mk"

post-install:
	${RM} ${DESTDIR}${PREFIX}/lib/xorg/protocol.txt
	${RM} ${DESTDIR}${PREFIX}/man/man1/Xserver.1

.include "../../mk/bsd.pkg.mk"

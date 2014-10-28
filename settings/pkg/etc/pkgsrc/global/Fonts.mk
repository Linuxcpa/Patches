#Font options for all builds

.if ${.CURDIR:M*fonts/*-ttf*}
INSTALL_TEMPLATES+= ${LOCALPATCHES}/INSTALL.fonts
DEINSTALL_TEMPLATES+= ${LOCALPATCHES}/DEINSTALL.fonts
.endif

FONTS_DIRS.ttf=

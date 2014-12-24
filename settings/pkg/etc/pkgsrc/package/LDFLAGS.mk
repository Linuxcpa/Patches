# LD flags to pass to make for specifc packages

.if ${PKGPATH} == "www/serf"
LDFLAGS+= -Wl,-R${PREFIX}/lib
.endif

.if ${PKGPATH} == "devel/p5-subversion"
LDFLAGS+= -lssp_nonshared
.endif

.if ${PKGPATH} == "net/samba" || ${PKGPATH} == "lang/gcc48-libs" \
|| ${PKGPATH} == "chat/anope"
LDFLAGS+= -Wl,-R/boot/system/lib
.endif

.if ${PKGPATH} == "lang/gcc48-libs"
LDFLAGS+= -L/boot/system/lib
.endif

.if ${PKGPATH} == "chat/gtmess" || ${PKGPATH} == "print/luatex" \
|| ${PKGPATH} == "net/net-snmp"
LDFLAGS+= -L/boot/system/lib
.endif

.if ${PKGPATH} == "graphics/netpbm" || ${PKGPATH} == "security/tcp_wrappers" \
|| ${PKGPATH} == "benchmarks/httperf" || ${PKGPATH} == "benchmarks/netpipe" \
|| ${PKGPATH} == "chat/goofey" || ${PKGPATH} == "devel/git-base" \
|| ${PKGPATH} == "lang/squeak-vm" || ${PKGPATH} == "net/6tunnel" \
|| ${PKGPATH} == "net/aget" || ${PKGPATH} == "net/bing" \
|| ${PKGPATH} == "net/gini" || ${PKGPATH} == "net/corkscrew" \
|| ${PKGPATH} == "net/dhid" || ${PKGPATH} == "net/freenet-tools" \
|| ${PKGPATH} == "net/gethost" || ${PKGPATH} == "net/modpcap" \
|| ${PKGPATH} == "net/mping" || ${PKGPATH} == "net/batchftp" \
|| ${PKGPATH} == "net/paris-traceroute" || ${PKGPATH} == "net/powerdns" \
|| ${PKGPATH} == "net/poink" || ${PKGPATH} == "net/polsms" \
|| ${PKGPATH} == "net/proxytunnel" || ${PKGPATH} == "net/bounce" \
|| ${PKGPATH} == "net/tn5250" || ${PKGPATH} == "net/wakeup" \
|| ${PKGPATH} == "net/wap-utils" || ${PKGPATH} == "print/xdvipdfmx" \
|| ${PKGPATH} == "security/mirrordir" || ${PKGPATH} == "security/sbd" \
|| ${PKGPATH} == "security/sslscan" || ${PKGPATH} == "security/starttls" \
|| ${PKGPATH} == "security/stud" || ${PKGPATH} == "sysutils/9base" \
|| ${PKGPATH} == "sysutils/dog" || ${PKGPATH} == "sysutils/ts" \
|| ${PKGPATH} == "textproc/lq-sp" || ${PKGPATH} == "www/ijb" \
|| ${PKGPATH} == "www/bozohttpd" || ${PKGPATH} == "www/c-icap" \
|| ${PKGPATH} == "www/mMosaic" || ${PKGPATH} == "audio/mserv" \
|| ${PKGPATH} == "x11/xfstt" || ${PKGPATH} == "x11/modular-xorg-server"
LDFLAGS+= -lnetwork
.endif

.if ${PKGPATH} == "textproc/xmlcatmgr" || ${PKGPATH} == "graphics/netpbm" \
|| ${PKGPATH} == "textproc/mdocml" || ${PKGPATH} == "security/mit-krb5" \
|| ${PKGPATH} == "devel/git-base" || ${PKGPATH} == "archivers/p7zip" \
|| ${PKGPATH} == "mail/msmtp" || ${PKGPATH} == "devel/editline" \
|| ${PKGPATH} == "devel/bmkdep" || ${PKGPATH} == "archivers/unrar" \
|| ${PKGPATH} == "net/batchftp" || ${PKGPATH} == "print/xdvipdfmx" \
|| ${PKGPATH} == "shells/dash" || ${PKGPATH} == "sysutils/acpidump" \
|| ${PKGPATH} == "sysutils/9base" || ${PKGPATH} == "sysutils/adtool" \
|| ${PKGPATH} == "textproc/vis" || ${PKGPATH} == "www/bozohttpd" \
|| ${PKGPATH} == "x11/xfstt" || ${PKGPATH} == "math/nickle" \
|| ${PKGPATH} == "net/cftp"
LDFLAGS+= -lbsd
.endif

.if ${PKGPATH} == "shells/fish"
LDFLAGS+= -L/boot/home/pkg/lib
.endif

.if ${PKGPATH} == "net/libpcap" || ${PKGPATH} == "lang/python27" \
|| ${PKGPATH} == "chat/iip" || ${PKGPATH} == "chat/icbirc" \
|| ${PKGPATH} == "chat/mu-conference"
LDFLAGS = -L/boot/system/lib -lnetwork -Wl,-R/boot/system/lib
.endif

.if ${PKGPATH} == "chat/icbirc" || ${PKGPATH} == "devel/git-base"
LDFLAGS+= -L/boot/system/lib -lnetwork -lbsd -Wl,-R/boot/system/lib
.endif

.if ${PKGPATH} == "devel/gobject-introspection"
LDFLAGS+= -L/boot/system/lib -lnetwork -lbsd -Wl,-R/boot/system/lib
#CONFIGURE_ARGS+= -libdir=/boot/system/lib
.endif

.if ${PKGPATH} == "lang/ruby18-base"
LDFLAGS+= -L/boot/system/lib -lroot -lstdc++ -lgcc_s -Wl,-R/boot/system/lib
.endif

.if ${PKGPATH} == "graphics/ImageMagick"
LDFLAGS+= -L/boot/system/lib -lnetwork -lroot -Wl,-R/boot/system/lib
.endif

.if ${PKGPATH} == "devel/pango"
LDFLAGS.Haiku+=	-Wl,-zignore
.endif

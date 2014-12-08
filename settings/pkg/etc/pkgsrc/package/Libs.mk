.if ${PKGPATH} == "devel/pkg-config" || ${PKGPATH} == "benchmarks/netio" \
|| ${PKGPATH} == "chat/anope" || ${PKGPATH} == "chat/emech" \
|| ${PKGPATH} == "comms/binkd" || ${PKGPATH} == "converters/yencode" \
|| ${PKGPATH} == "games/netris" || ${PKGPATH} == "net/wget" \
|| ${PKGPATH} == "mail/mutt" || ${PKGPATH} == "emulators/or1ksim" \
|| ${PKGPATH} == "graphics/libcaca" || ${PKGPATH} == "graphics/netpbm" \
|| ${PKGPATH} == "comms/minicom" || ${PKGPATH} == "mail/msmtp" \
|| ${PKGPATH} == "chat/bsflite" || ${PKGPATH} == "chat/jabberd" \
|| ${PKGPATH} == "lang/python34" || ${PKGPATH} == "security/cyrus-sasl" \
|| ${PKGPATH} == "devel/gobject-introspection" || ${PKGPATH} == "games/xfrisk" \
|| ${PKGPATH} == "mail/cyrus-imapd" || ${PKGPATH} == "mail/cyrus-imapd23" \
|| ${PKGPATH} == "mail/avenger" || ${PKGPATH} == "mail/nullmailer" \
|| ${PKGPATH} == "mail/pfqueue" || ${PKGPATH} == "mail/procmail" \
|| ${PKGPATH} == "mail/pulsar" || ${PKGPATH} == "mail/solid-pop3d" \
|| ${PKGPATH} == "mail/spamassassin" || ${PKGPATH} == "misc/cstream" \
|| ${PKGPATH} == "misc/open2300-mysql" || ${PKGPATH} == "misc/open2300" \
|| ${PKGPATH} == "multimedia/ccxstream" || ${PKGPATH} == "multimedia/smpeg"
LIBS.Haiku+=	-lnetwork
.endif

.if ${PKGPATH} == "security/cyrus-sasl" || ${PKGPATH} == "mail/cyrus-imapd" \
|| ${PKGPATH} == "mail/cyrus-imapd23" || ${PKGPATH} == "mail/avenger" \
|| ${PKGPATH} == "mail/cyrus-imapd24" || ${PKGPATH} == "sysutils/libpciaccess" \
|| ${PKGPATH} == "x11/libdrm" || ${PKGPATH} == "mail/procmail"
LIBS.Haiku+= -lbsd
.endif

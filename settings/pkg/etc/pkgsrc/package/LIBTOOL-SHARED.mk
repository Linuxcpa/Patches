# Every PHP Package in Haiku Needs This.

.if ${PKGPATH} == "archivers/php-bz2" || ${PKGPATH} == "archivers/php-zip" \
|| ${PKGPATH} == "archivers/php-zlib" || ${PKGPATH} == "time/php-calendar" \
|| ${PKGPATH} == "converters/php-iconv" || ${PKGPATH} == "converters/php-mbstring" \
|| ${PKGPATH} == "devel/php-gettext" || ${PKGPATH} == "devel/php-gmp" \
|| ${PKGPATH} == "devel/php-libawl" || ${PKGPATH} == "devel/php-memcache" \
|| ${PKGPATH} == "devel/php-memcached" || ${PKGPATH} == "devel/php-mode" \
|| ${PKGPATH} == "devel/php-opcache" || ${PKGPATH} == "devel/php-pcntl" \
|| ${PKGPATH} == "devel/php-posix" || ${PKGPATH} == "devel/php-shmop" \
|| ${PKGPATH} == "devel/php-sysvmsg" || ${PKGPATH} == "devel/php-sysvsem" \
|| ${PKGPATH} == "devel/php-sysvshm"
SHLIBTOOL_OVERRIDE= # empty
LDFLAGS.Haiku+= -Wl,--rpath
.endif

.if ${PKGPATH} == "archivers/php-zip" || ${PKGPATH} == "archivers/php-zlib" \
|| ${PKGPATH} == "devel/php-memcache" || ${PKGPATH} == "devel/php-memcached"
CONFIGURE_ARGS+=	--with-zlib-dir=/boot/home/pkg
CONFIGURE_ARGS+=    --includedir=/boot/home/pkg/include
.endif

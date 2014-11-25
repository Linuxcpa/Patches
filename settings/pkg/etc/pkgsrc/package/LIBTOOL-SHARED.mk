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
|| ${PKGPATH} == "devel/php-sysvshm" || ${PKGPATH} == "databases/php-dba" \
|| ${PKGPATH} == "databases/php-dbx" || ${PKGPATH} == "databases/php-ldap" \
|| ${PKGPATH} == "databases/php-mssql" || ${PKGPATH} == "databases/php-mysql" \
|| ${PKGPATH} == "databases/php-mysqli" || ${PKGPATH} == "databases/php-oci8" \
|| ${PKGPATH} == "databases/php-pdo" || ${PKGPATH} == "databases/php-pdo_dblib" \
|| ${PKGPATH} == "databases/php-pdo_mysql" || ${PKGPATH} == "databases/php-pdo_odbc" \
|| ${PKGPATH} == "databases/php-pdo_pqsql" || ${PKGPATH} == "databases/php-pdo_sqlite" \
|| ${PKGPATH} == "databases/php-pgsql" || ${PKGPATH} == "databases/php-redis" \
|| ${PKGPATH} == "databases/php-sqlite" || ${PKGPATH} == "databases/php-sqlrelay" \
|| ${PKGPATH} == "mail/php-imap" || ${PKGPATH} == "math/php-bcmath" \
|| ${PKGPATH} == "misc/php-orangehrm" || ${PKGPATH} == "editors/vile" \
|| ${PKGPATH} == "multimedia/smpeg"
SHLIBTOOL_OVERRIDE= # empty
LDFLAGS.Haiku+= -Wl,--rpath
.endif

.if ${PKGPATH} == "devel/pango" 
LDFLAGS.Haiku+= -Wl,--unresolved-symbols=ignore-all
.endif

.if ${PKGPATH} == "archivers/php-zip" || ${PKGPATH} == "archivers/php-zlib" \
|| ${PKGPATH} == "devel/php-memcache" || ${PKGPATH} == "devel/php-memcached"
CONFIGURE_ARGS+=	--with-zlib-dir=/boot/home/pkg
CONFIGURE_ARGS+=    --includedir=/boot/home/pkg/include
.endif

#|| ${PKGPATH} == "lang/ruby200-base"

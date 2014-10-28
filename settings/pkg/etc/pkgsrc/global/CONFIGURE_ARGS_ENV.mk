# Confgure arguements for all builds

.if defined(GNU_CONFIGURE)
CONFIGURE_ENV+= gl_cv_func_realpath_works="guessing yes"
CONFIGURE_ENV+= sys_lib_dlsearch_path_spec='/boot/system/lib'
CONFIGURE_ENV+= shlibpath_overrides_runpath=no
.endif

#Sometimes these will cause a build failure
#CONFIGURE_ARGS+=    PKG_CONFIG_PATH=/boot/home/pkg/lib/pkgconfig
#CONFIGURE_ARGS+=    --enable-shared
#CONFIGURE_ARGS+=    --prefix=/boot/home/pkg
#CONFIGURE_ARGS+=    --includedir=/boot/home/pkg/include
#CONFIGURE_ARGS+=    -specs=/boot/home/pkg/etc/specs


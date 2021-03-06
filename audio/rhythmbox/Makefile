# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD$
#   $MCom: ports/trunk/audio/rhythmbox/Makefile 19885 2014-09-17 07:54:55Z kwm $

PORTNAME=	rhythmbox
PORTVERSION=	3.0.3
PORTREVISION=	3
CATEGORIES=	audio gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	marcus@FreeBSD.org
COMMENT=	Audio player for GNOME

BUILD_DEPENDS=	${LOCALBASE}/include/linux/videodev2.h:${PORTSDIR}/multimedia/v4l_compat \
		valac:${PORTSDIR}/lang/vala \
		gtkdoc-check:${PORTSDIR}/textproc/gtk-doc \
		itstool:${PORTSDIR}/textproc/itstool
LIB_DEPENDS=	libmusicbrainz5.so:${PORTSDIR}/audio/libmusicbrainz5 \
		libtotem-plparser.so:${PORTSDIR}/multimedia/totem-pl-parser \
		libdbus-glib-1.so:${PORTSDIR}/devel/dbus-glib \
		libcheck.so:${PORTSDIR}/devel/libcheck \
		libpeas-1.0.so:${PORTSDIR}/devel/libpeas \
		libjson-glib-1.0.so:${PORTSDIR}/devel/json-glib \
		libsoup-gnome-2.4.so:${PORTSDIR}/devel/libsoup-gnome \
		libsecret-1.so:${PORTSDIR}/security/libsecret \
		libbrasero-media3.so:${PORTSDIR}/sysutils/brasero

USES=		desktop-file-utils gettext gmake libtool pathfix \
		pkgconfig tar:xz
USE_GNOME=	intlhack gnomeprefix gtk30 introspection:build
USE_XORG=	ice xproto
GNU_CONFIGURE=	yes
USE_GSTREAMER1=	flac lame jpeg cdparanoia vorbis
CONFIGURE_ARGS=	--enable-vala \
		--disable-gudev \
		--enable-visualizer=no \
		--disable-browser-plugin \
		--with-libsecret=yes
INSTALLS_ICONS=	yes
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
INSTALL_TARGET=	install-strip

PLIST_SUB+=	PYTVER=${PYTHON_VER:S/.//}

GLIB_SCHEMAS=	org.gnome.rhythmbox.gschema.xml

OPTIONS_SUB=	yes
OPTIONS_DEFINE=	DAAP GRILO IPOD NOTIFY PYTHON LIRC MTP WEBKIT
OPTIONS_DEFAULT=NOTIFY PYTHON
DAAP_DESC=	DAAP support
DAAP_CONFIGURE_ENABLE=	daap
DAAP_LIB_DEPENDS=	libdmapsharing-3.0.so:${PORTSDIR}/net/libdmapsharing
IPOD_DESC=	iPod support
IPOD_CONFIGURE_WITH=	ipod
IPOD_LIB_DEPENDS=	libgpod.so:${PORTSDIR}/audio/libgpod
GRILO_DESC=		Media discovery with Grilo
GRILO_CONFIGURE_ENABLE=	grilo
GRILO_BUILD_DEPENDS=	grilo-plugins>=0:${PORTSDIR}/net/grilo-plugins
GRILO_RUN_DEPENDS=	grilo-plugins>=0:${PORTSDIR}/net/grilo-plugins
LIRC_CONFIGURE_ENABLE=	lirc
LIRC_LIB_DEPENDS=	liblirc_client.so:${PORTSDIR}/comms/lirc
NOTIFY_CONFIGURE_ENABLE=	notify
NOTIFY_LIB_DEPENDS=	libnotify.so:${PORTSDIR}/devel/libnotify
MTP_CONFIGURE_WITH=	mtp
MTP_LIB_DEPENDS=	libmtp.so:${PORTSDIR}/multimedia/libmtp \
			libhal.so:${PORTSDIR}/sysutils/hal
PYTHON_CONFIGURE_ENABLE=	python
PYTHON_USES=		python:3
PYTHON_USE=		PYTVER=${PYTHON_VER:S/.//}
WEBKIT_DESC=	HTML view support
WEBKIT_CONFIGURE_WITH=	webkit
WEBKIT_LIB_DEPENDS=	libwebkitgtk-3.0.so:${PORTSDIR}/www/webkit-gtk3

post-patch:
	@${REINPLACE_CMD} -e 's|{MOZILLA_PLUGINDIR|{MOZILLA_PLUGINDIR}|g' \
		${WRKSRC}/configure
	@${REINPLACE_CMD} -e '/plugins\/context\/Makefile"/d' ${WRKSRC}/configure

.include <bsd.port.mk>

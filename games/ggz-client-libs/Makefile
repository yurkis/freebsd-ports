# Created by: ijliao
# $FreeBSD$

PORTNAME=	ggz-client-libs
PORTVERSION=	${GGZ_VERSION}
PORTREVISION=	5
CATEGORIES=	games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	The GGZ Gaming Zone - Core Client Libraries

LIB_DEPENDS=	libexpat.so:${PORTSDIR}/textproc/expat2

USES=		libtool
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-debug --with-libggz-dir="${LOCALBASE}"
USE_LDCONFIG=	yes
USE_GGZ=	core

INSTALL_TARGET=	install-strip

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -pthread -lexpat

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=	gettext
NLS_CONFIGURE_OFF=	--disable-nls

post-patch:
	@${REINPLACE_CMD} -e 's|libggz.la|libggz.so|g' ${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's|#!/bin/bash|#!/bin/sh|' \
		${WRKSRC}/ggz-wrapper/ggz
	@${REINPLACE_CMD} -e \
		's|@LIB_GGZ@|@LIB_GGZ@ ../ggzcore/.libs/libggzcore.so|' \
		${WRKSRC}/ggzwrap/Makefile.in

.include "${.CURDIR}/../libggz/bsd.ggz.mk"
.include <bsd.port.mk>

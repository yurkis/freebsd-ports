# Created by: Diane Bruce <db@db.net
# $FreeBSD$

PORTNAME=	xanalyser
PORTVERSION=	1.32
PORTREVISION=	1
CATEGORIES=	audio hamradio
MASTER_SITES=	http://arvin.schnell-web.net/xanalyser/ \
		${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	db

MAINTAINER=	db@FreeBSD.org
COMMENT=	Spectrum analyser

USES=		gmake libtool motif tar:bzip2
GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|g' \
	    -e 's|%%MOTIFLIB%%|${MOTIFLIB} |g' \
	    -e 's|%%PREFIX%%|${PREFIX}|g' \
	    ${WRKSRC}/xanalyser.spec ${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>

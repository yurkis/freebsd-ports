# Created by: Wes Peters <wes@FreeBSD.org>
# $FreeBSD$

PORTNAME=	phpbt
PORTVERSION=	1.0.1
PORTREVISION=	1
CATEGORIES?=	devel
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Bug-tracking system developed in PHP

RUN_DEPENDS=	${LOCALBASE}/share/pear/DB.php:${PORTSDIR}/databases/pear-DB

.if !defined(WITHOUT_PHP_DEPENDS)
USE_PHP=	ctype pcre posix session tokenizer xml zlib
.endif

NO_BUILD=	YES
PHPBT=		www/data-dist/phpbt
PLIST_SUB=	PHPBT=${PHPBT} WWWOWN="${WWWOWN}" WWWGRP="${WWWGRP}"
SUB_FILES=	pkg-message
SUB_LIST+=	PHPBT=${PHPBT}

do-install:
	-${MKDIR} ${STAGEDIR}${PREFIX}/${PHPBT}
	@(cd ${WRKSRC} && ${CP} -R * ${STAGEDIR}${PREFIX}/${PHPBT})

.include <bsd.port.mk>

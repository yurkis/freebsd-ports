# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD$

PORTNAME=	namazu
PORTVERSION=	${NAMAZU_PORTVERSION}
PORTREVISION=	1
CATEGORIES+=	databases www textproc
MASTER_SITES=	http://www.namazu.org/stable/
PKGNAMESUFFIX=	2

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Full-text search system intended for easy use

BUILD_DEPENDS=	p5-File-MMagic>=0:${PORTSDIR}/devel/p5-File-MMagic
RUN_DEPENDS=	p5-File-MMagic>=0:${PORTSDIR}/devel/p5-File-MMagic

USES=		gettext iconv libtool perl5
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-perl5="${PERL}" \
		--with-libintl-prefix=${LOCALBASE} \
		${ICONV_CONFIGURE_ARG}
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS

.include "${.CURDIR}/Makefile.common"

post-patch:
	@${REINPLACE_CMD} -e '/^SUBDIRS/s|doc||g' ${WRKSRC}/Makefile.in

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/*.css ${STAGEDIR}${DOCSDIR}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}/en
	${INSTALL_DATA} ${WRKSRC}/doc/en/*.html ${STAGEDIR}${DOCSDIR}/en
	@${MKDIR} ${STAGEDIR}${DOCSDIR}/ja
	${INSTALL_DATA} ${WRKSRC}/doc/ja/*.html ${STAGEDIR}${DOCSDIR}/ja

.include <bsd.port.mk>

# Created by: ijliao
# $FreeBSD$

PORTNAME=	smb
PORTVERSION=	1.1.12
CATEGORIES=	net python
MASTER_SITES=	http://miketeo.net/files/Projects/py${PORTNAME}/ \
		CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pysmb-${PORTVERSION}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	SMB/CIFS library written in Python

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}asn1>=0:${PORTSDIR}/devel/py-asn1

OPTIONS_DEFINE=	DOCS

USES=		python
USE_PYTHON=	autoplist concurrent distutils
PORTDOCS=	*

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC}/docs/html/ && ${COPYTREE_SHARE} _modules/ ${STAGEDIR}${DOCSDIR}/)
	(cd ${WRKSRC}/docs/html/ && ${COPYTREE_SHARE} _static/ ${STAGEDIR}${DOCSDIR}/)
	(cd ${WRKSRC}/docs/html/ && ${COPYTREE_SHARE} api/ ${STAGEDIR}${DOCSDIR}/)
	(cd ${WRKSRC}/docs/html/ && ${CP} *.html ${STAGEDIR}${DOCSDIR}/)
	(cd ${WRKSRC}/docs/html/ && ${CP} *.js ${STAGEDIR}${DOCSDIR}/)

.include <bsd.port.mk>

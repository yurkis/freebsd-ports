# $FreeBSD$

PORTNAME=	salt-api
PORTVERSION=	0.8.4
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	christer.edwards@gmail.com
COMMENT=	Exposes the fundamental aspects of Salt control to external sources

LICENSE=	APACHE20

USE_PYTHON=	2
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}salt>0:${PORTSDIR}/sysutils/py-salt
RUN_DEPENDS:=	${BUILD_DEPENDS}

post-patch:
	@${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|' ${WRKSRC}/setup.py

.include <bsd.port.mk>

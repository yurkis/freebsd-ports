# Created by: Henri Michelon
# $FreeBSD$

PORTNAME=	pgworksheet
PORTVERSION=	1.9
PORTREVISION=	6
CATEGORIES=	databases
MASTER_SITES=	http://pgfoundry.org/frs/download.php/1695/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple PostreSQL GUI front end

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/pyPgSQL/libpq/__init__.py:${PORTSDIR}/databases/py-pyPgSQL

USES=		pgsql tar:bzip2
USE_GNOME=	pygtk2
USE_PYTHON=	2
USE_PYDISTUTILS=yes
PYDISTUTILS_AUTOPLIST=	yes
PYDISTUTILS_PKGVERSION=	1.9

post-patch:
	${REINPLACE_CMD} -e \
		's|@PIXMAP_PATH@|${PREFIX}/share/pixmaps/pgworksheet|' \
		${WRKSRC}/pgworksheet
	${REINPLACE_CMD} -e \
		's|@LOCALE_PATH@|${PREFIX}/share/locale|' \
		${WRKSRC}/pgworksheet

.include <bsd.port.mk>

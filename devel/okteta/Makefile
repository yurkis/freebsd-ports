# $FreeBSD$

PORTNAME=	okteta
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	2
CATEGORIES=	devel kde
MASTER_SITES=	KDE/${KDE4_BRANCH}/${PORTVERSION}/src
DIST_SUBDIR=	KDE/${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE hex editor

LIB_DEPENDS=	libqca.so:${PORTSDIR}/devel/qca

USE_KDE4=	kdelibs kdeprefix kdehier automoc4
USES=		cmake:outsource shared-mime-info tar:xz
USE_QT4=	moc_build qmake_build rcc_build uic_build \
		corelib designer gui script scripttools xml

post-patch:
	${REINPLACE_CMD} -e '/^update_xdg_mimetypes/ d; /SharedMimeInfo/ d' \
		${PATCH_WRKSRC}/mimetypes/CMakeLists.txt

.include <bsd.port.mk>

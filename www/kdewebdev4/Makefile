# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD$

PORTNAME=	kdewebdev
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	2
CATEGORIES=	www kde
MASTER_SITES=	KDE/${KDE4_BRANCH}/${PORTVERSION}/src
DIST_SUBDIR=	KDE/${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Comprehensive html/website development environment

LIB_DEPENDS=	libtidy.so:${PORTSDIR}/www/tidy-lib \
		libboost_thread.so:${PORTSDIR}/devel/boost-libs

USE_GNOME=	libxml2 libxslt
USE_KDE4=	kdelibs pimlibs kdeprefix kdehier automoc4
USES=		cmake:outsource tar:xz
USE_QT4=	dbus porting_build \
		qmake_build moc_build rcc_build uic_build uic3_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>

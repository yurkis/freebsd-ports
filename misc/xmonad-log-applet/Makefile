# Created by: Alexander Kojevnikov <alexander@kojevnikov.com>
# $FreeBSD$

PORTNAME=	xmonad-log-applet
PORTVERSION=	2.0.0
PORTREVISION=	1
CATEGORIES=	misc
MASTER_SITES=	http://cloud.github.com/downloads/alexkay/${PORTNAME}/

MAINTAINER=	alexander@kojevnikov.com
COMMENT=	Applet that will display Xmonad log information

INSTALLS_ICONS=	yes
USES=		gmake pkgconfig pathfix
USE_GNOME=	gnomeprefix gnomepanel
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--with-panel=gnome2

.include <bsd.port.mk>

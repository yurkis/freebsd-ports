# Created by: bsam
# $FreeBSD: head/textproc/linux-f10-scim-libs/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	scim-libs
PORTVERSION=	1.4.7
PORTREVISION=	3
CATEGORIES=	textproc linux
MASTER_SITES=	CRITICAL/rpm/${LINUX_RPM_ARCH}/fedora/${LINUX_DIST_VER}

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Smart Common Input Method libraries (Linux Fedora 10)

CONFLICTS=	linux-scim-libs-[0-9]* linux-f8-scim-libs-[0-9]*

ONLY_FOR_ARCHS=	i386 amd64
USE_LINUX=	f10
USE_LINUX_RPM=	yes
USE_LINUX_APPS=	gtk2

RPMVERSION=	35.fc10
USE_LDCONFIG=	yes
SRC_DISTFILES=	scim-${PORTVERSION}-${RPMVERSION}.src.rpm

DESCR=		${.CURDIR}/../scim/pkg-descr

.include <bsd.port.mk>

# Created by: bsam
# $FreeBSD: head/archivers/linux-f10-ucl/Makefile 362027 2014-07-16 03:47:05Z adamw $

PORTNAME=		ucl
PORTVERSION=		1.03
CATEGORIES=		archivers linux
MASTER_SITES=		CRITICAL/rpm/${LINUX_RPM_ARCH}/fedora/${LINUX_DIST_VER}

MAINTAINER=		emulation@FreeBSD.org
COMMENT=		UCL, a lossless data compression library (Linux Fedora 10)

CONFLICTS=		linux-ucl-[0-9]* linux-f8-ucl-[0-9]*

USE_LINUX=		f10
USE_LINUX_RPM=		yes
RPMVERSION=		8.fc9
USE_LDCONFIG=		yes

PLIST_FILES=		usr/lib/libucl.so.1 usr/lib/libucl.so.1.0.0
DOCSDIR=		${PREFIX}/usr/share/doc/${PORTNAME}-${PORTVERSION}
PORTDOCS=		COPYING NEWS README THANKS TODO
DESCR=			${.CURDIR}/../${PORTNAME}/pkg-descr

.include <bsd.port.mk>

# Created by: bsam
# $FreeBSD: head/audio/linux-f10-libvorbis/Makefile 362027 2014-07-16 03:47:05Z adamw $

PORTNAME=	libvorbis
PORTVERSION=	1.2.0
CATEGORIES=	audio linux
MASTER_SITES=	CRITICAL/rpm/${LINUX_RPM_ARCH}/fedora/${LINUX_DIST_VER}

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Audio compression codec library (Linux Fedora 10)

CONFLICTS=	linux-libvorbis-[0-9]* linux-f8-libvorbis-[0-9]*

ONLY_FOR_ARCHS=	i386 amd64
USE_LINUX=	f10
USE_LINUX_RPM=	yes
USE_LINUX_APPS=	libogg

RPMVERSION=	5.fc10
USE_LDCONFIG=	yes

PLIST_FILES=	usr/lib/libvorbis.so.0 usr/lib/libvorbis.so.0.4.0 \
		usr/lib/libvorbisenc.so.2 usr/lib/libvorbisenc.so.2.0.3 \
		usr/lib/libvorbisfile.so.3 usr/lib/libvorbisfile.so.3.2.0
DOCSDIR=	${PREFIX}/usr/share/doc/${PORTNAME}-${PORTVERSION}
PORTDOCS=	AUTHORS COPYING README
DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr

.include <bsd.port.mk>

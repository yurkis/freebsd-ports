# $FreeBSD$

PORTNAME=	pg_rman
PORTVERSION=	1.2.3
PORTREVISION=	1
CATEGORIES=	databases
MASTER_SITES=	http://pg-rman.googlecode.com/files/

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Online backup and restore tool for PostgreSQL

USES=		gmake pgsql
WANT_PGSQL=	client server
MAKE_ARGS=	USE_PGXS=1
PLIST_FILES=	bin/pg_rman

.include <bsd.port.mk>

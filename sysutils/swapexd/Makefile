# Created by: Jesse Smith
# $FreeBSD$

PORTNAME=	swapexd
PORTVERSION=	0.4
CATEGORIES=	sysutils
MASTER_SITES=	http://makeapbi.sourceforge.net/${PORTNAME}/

MAINTAINER=	jessefrgsmith@yahoo.ca
COMMENT=	Tool for growing and shrinking on-disk swap space

WRKSRC=	${WRKDIR}/${PORTNAME}

PLIST_FILES=	sbin/${PORTNAME} etc/rc.d/swapexd "@sample etc/swapexd.conf.sample"

.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} -e "s,%%PREFIX%%,${PREFIX},g" ${WRKSRC}/rc.d/swapexd
	@${REINPLACE_CMD} -e "s,/etc/,${PREFIX}/etc/,g" ${WRKSRC}/swapexd.h
.if ${OSVERSION} < 800076
	@${REINPLACE_CMD} -e "s,swapctl -s -m ,swapctl -s -h ,g" ${WRKSRC}/swapexd.c
.endif

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/sbin/
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.conf ${STAGEDIR}${PREFIX}/etc/${PORTNAME}.conf.sample
	${INSTALL_SCRIPT} ${WRKSRC}/rc.d/swapexd ${STAGEDIR}${PREFIX}/etc/rc.d

.include <bsd.port.post.mk>

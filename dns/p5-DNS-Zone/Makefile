# Created by: Clement Laforet <sheepkiller@cultdeadsheep.org>
# $FreeBSD$

PORTNAME=	DNS-Zone
PORTVERSION=	0.85
CATEGORIES=	dns perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	5u623l20@gmail.com
COMMENT=	DNS::Zone is set of perl modules for name service zone files

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

OPTIONS_DEFINE=	DOCS

USES=		perl5
USE_PERL5=	configure patch

post-patch:
	${FIND} ${WRKSRC} -name '*.pm' -o -name '*.t' -o -name '*.PL' | \
	${XARGS} ${PERL} -pi -e '$$_="" if /^use 5/;' \
			     -e '$$_="" if /(use|no) warnings/;'

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>

# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD$

PORTNAME=	Data-Clone
PORTVERSION=	0.004
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Polymorphic data cloning

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Test-LeakTrace>=0:${PORTSDIR}/devel/p5-Test-LeakTrace \
		p5-Test-Requires>=0.03:${PORTSDIR}/devel/p5-Test-Requires

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501800
BUILD_DEPENDS+=	p5-ExtUtils-ParseXS>=3.18:${PORTSDIR}/devel/p5-ExtUtils-ParseXS
.endif

.include <bsd.port.post.mk>

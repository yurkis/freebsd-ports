# Created by: Matthias Petermann <matthias@petermann-it.de>
# $FreeBSD$

PORTNAME=	trytond28_analytic_account
PORTVERSION=	2.8.0
PORTREVISION=	1
CATEGORIES=	finance python
MASTER_SITES=	https://pypi.python.org/packages/source/t/trytond_analytic_account/ \
		http://downloads.tryton.org/${PORTVERSION:R}/
DISTNAME=	trytond_analytic_account-${PORTVERSION}

MAINTAINER=	matthias@petermann-it.de
COMMENT=	Tryton Application Platform (Analytic Account Module)

LICENSE=	GPLv3

RUN_DEPENDS=	trytond28_company>=2.8.0:${PORTSDIR}/finance/trytond28_company \
		trytond28_party>=2.8.0:${PORTSDIR}/finance/trytond28_party \
		trytond28_currency>=2.8.0:${PORTSDIR}/finance/trytond28_currency \
		trytond28_account>=2.8.1:${PORTSDIR}/finance/trytond28_account

CONFLICTS=	trytond_analytic_account-2.[46].*

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>

# $FreeBSD$

PORTNAME=	gtg
PORTVERSION=	0.3.1
CATEGORIES=	deskutils gnome python
MASTER_SITES=	http://launchpadlibrarian.net/157500472/

MAINTAINER=	rm@FreeBSD.org
COMMENT=	GTD organizer for the GNOME desktop environment

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dbus>=0.82.4:${PORTSDIR}/devel/py-dbus \
		${PYTHON_PKGNAMEPREFIX}xdg>=0:${PORTSDIR}/devel/py-xdg \
		${PYTHON_PKGNAMEPREFIX}liblarch>=2.1:${PORTSDIR}/devel/py-liblarch \
		xset:${PORTSDIR}/x11/xset

USE_GNOME=	pygobject pygtk2
USES=		gettext desktop-file-utils shebangfix
INSTALLS_ICONS=	yes
SHEBANG_FILES=	${WRKSRC}/gtcli_bash_completion

USE_PYTHON=		2
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

OPTIONS_DEFINE=		CHEETAH
CHEETAH_DESC=		Needed for export plugin to work
OPTIONS_EXCLUDE=	NLS DOCS
CHEETAH_RUN_DEPENDS=	${LOCALBASE}/bin/cheetah:${PORTSDIR}/devel/py-cheetah

.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} -e 's|share/man|man|' ${WRKSRC}/setup.py
	@${REINPLACE_CMD} -e 's|/usr/bin|${PREFIX}/bin|' \
		${WRKSRC}/org.gnome.GTG.service

.include <bsd.port.mk>

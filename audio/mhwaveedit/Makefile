# Created by: ijliao
# $FreeBSD$

PORTNAME=	mhwaveedit
PORTVERSION=	1.4.23
CATEGORIES=	audio
MASTER_SITES=	http://download.gna.org/mhwaveedit/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Graphical program for editing sound files

LICENSE=	GPLv2

USES=		pathfix pkgconfig tar:bzip2
USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--without-alsalib --without-arts

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	bin/mhwaveedit \
		man/man1/mhwaveedit.1.gz \
		share/applications/mhwaveedit.desktop \
		share/locale/de/LC_MESSAGES/mhwaveedit.mo \
		share/locale/es/LC_MESSAGES/mhwaveedit.mo \
		share/locale/fr/LC_MESSAGES/mhwaveedit.mo \
		share/locale/it/LC_MESSAGES/mhwaveedit.mo \
		share/locale/pl/LC_MESSAGES/mhwaveedit.mo \
		share/locale/ru/LC_MESSAGES/mhwaveedit.mo \
		share/locale/sv/LC_MESSAGES/mhwaveedit.mo \
		share/locale/zh_CN/LC_MESSAGES/mhwaveedit.mo \
		share/pixmaps/mhwaveedit.xpm

BROKEN_sparc64=	Does not compile on sparc64

OPTIONS_DEFINE=		DOUBLE_SAMPLES ESOUND JACK LADSPA OSS PORTAUDIO \
			PULSEAUDIO SAMPLERATE SDL SNDFILE
OPTIONS_DEFAULT=	OSS SAMPLERATE SNDFILE

DOUBLE_SAMPLES_DESC=	Increase quality for 24/32-bit samplerates
DOUBLE_SAMPLES_CONFIGURE_WITH=	double-samples
ESOUND_USE=		gnome=esound
ESOUND_CONFIGURE_WITH=	esound
JACK_LIB_DEPENDS=	libjack.so:${PORTSDIR}/audio/jack
JACK_CONFIGURE_WITH=	jack
LADSPA_BUILD_DEPENDS=	ladspa>0:${PORTSDIR}/audio/ladspa
LADSPA_RUN_DEPENDS=	ladspa>0:${PORTSDIR}/audio/ladspa
LADSPA_CONFIGURE_ENV_OFF=	ac_cv_header_ladspa_h=no
OSS_CONFIGURE_WITH=	oss
PORTAUDIO_LIB_DEPENDS=	libportaudio.so:${PORTSDIR}/audio/portaudio
PORTAUDIO_CONFIGURE_WITH=	portaudio
PULSEAUDIO_LIB_DEPENDS=	libpulse.so:${PORTSDIR}/audio/pulseaudio
PULSEAUDIO_CONFIGURE_WITH=	pulse
SAMPLERATE_LIB_DEPENDS=	libsamplerate.so:${PORTSDIR}/audio/libsamplerate
SAMPLERATE_CONFIGURE_WITH=	libsamplerate
SDL_USE=		sdl=sdl
SDL_CONFIGURE_WITH=	sdl
SNDFILE_LIB_DEPENDS=	libsndfile.so:${PORTSDIR}/audio/libsndfile
SNDFILE_CONFIGURE_WITH=	libsndfile

post-patch:
	@${REINPLACE_CMD} -e \
		'/^Icon/s|=.*|=${PREFIX}/share/pixmaps/mhwaveedit.xpm|' \
		${WRKSRC}/share/applications/mhwaveedit.desktop

.include <bsd.port.mk>

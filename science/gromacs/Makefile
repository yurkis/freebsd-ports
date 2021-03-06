# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD$

PORTNAME=	gromacs
PORTVERSION=	5.0
PORTREVISION=	5
CATEGORIES=	science
MASTER_SITES=	ftp://ftp.gromacs.org/pub/gromacs/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Compute molecular dynamics

LICENSE=	LGPL21

BUILD_DEPENDS=	boost-libs>=1.44:${PORTSDIR}/devel/boost-libs

USES=		cmake fortran perl5 pkgconfig shebangfix
SHEBANG_FILES=	admin/*.sh scripts/*.pl scripts/*.sh src/gromacs/selection/*.sh
bash_CMD=	${SH}
USE_GNOME=	libxml2
CMAKE_ARGS=	-DGMX_USE_RDTSCP:BOOL=OFF \
		-DUSE_PYTHON_SCRIPTS:BOOL=OFF
USE_LDCONFIG=	yes

OPTIONS_DEFINE=		ATLAS FLOAT SIMD X11
OPTIONS_RADIO=		MPI
OPTIONS_RADIO_MPI=	MPICH OMPI
OPTIONS_DEFAULT=	FLOAT X11
OPTIONS_SUB=		yes

ATLAS_DESC=		Use ATLAS for BLAS and LAPACK
ATLAS_LIB_DEPENDS=	libalapack.so:${PORTSDIR}/math/atlas
ATLAS_LIB_DEPENDS_OFF=	libblas.so:${PORTSDIR}/math/blas \
			liblapack.so:${PORTSDIR}/math/lapack
ATLAS_CMAKE_ON=		-DBLAS_LIBRARIES:FILEPATH="${LOCALBASE}/lib/libcblas.so;${LOCALBASE}/lib/libf77blas.so" \
			-DLAPACK_LIBRARIES:FILEPATH="${LOCALBASE}/lib/libalapack.so"
ATLAS_CMAKE_OFF=	-DBLAS_LIBRARIES:FILEPATH="${LOCALBASE}/lib/libblas.so" \
			-DLAPACK_LIBRARIES:FILEPATH="${LOCALBASE}/lib/liblapack.so"
FLOAT_DESC=		Use single instead of double precision
FLOAT_BUILD_DEPENDS=	fftw3>0:${PORTSDIR}/math/fftw3
FLOAT_LIB_DEPENDS=	libfftw3f.so:${PORTSDIR}/math/fftw3-float
FLOAT_LIB_DEPENDS_OFF=	libfftw3.so:${PORTSDIR}/math/fftw3
FLOAT_CMAKE_ON=		-DGMX_DOUBLE:BOOL=OFF
FLOAT_CMAKE_OFF=	-DGMX_DOUBLE:BOOL=ON
MPICH_DESC=		MPI support using net/mpich2
MPICH_LIB_DEPENDS=	libmpich.so:${PORTSDIR}/net/mpich2
MPICH_CMAKE_ON= 	-DMPI_C_COMPILER:FILEPATH="${LOCALBASE}/bin/mpicc"
OMPI_DESC=		MPI support using net/openmpi
OMPI_BUILD_DEPENDS=	openmpi>0:${PORTSDIR}/net/openmpi
OMPI_RUN_DEPENDS=	openmpi>0:${PORTSDIR}/net/openmpi
OMPI_CMAKE_ON=		-DMPI_C_COMPILER:FILEPATH="${LOCALBASE}/mpi/openmpi/bin/mpicc"
SIMD_CMAKE_OFF=		-DGMX_SIMD:STRING="None"
X11_USE=		XORG=xext,x11
X11_CMAKE_ON=		-DGMX_X11:BOOL=ON
X11_CMAKE_OFF=		-DGMX_X11:BOOL=OFF

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MFLOAT}
PLIST_SUB+=	SUFFIX_D=""
.else
PLIST_SUB+=	SUFFIX_D="_d"
.endif

.if ${PORT_OPTIONS:MMPICH} || ${PORT_OPTIONS:MOMPI}
CMAKE_ARGS+=	-DGMX_MPI:BOOL=ON
PLIST_SUB+=	SUFFIX_MPI="_mpi"
.else
CMAKE_ARGS+=	-DGMX_MPI:BOOL=OFF
PLIST_SUB+=	SUFFIX_MPI=""
.endif

post-patch:
	@${FIND} ${WRKSRC} -name "CMakeLists.txt" | ${XARGS} \
		${REINPLACE_CMD} -e \
		's|share/man|man| ; \
		 /pkgconfig/s|LIB_INSTALL_DIR}|CMAKE_INSTALL_PREFIX}/libdata|'
	@${FIND} ${WRKSRC} -name "GMXRC.*" | ${XARGS} ${REINPLACE_CMD} -e \
		's|LDLIB/pkgconfig|LDLIB/../libdata/pkgconfig| ; \
		 s|LDLIB}/pkgconfig|LDLIB}/../libdata/pkgconfig|'
	@${REINPLACE_CMD} -e '/CMAKE_REQUIRED_LIBRARIES/d' \
		${WRKSRC}/cmake/gmxTestdlopen.cmake

.include <bsd.port.mk>

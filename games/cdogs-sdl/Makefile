# $FreeBSD$

PORTNAME=	cdogs-sdl
PORTVERSION=	0.7.3
CATEGORIES=	games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Open source, classic overhead run-and-gun game

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gl sdl cmake pkgconfig

USE_GITHUB=	yes
GH_ACCOUNT=	cxong

USE_GL=		gl glu
USE_SDL=	image2 mixer2

LIB_DEPENDS=	libenet.so:net/enet

CMAKE_ARGS=	-DCDOGS_DATA_DIR:PATH="${DATADIR}" \
		-DUSE_SHARED_ENET=on

post-patch:
	@${REINPLACE_CMD} 's,@CDOGS_DATA_DIR@,&\/,' \
		${WRKSRC}/src/cdogs/sys_config.h.cmake

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/cdogs-sdl
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/cdogs-sdl-editor

.include <bsd.port.mk>

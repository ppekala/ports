# Created by: Pawel Pekala <pawel@freebsd.org>
# $FreeBSD$

PORTNAME=	cdogs-sdl
PORTVERSION=	0.6.9
CATEGORIES=	games

MAINTAINER=	pawel@FreeBSD.org
COMMENT=	Open source, classic overhead run-and-gun game

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gl sdl cmake pkgconfig

USE_GITHUB=	yes
GH_ACCOUNT=	cxong

USE_GL=		gl glu
USE_SDL=	image2 mixer2

CMAKE_ARGS=	-DCDOGS_DATA_DIR:PATH="${DATADIR}"

post-patch:
	@${REINPLACE_CMD} 's,@CDOGS_DATA_DIR@,&\/,' \
		${WRKSRC}/src/cdogs/sys_config.h.cmake
	@${REINPLACE_CMD} '/_POSIX_C_SOURCE/d' \
		${WRKSRC}/src/cdogs/enet/unix.c

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/cdogs-sdl
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/cdogs-sdl-editor

.include <bsd.port.mk>

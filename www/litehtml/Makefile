# $FreeBSD$

PORTNAME=	litehtml
PORTVERSION=	0.5
DISTVERSIONPREFIX=	v
CATEGORIES=	www devel

MAINTAINER=	c0rn@o2.pl
COMMENT=	Fast and lightweight HTML/CSS rendering engine

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libgumbo.so:devel/gumbo

USES=		cmake localbase ninja

USE_GITHUB=	yes

post-patch:
	@${REINPLACE_CMD} 's|"gumbo/gumbo.h"|<gumbo.h>|' \
		${WRKSRC}/src/document.*

.include <bsd.port.mk>

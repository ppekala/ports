PORTNAME=	litehtml
PORTVERSION=	0.8
DISTVERSIONPREFIX=	v
CATEGORIES=	www devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fast and lightweight HTML/CSS rendering engine
WWW=		http://www.litehtml.com/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake localbase ninja

USE_GITHUB=	yes

CMAKE_OFF=	BUILD_TESTING

CONFLICTS_INSTALL=	gumbo # libgumbo.a

post-patch:
	@${REINPLACE_CMD} 's|"gumbo/gumbo.h"|<gumbo.h>|' \
		${WRKSRC}/src/document.*

.include <bsd.port.mk>

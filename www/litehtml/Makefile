PORTNAME=	litehtml
PORTVERSION=	0.10
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

.include <bsd.port.mk>

PORTNAME=	claws-mail-papirus
PORTVERSION=	20230912
CATEGORIES=	x11-themes

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Papirus icons for Claws Mail
WWW=		https://github.com/PapirusDevelopmentTeam/papirus-claws-mail-theme

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	rsvg-convert:graphics/librsvg2 \
		bash:shells/bash \
		gsed:textproc/gsed

USE_GITHUB=	yes
GH_ACCOUNT=	papirusdevelopmentteam
GH_PROJECT=	papirus-claws-mail-theme
GH_TAGNAME=	8295d0a

NO_CONFIGURE=	yes
ALL_TARGET=	build

post-patch:
	@${REINPLACE_CMD} 's|sed|gsed|' ${WRKSRC}/build.sh

.include <bsd.port.mk>

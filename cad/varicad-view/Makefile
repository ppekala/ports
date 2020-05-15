# $FreeBSD$

PORTNAME=	varicad-view
PORTVERSION=	2019.3.03
CATEGORIES=	cad
MASTER_SITES=	https://www.varicad.com/userdata/files/release/en/
DISTFILES=	varicad2019-view-en_3.03_amd64.deb

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Free CAD viewer, convertor and printing software

USES=		desktop-file-utils linux shared-mime-info

NO_BUILD=	yes
LINUX_USE=	gtk2 xorglibs
INSTALLS_ICONS=	yes

post-extract:
	@${MKDIR} ${WRKSRC}
	@cd ${WRKSRC} && ${TAR} zxf ${WRKDIR}/data.tar.gz

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/opt/VariCAD-View/bin/varicad-view \
		${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/opt/VariCAD-View/desktop/varicadview.xpm \
		${STAGEDIR}${PREFIX}/share/pixmaps
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/mime/packages
	${INSTALL_DATA} ${WRKSRC}/opt/VariCAD-View/desktop/mime/*.xml \
		${STAGEDIR}${PREFIX}/share/mime/packages
	${INSTALL_DATA} ${WRKSRC}/opt/VariCAD-View/desktop/*.desktop \
		${STAGEDIR}${DESKTOPDIR}

.for size in 16x16 22x22 24x24 32x32 36x36 42x42 48x48 64x64 72x72 96x96 128x128 192x192 256x256 512x512
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/hicolor/${size}/apps
	${INSTALL_DATA} ${WRKSRC}/opt/VariCAD-View/desktop/varicadview_${size}.png \
		${STAGEDIR}${PREFIX}/share/icons/hicolor/${size}/apps/varicad.png
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/icons/hicolor/${size}/mimetypes
	${INSTALL_DATA} ${WRKSRC}/opt/VariCAD-View/desktop/mime/varicad-dwb_${size}.png \
		${STAGEDIR}${PREFIX}/share/icons/hicolor/${size}/mimetypes/varicad-dwb.png
	${INSTALL_DATA} ${WRKSRC}/opt/VariCAD-View/desktop/mime/varicad-dwg_${size}.png \
		${STAGEDIR}${PREFIX}/share/icons/hicolor/${size}/mimetypes/varicad-dwg.png
	${INSTALL_DATA} ${WRKSRC}/opt/VariCAD-View/desktop/mime/varicad-dxf_${size}.png \
		${STAGEDIR}${PREFIX}/share/icons/hicolor/${size}/mimetypes/varicad-dxf.png
	${INSTALL_DATA} ${WRKSRC}/opt/VariCAD-View/desktop/mime/varicad-stp_${size}.png \
		${STAGEDIR}${PREFIX}/share/icons/hicolor/${size}/mimetypes/varicad-stp.png
.endfor

	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/varicad-view
	cd ${WRKSRC}/opt/VariCAD-View/lib && ${COPYTREE_SHARE} . \
		${STAGEDIR}${PREFIX}/lib/varicad-view

.include <bsd.port.mk>

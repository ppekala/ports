# Created by: Pawel Pekala <c0rn@o2.pl>
# $FreeBSD: head/mail/claws-mail-fancy/Makefile 493883 2019-02-25 16:58:48Z kwm $

PORTNAME=	fancy
PORTREVISION=	0

COMMENT=	Webkit based HTML renderer plugin for Claws Mail

LIB_DEPENDS=	libsoup-gnome-2.4.so:devel/libsoup-gnome \
		libwebkitgtk-1.0.so:www/webkitgtk2

CLAWS_PLUGINS_BUILD=	fancy

.include "${PORTSDIR}/mail/claws-mail/Makefile.claws"
MASTERDIR=	${PORTSDIR}/mail/claws-mail
.include <bsd.port.mk>

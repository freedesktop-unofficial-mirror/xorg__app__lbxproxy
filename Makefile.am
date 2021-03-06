# 
#  Copyright 2005  Red Hat, Inc.
# 
#  Permission to use, copy, modify, distribute, and sell this software and its
#  documentation for any purpose is hereby granted without fee, provided that
#  the above copyright notice appear in all copies and that both that
#  copyright notice and this permission notice appear in supporting
#  documentation, and that the name of Red Hat not be used in
#  advertising or publicity pertaining to distribution of the software without
#  specific, written prior permission.  Red Hat makes no
#  representations about the suitability of this software for any purpose.  It
#  is provided "as is" without express or implied warranty.
# 
#  RED HAT DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
#  INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO
#  EVENT SHALL RED HAT BE LIABLE FOR ANY SPECIAL, INDIRECT OR
#  CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
#  DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
#  TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
#  PERFORMANCE OF THIS SOFTWARE.

configdir = $(sysconfdir)/X11/lbxproxy

bin_PROGRAMS = lbxproxy

AM_CFLAGS = $(CWARNFLAGS)

AM_CPPFLAGS = $(LBXPROXY_CFLAGS) $(OS_CFLAGS) -I$(top_srcdir)/include	\
	-DDEF_ATOMS_FILE=\"$(configdir)/AtomControl\" \
	-D_BSD_SOURCE -DLBXPROXY_t -DTRANS_SERVER

lbxproxy_LDADD = $(LBXPROXY_LIBS)

lbxproxy_SOURCES = \
	di/atomcache.c		\
	di/cache.c		\
	di/cmap.c		\
	di/cmaputil.c		\
	di/dispatch.c		\
	di/extensions.c		\
	di/gfx.c		\
	di/globals.c		\
	di/init.c		\
	di/lbxfuncs.c		\
	di/lbxutil.c		\
	di/main.c		\
	di/options.c		\
	di/pm.c			\
	di/props.c		\
	di/reqtype.c		\
	di/resource.c		\
	di/swaprep.c		\
	di/swapreq.c		\
	di/tables.c		\
	di/tags.c		\
	di/unsquish.c		\
	di/utils.c		\
	di/wire.c		\
	di/zeropad.c		\
	os/connection.c		\
	os/osdep.h		\
	os/io.c			\
	os/osinit.c		\
	os/WaitFor.c		\
	os/lbxproxytrans.c	\
	include/assert.h	\
	include/atomcache.h	\
	include/cache.h		\
	include/colormap.h	\
	include/init.h		\
	include/lbxext.h	\
	include/lbxproxy.h	\
	include/misc.h		\
	include/os.h		\
	include/pm.h		\
	include/pmP.h		\
	include/proxyopts.h	\
	include/reqtype.h	\
	include/resource.h	\
	include/swap.h		\
	include/tags.h		\
	include/util.h		\
	include/wire.h

appman_PRE = \
        lbxproxy.man

dist_config_DATA = config/AtomControl

EXTRA_DIST = \
	design \
	lbxproxy.def

appmandir = $(APP_MAN_DIR)

appman_DATA = $(appman_PRE:man=@APP_MAN_SUFFIX@)

EXTRA_DIST += $(appman_PRE)
CLEANFILES = $(appman_DATA)

SUFFIXES = .$(APP_MAN_SUFFIX) .man

# String replacements in MAN_SUBSTS now come from xorg-macros.m4 via configure
.man.$(APP_MAN_SUFFIX):
	$(AM_V_GEN)$(SED) $(MAN_SUBSTS) < $< > $@

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog

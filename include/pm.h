/* $Xorg: pm.h,v 1.4 2001/02/09 02:05:32 xorgcvs Exp $ */

/*
Copyright 1996, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall
not be used in advertising or otherwise to promote the sale, use or
other dealings in this Software without prior written authorization
from The Open Group.
*/
/* $XFree86$ */

#include <X11/ICE/ICElib.h>

extern IceConn PM_iceConn;
extern int proxy_manager_fd;
extern Bool proxyMngr;

extern Bool CheckForProxyManager (
    void
);

extern void ConnectToProxyManager (
    void
);

extern void SendGetProxyAddrReply (
    IceConn /*requestor_iceConn*/,
    int /*status*/,
    const char * /*addr*/,
    const char * /*error*/
);

extern void HandleProxyManagerConnection (
    void
);

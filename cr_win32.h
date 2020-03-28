////////////////////////////////////////////////////////////////////////////
// cr_win32.cpg --- CodeReverse Win32 API header
// Copyright (C) 2015 Katayama Hirofumi MZ.  All rights reserved.
////////////////////////////////////////////////////////////////////////////
// This file is public domain software (PDS). Use free.
////////////////////////////////////////////////////////////////////////////

/* target windows version */
#include "targetver.h"

/* C stardard library */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <ctype.h>
#include <assert.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <malloc.h>
#include <math.h>
#include <process.h>
#include <setjmp.h>
#include <stdarg.h>
#include <search.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/timeb.h>
#include <sys/types.h>
#include <wchar.h>
#include <locale.h>

/* winsock version 2 */
#include <winsock2.h>

/* windows */
#include <windows.h>
#include <winreg.h>
#include <winnls.h>
#include <commdlg.h>
#include <commctrl.h>
#include <dlgs.h>

/* multimedia */
#include <mmsystem.h>
#include <vfw.h>

/* shell */
#include <shellapi.h>
#include <shlobj.h>
#include <shlwapi.h>

/* process debug helper */
#include <tlhelp32.h>
#include <psapi.h>
#include <imagehlp.h>

/* graphics */
#include <GL/gl.h>
#include <GL/glu.h>

/* input method */
#include <imm.h>

/* messaging */
#include <mapi.h>

/* performance data */
#include <winperf.h>
/* NOTE: MinGW has bug in <pdh.h> on _WIN32_WINNT >= 0x0600 */
#include <pdh.h>

/* setup-related */
#include <msi.h>
#include <setupapi.h>

/* remote access service */
#include <ras.h>

/* theme */
#include <uxtheme.h>

/* user env */
#include <userenv.h>

/* power prof */
#include <powrprof.h>

/* html help */
#include <htmlhelp.h>

/* ole */
#include <ole2.h>
#include <oleacc.h>
#include <oleauto.h>

/* windows misc. */
#include <wincrypt.h>
//#include <winusb.h>
#include <wintrust.h>
#include <winspool.h>
#include <winscard.h>
#include <wininet.h>
#include <wincred.h>

#include <nspapi.h>

/* NOTE: <wsdapi.h> is likely not available on C */
/* #include <wsdapi.h> */

/* NOTE: <winhttp.h> is not compatible to <wininet.h> */
/* #include <winhttp.h> */

/* more misc. */
#include <lmrepl.h>

/* NOTE: MinGW has bug in <dhcpsapi.h> on _WIN32_WINNT >= 0x0600 */
#include <dhcpsapi.h>

#include <urlmon.h>
#include <ipexport.h>
#include <icmpapi.h>
#include <dwmapi.h>
#include <errorrep.h>
#include <cfgmgr32.h>
//#include <hidsdi.h>
#include <msdrm.h>
#include <propsys.h>
#define SECURITY_WIN32
#include <sspi.h>
#include <ntsecapi.h>
#include <ntsecpkg.h>
#if (_WIN32_WINNT >= _WIN32_WINNT_WINXP)
    #include <wlanapi.h>
#endif
#include <rpc.h>
#include <hlink.h>

/* NOTE: RASCTRYINFO, RASIPADDR, PROCESSENTRY32 and MODULEENTRY32 macros are
         very confusing with same name types. We fixup. */
#undef RASCTRYINFO
#undef RASIPADDR
#undef PROCESSENTRY32
#undef MODULEENTRY32

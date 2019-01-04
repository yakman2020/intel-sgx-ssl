/*
 * Copyright (C) 2011-2017 Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in
 *     the documentation and/or other materials provided with the
 *     distribution.
 *   * Neither the name of Intel Corporation nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
 
#ifndef _BYPASS_TO_SGXSSL_
#define _BYPASS_TO_SGXSSL_

#ifdef _WIN32
#define __declspec(dllimport) 

#ifndef _USE_32BIT_TIME_T
    #define _stat64i32	oessl__stat64i32
#endif /* _USE_32BIT_TIME_T */

/*fileapi.h*/
#define FindClose oessl_FindClose
#define FindFirstFileA      oessl_FindFirstFileA
#define FindFirstFileW      oessl_FindFirstFileW
#define FindNextFileA       oessl_FindNextFileA
#define FindNextFileW       oessl_FindNextFileW
#define GetFileType oessl_GetFileType
#define WriteFile oessl_WriteFile


/*stddef.h*/
#define _errno       oessl__errno
/*stdio.h*/
#define _vsnprintf    oessl__vsnprintf
#define _snprintf     oessl__snprintf
#define _vsnwprintf   oessl__vsnwprintf
#define fclose        oessl_fclose
#define feof    oessl_feof
#define ferror oessl_ferror
#define fflush        oessl_fflush
#define fgets oessl_fgets
#define _fileno oessl__fileno
#define fopen oessl_fopen
#define fputs oessl_fputs
#define fread   oessl_fread
#define fseek oessl_fseek
#define ftell oessl_ftell
#define fwrite  oessl_fwrite
#define vfprintf      oessl_vfprintf
#define fprintf oessl_fprintf
#define printf oessl_printf
#define sscanf        oessl_sscanf

/*stdlib.h*/
#define _exit        oessl__exit
#define getenv       oessl_getenv

/*string.h*/
#define strerror_s   oessl_strerror_s
#define _strdup      oessl__strdup
#define _stricmp        oessl__stricmp
#define _strnicmp       oessl__strnicmp
#define strcat          oessl_strcat
#define strcpy          oessl_strcpy
#define _wassert        oessl__wassert 
#define wcscpy		oessl_wcscpy

/*conio.h*/
#define _getch  oessl__getch

/*processthreadsapi.h*/
#define GetCurrentThreadId        oessl_GetCurrentThreadId
#define TlsAlloc oessl_TlsAlloc
#define TlsGetValue oessl_TlsGetValue
#define TlsSetValue oessl_TlsSetValue
#define TlsFree oessl_TlsFree

/*synchapi.h*/
#define EnterCriticalSection oessl_EnterCriticalSection
#define LeaveCriticalSection oessl_LeaveCriticalSection
#define InitializeCriticalSectionAndSpinCount oessl_InitializeCriticalSectionAndSpinCount
#define DeleteCriticalSection oessl_DeleteCriticalSection


/*WinSock2.h*/
#define WSAGetLastError    oessl_WSAGetLastError
#define closesocket        oessl_closesocket
#define recv       oessl_recv
#define send       oessl_send
#define WSASetLastError oessl_WSASetLastError

/*WinUser.h*/
#define GetProcessWindowStation     oessl_GetProcessWindowStation
#define GetUserObjectInformationW   oessl_GetUserObjectInformationW
#define MessageBoxA oessl_MessageBoxA
#define MessageBoxW oessl_MessageBoxW
#define GetDesktopWindow    oessl_GetDesktopWindow

/*WinBase.h*/
#define DeregisterEventSource oessl_DeregisterEventSource
#define RegisterEventSourceA oessl_RegisterEventSourceA
#define RegisterEventSourceW oessl_RegisterEventSourceW
#define ReportEventA oessl_ReportEventA
#define ReportEventW oessl_ReportEventW
#define QueryPerformanceCounter oessl_QueryPerformanceCounter
#define GetCurrentProcessId oessl_GetCurrentProcessId
#define BCryptGenRandom oessl_BCryptGenRandom
#define OutputDebugStringW oessl_OutputDebugStringW
#define GetEnvironmentVariableW oessl_GetEnvironmentVariableW

/*errhandlingapi.h*/
#define GetLastError oessl_GetLastError
#define SetLastError oessl_SetLastError


/*errno.h*/
#define _errno   oessl__errno

/*io.h*/
#define _setmode oessl__setmode

/*libloaderapi.h*/
#define GetModuleHandleA       oessl_GetModuleHandleA
#define GetModuleHandleW       oessl_GetModuleHandleW
#define GetProcAddress oessl_GetProcAddress

/*processenv.h*/
#define GetStdHandle     oessl_GetStdHandle

/*signal.h*/
#define signal oessl_signal
#define raise oessl_raise

/*stringapiset.h*/
#define MultiByteToWideChar oessl_MultiByteToWideChar
#define WideCharToMultiByte oessl_WideCharToMultiByte
/*sys/timeb.h**/
#define _ftime64        oessl__ftime64

/*sysinfoapi.h*/
#define GetVersion oessl_GetVersion
#define GetSystemTimeAsFileTime oessl_GetSystemTimeAsFileTime

/*time.h*/
#define _time64        oessl__time64
#define _gmtime64      oessl__gmtime64
#define _gmtime64_s    oessl__gmtime64_s
#define _localtime64   oessl__localtime64
#define _getsystime    oessl_getsystime

/*wincon.h*/
#define FlushConsoleInputBuffer oessl_FlushConsoleInputBuffer

#else //_WIN32

#define mmap     oessl_mmap
#define munmap   oessl_munmap
#define mprotect oessl_mprotect
#define mlock    oessl_mlock
#define madvise  oessl_madvise

/*
#define fopen64 oessl_fopen64
#define fopen oessl_fopen
#define wfopen oessl_wfopen
#define fclose oessl_fclose
#define ferror oessl_ferror
#define feof oessl_feof
#define fflush oessl_fflush
#define ftell oessl_ftell
#define fseek oessl_fseek
#define fread oessl_fread
#define fwrite oessl_fwrite
#define fgets oessl_fgets
#define fputs oessl_fputs
#define fileno oessl_fileno
#define __fprintf_chk oessl_fprintf
*/

#if defined(SGXSDK_INT_VERSION) && (SGXSDK_INT_VERSION > 18)
	#define _longjmp longjmp
	#define _setjmp setjmp
#endif

#define pipe oessl_pipe
#define __read_alias oessl_read
#define write oessl_write
#define close oessl_close


#define sysconf oessl_sysconf

#define getsockname oessl_getsockname
#define getsockopt oessl_getsockopt
#define setsockopt oessl_setsockopt
#define socket oessl_socket
#define bind oessl_bind
#define listen oessl_listen
#define connect oessl_connect
#define accept oessl_accept
#define getaddrinfo oessl_getaddrinfo
#define freeaddrinfo oessl_freeaddrinfo
#define gethostbyname oessl_gethostbyname
#define getnameinfo oessl_getnameinfo
#define ioctl oessl_ioctl

char * oessl___builtin___strcat_chk(char *dest, const char *src, unsigned int dest_size);
char * oessl___builtin___strcpy_chk(char *dest, const char *src, unsigned int dest_size);


#define __builtin___strcpy_chk oessl___builtin___strcpy_chk
#define __builtin___strcat_chk oessl___builtin___strcat_chk

#define time oessl_time
#define gmtime_r oessl_gmtime_r
#define gettimeofday oessl_gettimeofday

//openssl 1.1.1 new APIs
//
#define getpid  oessl_getpid
#define stat    oessl_stat
#define syscall        oessl_syscall
#define pthread_atfork oessl_pthread_atfork
#define opendir        oessl_opendir
#define readdir        oessl_readdir
#define closedir       oessl_closedir
#define OPENSSL_issetugid oessl_OPENSSL_issetugid
#define clock_gettime oessl_clock_gettime


#define pthread_rwlock_init    oessl_pthread_rwlock_init
#define pthread_rwlock_rdlock  oessl_pthread_rwlock_rdlock
#define pthread_rwlock_wrlock  oessl_pthread_rwlock_wrlock
#define pthread_rwlock_unlock  oessl_pthread_rwlock_unlock
#define pthread_rwlock_destroy oessl_pthread_rwlock_destroy
#define pthread_once           oessl_pthread_once
#define pthread_key_create     oessl_pthread_key_create
#define pthread_setspecific    oessl_pthread_setspecific
#define pthread_getspecific    oessl_pthread_getspecific
#define pthread_key_delete oessl_pthread_key_delete
#define pthread_self oessl_pthread_self
#define pthread_equal oessl_pthread_equal

#define __ctype_b_loc oessl___ctype_b_loc
#define __ctype_tolower_loc oessl___ctype_tolower_loc

#define gai_strerror oessl_gai_strerror

#define getcontext  oessl_getcontext
#define setcontext  oessl_setcontext
#define makecontext oessl_makecontext
#define getenv     	oessl_getenv
#define secure_getenv oessl_getenv
#define atexit oessl_atexit
#define sscanf oessl_sscanf

#include <sys/cdefs.h>

#undef __REDIRECT
#define __REDIRECT(name, proto, alias) name proto 
#undef __REDIRECT_NTH
#define __REDIRECT_NTH(name, proto, alias) name proto 
#undef __REDIRECT_NTHNL
#define __REDIRECT_NTHNL(name, proto, alias) name proto 

#endif //_WIN32

#endif // _BYPASS_TO_SGXSSL_


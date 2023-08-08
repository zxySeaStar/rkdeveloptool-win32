//
// Created by cprin on 30-10-2020.
//

#ifndef RKDEVELOPTOOL_WIN32_H
#define RKDEVELOPTOOL_WIN32_H

#if defined(_WIN32) || defined(WIN32)

#include <Windows.h>
#include <sys/stat.h>
#include "dirent.h"
#include "unistd.h"

#define strncasecmp _strnicmp
#define strcasecmp _stricmp
#define sleep(x) Sleep(x)
//#define fseeko _fseeki64
//#define ftello _ftelli64 
#define localtime_r(a, b)  (localtime_s(b, a) == 0 ? b : NULL)
#else
#include <unistd.h>
#include <dirent.h>
#define sleep(x) usleep((x)*1000)
#endif

#endif //RKDEVELOPTOOL_WIN32_H

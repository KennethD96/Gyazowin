// stdafx.h
#pragma once

#ifndef WINVER				// Windows XP
#define WINVER 0x0501		// Windows
#endif

#ifndef _WIN32_WINNT		// Windows XP
#define _WIN32_WINNT 0x0501	// Windows
#endif

#ifndef _WIN32_WINDOWS		// Windows 98
#define _WIN32_WINDOWS 0x0410 // Windows Me
#endif

#ifndef _WIN32_IE			// IE 6.0
#define _WIN32_IE 0x0600	// IE
#endif

// #define WIN32_LEAN_AND_MEAN		// Windows
// Windows
#include <windows.h>

#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

// TODO:
#include <strsafe.h>
#include <shlobj.h>
#include "shlwapi.h"
#pragma comment (lib, "Shlwapi.lib")

#include <gdiplus.h>
#pragma comment (lib, "Gdiplus.lib")
using namespace Gdiplus;

#include "wininet.h"
#pragma comment(lib,"wininet.lib")

#include <time.h>

#include <fstream>
#include <sstream>
#include <string>
#include <vector>


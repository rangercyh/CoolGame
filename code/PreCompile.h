//---------------------------------------------------------------------------
// CoolGame Engine
// Date:	2013.12.10
// Code:	Caiyiheng
// Desc:	A windows high-resolution time counter.
//---------------------------------------------------------------------------

#ifndef ENGINE_PRECOMPILE_H_
#define ENGINE_PRECOMPILE_H_

#include "CustomStdAfx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#ifdef WIN32
	#include <windows.h>
	#include "winsock2.h"
#else
	#include <pthread.h>
#endif

#endif // ENGINE_PRECOMPILE_H_
#include "stdafx.h"
#include <iostream>
#include <windows.h>


int _tmain(int argc, _TCHAR* argv[])
{
	LARGE_INTEGER nFreq;
	LARGE_INTEGER nBeginTime;
	LARGE_INTEGER nEndTime;	

	QueryPerformanceFrequency(&nFreq);
	QueryPerformanceCounter(&nBeginTime);

	Sleep(1000);

	QueryPerformanceCounter(&nEndTime);

	double time = (double)(nEndTime.QuadPart - nBeginTime.QuadPart) / (double)nFreq.QuadPart;
	std::cout << time << std::endl;

	system("pause");
	return 0;
}

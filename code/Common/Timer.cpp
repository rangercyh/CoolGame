#include "PreCompile.h"
#include "Timer.h"

#define FREQ_DEFAULT_VALUE 10 * 1024 * 1024

Timer::Timer()
{
	m_nFrequency.QuadPart = FREQ_DEFAULT_VALUE;
	m_nStartTime.QuadPart = 0;
	m_nStopTime.QuadPart = 0;
	QueryPerformanceFrequency(&m_nFrequency);
}


Timer::~Timer()
{
}

void Timer::start()
{
	QueryPerformanceCounter(&m_nStartTime);
}

void Timer::stop()
{
	QueryPerformanceCounter(&m_nStopTime);
}

unsigned int Timer::getElapse()
{

}
unsigned int Timer::getElapseMicrosecond()
unsigned int Timer::getElapseFrequency()
unsigned int Timer::getInterval()
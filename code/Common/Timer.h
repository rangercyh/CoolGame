//---------------------------------------------------------------------------
// CoolGame Engine
// Date:	2013.12.10
// Code:	Caiyiheng
// Desc:	A windows high-resolution time counter.
//---------------------------------------------------------------------------
#ifndef ENGINE_COMMON_TIMER_H_
#define ENGINE_COMMON_TIMER_H_

class Timer
{
public:
	Timer();
	~Timer();
	void start();
	void stop();
	unsigned int	getElapse();	// return from start until now in second
	unsigned int	getElapseMicrosecond();	// return from start until now in microsecond
	unsigned int	getElapseFrequency();	// return from start until now counters
	unsigned int	getInterval();	// return interval(s) from start until stop
private:
	LARGE_INTEGER m_nFrequency;
	LARGE_INTEGER m_nStartTime;
	LARGE_INTEGER m_nStopTime;
};

#endif	// ENGINE_COMMON_TIMER_H_

#include "Timer.h"

#include <iostream>


//using namespace Utils;

Timer::Timer()
{
	// build time point
	Timer::m_startTime = std::chrono::high_resolution_clock::now();

}



void Timer::Stop()
{
	auto endTime = std::chrono::high_resolution_clock::now();
	auto start = std::chrono::time_point_cast<std::chrono::microseconds>(Timer::m_startTime).time_since_epoch().count();
	auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endTime).time_since_epoch().count();

	auto duration = end - start;

	double ms = duration * 0.001;
	double s = ms * 0.001;

	std::cout << "Elapsed time:" << " " << duration << "us (" << ms << "ms)" << " "<<"(" << s << "s)\n";
}

Timer::~Timer()
{
	//Stop();
}

#include <chrono>

/// <summary>
	/// This class will be used to bench mark the performance of each of
	/// the algorithms
	/// </summary>
class Timer
{
public:

	/// <summary>
	/// Constructor
	/// </summary>

	Timer();

	/// <summary>
	/// Destrcutor
	/// </summary>
	~Timer();




	void Stop();



private:
	std::chrono::time_point<std::chrono::high_resolution_clock> m_startTime;
};

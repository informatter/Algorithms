#include "StressTest.h"
#include "Challenges.h"


/// <summary>
/// 
/// </summary>
/// <param name="m">Max number in sequence to calculate</param>
void StressTest::Fibonacci(int m)
{
	bool exitCond = false;

	while (!exitCond)
	{
		int num = rand() % m + 1;

		int64_t recursive = Challenges::fibonnaciRecursive(num);
		int64_t iterative = Challenges::FibonnacciIterative(num);

		if (recursive == iterative) std::cout << "OK";

		else
		{
			std::cout << "Wrong answer!!" << " " <<"Recursive:"<<"\n" << recursive << "Iterative:" <<"\n"<< iterative;
			exitCond = true;
		}
	}
}

/// <summary>
/// This method is only applicable to methods which have a unique output
/// </summary>
/// <param name="n">set length </param>
/// <param name="m"> max number in  set </param>
void StressTest::MaxPairProduct(int n, int m)
{
	bool exitCond = false;
	while (!exitCond)
	{
		// random number between 1 and n
		int num = rand() % n + 1;

		std::vector<int> testSet;
		for (size_t i = 0; i < num; i++)
		{
			testSet.push_back(rand() % m + 0);
		}

		int64_t resultFast = Challenges::MaximumPairProductFast(testSet);
		int64_t resultNaive = Challenges::MaximumPairProductNaive(testSet);

		if (resultFast == resultNaive) std::cout << "OK";

		else
		{
			std::cout << "Wrong answer!!" << " " << resultFast << " , " << resultNaive;
			exitCond = true;
		}
	}

}

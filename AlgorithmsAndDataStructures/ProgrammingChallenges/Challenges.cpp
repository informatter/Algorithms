#include "Challenges.h"
#include<vector>
#include <random>


/// <summary>
/// Given an unordered set of positive integers, this method will 
/// return the  product between the two largest members of the set
/// 
/// This algorithm has a time complexity of n^2.  The maximum size for the set n is 2 * 10^5
/// In this case the total number of steps the algorithm will take is of the order: 2^2 * 10^10
/// 
/// Since many modern computers perform roughly 10^8–10^9 basic operations per second
/// (this depends on a machine, of course), it may take tens of seconds to execute this method exceeding the time limit for the Maximum Pairwise Product Problem.
///	
/// </summary>
/// <param name="numbers">A memory address of vector of integers.  </param>
/// <returns>the maximum pair wise product </returns>
int64_t Challenges::MaximumPairProductNaive(const std::vector<int> &numbers )
{
	int64_t max_product = 0;

	for (int i = 0; i < numbers.size(); i++)
	{
		for (int j = i + 1; j < numbers.size(); j++)
		{
			if (numbers[i] != numbers[j])
			{
				int64_t prod = (int64_t) numbers[i] * (int64_t) numbers[j];

				if (prod > max_product)  max_product = prod;

			}
		}
	}

	return  max_product;

}


/// <summary>
/// Given an unordered set of positive integers, this method will 
/// return the  product between the two largest members of the set
/// 
/// This method goes through the set once and chooses the largest member.
/// It then goes through the set a second time and finds the second largest member.
/// after this it computes the product between both
/// </summary>
/// <param name="numbers"></param>
/// <returns></returns>
int64_t Challenges::MaximumPairProductFast(const std::vector<int>& numbers)
{ 
	
	int64_t largestIntA = 0;

	int64_t largestIntB = 0;

	for (int  i = 0; i < numbers.size(); i++)
	{
		// find first largest number
		if ( numbers[i] > largestIntA) largestIntA = numbers[i];
	}

	
	for (int i = 0; i < numbers.size(); i++)
	{
		//find second largest number
		if ( numbers[i] > largestIntB &&  numbers[i]!= largestIntA) largestIntB = numbers[i];
	}

	

	return  largestIntA * largestIntB;
	
}

/// <summary>
/// 
/// </summary>
/// <param name="n">set length </param>
/// <param name="m"> max number in  set </param>
void Challenges::StressCase(int n, int m)
{
	bool exitCond = true;
	while (exitCond)
	{
		// random number between 1 and n
		int num = rand() % n + 1;

		std::vector<int> testSet;

	

		for (size_t i = 0; i < num; i++)
		{
			testSet.push_back(rand() % m + 0);
		}

		

		int64_t resultFast = MaximumPairProductFast(testSet);
		int64_t resultNaive = MaximumPairProductNaive(testSet);

		if (resultFast == resultNaive) std::cout << "OK";

		else
		{
			std::cout << "Wrong answer!!" << " " << resultFast<< " , " << resultNaive;
			exitCond = false;
		}
	}

	
}



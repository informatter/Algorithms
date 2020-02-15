#include "Challenges.h"
#include<vector>


/// <summary>
/// Given an unordered set of positive integers, this method will 
/// return the maximum product between to members of the set
/// 
/// This algorithm has a time complexity of n^2.  The maximum size for the set n is 2 * 10^5
/// In this case the total number of steps the algorithm will take is of the order: 2^2 * 10^10
/// 
/// Since many modern computers perform roughly 108–109 basic operations per second
/// (this depends on a machine, of course), it may take tens of seconds to execute
///	
///	MaxPairwiseProductNaive, exceeding the time limit for the Maximum Pairwise Product Problem.
///	
/// </summary>
/// <param name="numbers">A memory address of vector of integers.  </param>
/// <returns>the maximum ppair wise product </returns>
int Challenges::MaximumPairProduct(const std::vector<int> &numbers )
{
	int max_product = 0;


	for (int i = 0; i < numbers.size(); i++)
	{
		for (int j = i + 1; j < numbers.size(); j++)
		{
			if (numbers[i] != numbers[j])
			{
				int prod = numbers[i] * numbers[j];

				if (prod > max_product) max_product = prod;
			}
		}
	}

	return max_product;

}


/// <summary>
/// 
/// </summary>
/// <param name="numbers"></param>
/// <returns></returns>
int Challenges::MaximumPairProductFast(const std::vector<int>& numbers)
{
	int largestIntA = 0;

	int largestIntB = 0;

	for (int  i = 0; i < numbers.size(); i++)
	{
		// find first largest number
		if (numbers[i] > largestIntA) largestIntA = numbers[i];

	}

	
	for (int i = 0; i < numbers.size(); i++)
	{
		//find second largest number
		if (numbers[i] > largestIntB && numbers[i]!= largestIntA) largestIntB = numbers[i];
	}

	return largestIntA * largestIntB;

	
}



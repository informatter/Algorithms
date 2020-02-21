#include "Challenges.h"
#include<vector>
#include <random>



/// <summary>
/// This method will sort an unordered list of all members of the Real numbers from smallest to biggest.
/// Insertion sort is good with small inputs. With larger inputs it is not efficient because
/// it has n^2 complexity time.
/// </summary>
/// <param name="data">The collection to sort</param>
 void Challenges::InsertionSort( std::vector<int>& data)
{
	for (int j = 1; j < data.size(); j++)
	{

		int current = data[j];
		int previousIndex = j - 1;

		// iterate until correct position of insertion is found
		while (previousIndex >= 0 && data[previousIndex] > current)
		{
			// assign larger number to next index
			data[previousIndex + 1] = data[previousIndex];

			// decrease previous index
			previousIndex--;

		}

		data[previousIndex + 1] = current;
	}

}

/// <summary>
/// Computes the greatest common divisor between two positive integers
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
int Challenges::EuclideanAlgorithm(int a, int b)
{
	// Properties of the Euclidean algorithm
	if (a == 0 && b != 0) return b;
	else if (a != 0 && b == 0) return a;

	else
	{
		int r = a % b;
		while (r != 0)
		{
			a = b;
			b = r;
			r = a % b;
		}
	}

	return b;


}


/// <summary>
/// Iterative fiboncacci method.
/// This method is much faster because it is only stored in the stack
/// once during its lifetime.
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int64_t Challenges::FibonnacciIterative(int n)
{
	if (n == 0 || n == 1) return n;

	int64_t a=0, b=1, c=1;
	for (int i = 0; i < n; i++)
	{
		a = b;
		b = c;
		c = a + b;
	}
	return a;
}


/// <summary>
/// Recursive fibonacci sequence.
/// This method is computationally expensive due to the amount of stack calls and 
/// memory used to store the method during its lifetime
/// This of course is the typical behavior of recursive functions
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int64_t Challenges::fibonnaciRecursive(int n)
{
	if (n == 0 || n == 1) return n;

	return fibonnaciRecursive(n - 1) + fibonnaciRecursive(n - 2);
}

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



	




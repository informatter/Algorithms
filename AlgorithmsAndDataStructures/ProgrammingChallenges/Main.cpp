// ProgrammingChallenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<random>
#include "Challenges.h"
#include "Timer.h"
#include "StressTest.h"




int main()
{
	

	
	
#pragma region MAX PAIR WISE PRODUCT

	//std::vector<int> set;
	//for (int i = 1; i <= 200000; i++)
	//{
	//	// Add a random num between 1-1000
	//	//set.push_back(rand() % 1000 + 1);

	//	set.push_back(i);
	//}


	//ch.StressTest(5, 9, );


	/*std::cout << "Input size:" << set.size()<<"\n";
	std::cout << "\n";
	std::cout << "Maximum par wise product fast"<< "\n" ;*/

	//Timer stopWatch;

	//int64_t resultFast =  ch.MaximumPairProductFast(set);

	//stopWatch.Stop();

	//std::cout << resultFast << "\n";
	//std::cout << "\n";
	//std::cout << "Maximum par wise product" << "\n";

	//Timer stopWatchB;

	//int64_t result = ch.MaximumPairProductNaive(set);

	//stopWatchB.Stop();

	//std::cout << result << "\n";
	//std::cout <<  "\n";
#pragma endregion

#pragma region EUCLIDEAN ALGORITHM

		/*int GCD = ch.EuclideanAlgorithm(2323421, 321213);

		std::cout << GCD << "\n";*/

#pragma endregion

#pragma region FIBONACCI



		//int fibo = ch.FibonnacciIterative(8);

		//StressTest::Fibonacci(12);


		//std::cout << fibo << "\n";

	//int term = 10;

	//std::cout << "----------------------" << "FIBONACCI" << "----------------------" << "\n";
	//std::cout << "\n";
	//std::cout << "\n";

	//std::cout << "Calculating" << " " << term << " " << "th" <<" " <<"term" << "\n";
	//std::cout << "\n";
	//std::cout << "Iterative Fibonacci" << "\n";


	//Timer stopWatch;

	//int64_t fiboIte = Challenges::FibonnacciIterative(term);

	//stopWatch.Stop();


	//std::cout << "Result:" << " " << fiboIte << "\n";
	//std::cout << "\n";
	//std::cout << "\n";

	//std::cout << "Recursive Fibonacci" << "\n";

	//Timer stopWatchB;

	//int64_t fiboRec = Challenges::fibonnaciRecursive(term);

	//stopWatchB.Stop();

	//std::cout << "Result:" << " " << fiboRec << "\n";

#pragma endregion


#pragma region SELECTION SORT

//std::vector<int> data{ 20,3,35,11,2 };
int n = 50;
std::vector<int> data;
	for (int i = 1; i <= n; i++)
	{
		// Add a random num between 1-1000
		data.push_back(rand() % 10000 + 1);

	}

Challenges::SelectionSort(data);

for (int i = 0; i < data.size(); i++)
	std::cout << data[i] << "\n" ;


#pragma endregion


	

  
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

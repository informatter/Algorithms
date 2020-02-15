// ProgrammingChallenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<random>
#include "Challenges.h"
#include "Timer.h"




int main()
{
	std::vector<int> set;
	Challenges ch;
	for (int i = 1; i <= 200000; i++)
	{
		// Add a random num between 1-1000
		//set.push_back(rand() % 1000 + 1);

		set.push_back(i);		
	}

	

	
	ch.StressCase(5, 9);
	

	/*std::cout << "Input size:" << set.size()<<"\n";
	std::cout << "\n";
	std::cout << "Maximum par wise product fast"<< "\n" ;*/

	/*Timer stopWatch;
	
	int64_t resultFast =  ch.MaximumPairProductFast(set);

	stopWatch.Stop();*/

	//std::cout << resultFast << "\n";
	//std::cout << "\n";
	//std::cout << "Maximum par wise product" << "\n";

	//Timer stopWatchB;

	//int64_t result = ch.MaximumPairProductNaive(set);

	//stopWatchB.Stop();

	//std::cout << result << "\n";
	//std::cout <<  "\n";


	

  
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

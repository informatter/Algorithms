#include <iostream>
#include <vector>
#include<map>
using namespace std;
class HackerRankChallenges
{
public:

	/// <summary>
	/// Given a set of integers, finds the largest subset of s,
	/// where the sum of any 2 numbers in s' is not evenly 
	/// divisable by k, k>0
	/// </summary>
	/// <param name="k">integer to divide by where k>0</param>
	/// <param name="s"> the set to operate with</param>
	/// <returns></returns>
	static int NonDivisibleSubset(int k, const vector<int> &s);

	static int SockMerchant(int n,  vector<int> ar);

	static int CountingValleys(int n, string s);
};


#include "HackerRankChallenges.h"
#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

/// <summary>
/// Computes the number of valleys crossed during a hike described as a string
/// </summary>
/// <param name="n">total number of characters in string </param>
/// <param name="s"> a string representing the hike</param>
/// <returns> total number of valleys crossed </returns>
int HackerRankChallenges::CountingValleys(int n, string s)
{
    
    int levelC = 0, valleyC=0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'U')        
            levelC++;
        
        else if (s[i] == 'D')
        {
            if (levelC == 0) 
                valleyC++;

            levelC--;
        }
    }

    return valleyC;
}

/// <summary>
/// Given a set of integers, finds the largest subset of s,
/// where the sum of any 2 numbers in s' is not evenly 
/// divisable by k, k>0
/// </summary>
/// <param name="k">integer to divide by where k>0</param>
/// <param name="s"> the set to operate with</param>
/// <returns></returns>
int HackerRankChallenges::NonDivisibleSubset(int k, const vector<int> &s)
{
     
     map<int,int> m= map<int,int>();

     for (int i = 0; i < s.size(); i++)
     {

         
         for (int j = i+1; j < s.size(); j++)
         {
             int r = (s[i] + s[j]) % k;
             if (r !=0)
             {
                
                 if (m.find(s[i]) == m.end()) 
                 {                     
                     // not found
                     m.insert(pair<int, int>(s[i], s[i]));
                 }

                 if (m.find(s[j]) == m.end())
                 {
                     // not found
                     m.insert(pair<int, int>(s[j], s[j]));
                 }
 
                
             }
         }



   
     }

  

     return m.size();

}

int HackerRankChallenges::SockMerchant(int n,  vector<int> ar)
{
    int totalPairs = 0, item = 0, numSocks;
    map<int, int> m; // hash map to keep track of successful pairs

    for (int i = 0; i < n; i++)
    {
        // Ignore iterated elements in the past... save some cycles!
        if (m.find(ar[i]) == m.end() == false) continue;

         numSocks = 1;
        for (int j = i+1; j < n; j++)            
            if (ar[i] == ar[j])           
                numSocks++;
                       
        if (numSocks % 2 == 0)
        {
            totalPairs += numSocks/2;
            m.insert({ ar[i], ar[i] });
        }

        if (numSocks >1 && numSocks % 2 != 0)
        {
            totalPairs += (numSocks -1)/2;
            m.insert({ ar[i], ar[i] });
        }


    }

    return totalPairs;
}


/* leetcode problem 204: Count Primes 
Given an integer n, return the number of prime numbers that are strictly less than n.
Example 1:
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7. */

#include <iostream>
#include<vector>
using namespace std;

int countPrimes(int n) 
{
    vector<bool> isprime(n+1, true);
    int count = 0; 

    for(int i=2; i<n; i++)
    {
        if(isprime[i])
        {
            count++;
        }

        for(int j=i*2; j<n; j+=i)
        {
            isprime[j]= false;
        }
    }

    return count;
    
}

int main()
{
    int n;
    cout<<"enter a number ";
    cin>>n;
    cout<<"the number of prime numbers less than "<<n<<" is "<<countPrimes(n)<<endl;

    return 0;
}
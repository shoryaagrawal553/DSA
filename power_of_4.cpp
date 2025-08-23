/* leet code quwesion  342. Power of Four
Given an integer n, return true if it is a power of four. Otherwise, return false,
An integer n is a power of four, if there exists an integer x such that n == 4x.
Example 1:
Input: n = 16
Output: true
Example 2:
Input: n = 5
Output: false  */

#include <iostream>
using namespace std;

bool isPowerOfFour(int n) 
{
    if(n<=0) return false;
    if(n==1) return true;
    while(n>=0)    
    {
        if(n%4!=0)
        {
            return false;
        }
        n= n/4;
        if(n==1) return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;   
    if(isPowerOfFour(n))
    {
        cout << n << " is a power of four." << endl;
    }
    else
    {        
        cout << n << " is not a power of four." << endl;
    }
    return 0;
}
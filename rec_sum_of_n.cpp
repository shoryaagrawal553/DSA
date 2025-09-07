#include <iostream>
using namespace std;

int Sum(int n)
{
    //if(n==0) return 0;   reduce as many calls as possible
    if(n==1) return 1;  // base case is when n is 1

    else return n+Sum(n-1);
}

int main()
{
    cout<<Sum(0);
    return 0;
}
#include<iostream>
using namespace std;

int sumOfSquare(int n)
{
    if(n==1) return 1;  // putting check at n=1 reduces number of calls

    else
    return (n*n)+sumOfSquare(n-1);
}

int main()
{
    int n=5;
    cout<<sumOfSquare(n);

    return 0;
}

// sum of square of n natural no. = n(n+1)(2n+1)/6
// sum of square of 5 natural no. = 5*6*11/6 = 55
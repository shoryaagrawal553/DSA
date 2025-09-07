#include <iostream>
using namespace std;

int Factorial(int num)
{
    if(num > 0)  // base case is when num is 0
        return num * Factorial(num - 1);
    else
        return 1;  // will return 1 when num is 0 as 0! = 1
}

int main()
{
    cout<<Factorial(10);
    return 0;
}
#include <iostream>
using namespace std;

int GCD(int num1, int num2)
{
    int a= max(num1, num2); // larger number
    int b= min(num1, num2); // smaller number

    if(num1==0 || num2==0) return a;  // when one number is 0, return the other number as GCD

    return GCD(b, a % b);  // recursive call with smaller number and remainder
}

int main()
{
    cout<<GCD(18, 48);

    return 0;
}
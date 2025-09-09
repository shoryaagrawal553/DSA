#include <iostream>
using namespace std;

int Power(int num, int pow)
{
    if(pow==0) return 1;

    else 
    {
        return num*Power(num, pow-1); 
    }
}

int main()
{
    int n = 4;
    cout<<Power(2, n);
    return 0;
}
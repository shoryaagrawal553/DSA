#include <iostream>
using namespace std;

void print(int num, int n)
{
    if(num>n) return;
    cout<<num<<" ";
    print(num+1, n);
}

void print_UsingOneArg (int n)
{
    if(n == 1)
    {
        cout<<n<<" ";
        return;
    }

    print_UsingOneArg(n-1); //first call till base case is reached
    cout<<n<<" "; //then print the value while returning from the base case
}

int main()
{
    print(1, 8);
    cout<<endl;
    print_UsingOneArg(5);
    return 0;
}
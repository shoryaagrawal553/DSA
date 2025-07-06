//HCF= Highest Common Factor
//GCD= Greatest Common Divisor
// its opimize version in euclid algoithm

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int hcf=-1;
    cout<<"Enter ";
    cin>>a>>b;

    for(int i=2; i<=min(a,b); i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf= i;
        }
    }

    cout<<"the HCF/GCD of "<<a<<" and "<<b<<" is: "<<hcf; 
    return 0;
}
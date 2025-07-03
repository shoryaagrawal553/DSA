#include <iostream>
using namespace std; 

int gcd(int a, int b)
{
    while(a>0 && b>0)  
    {
        if(a>b) 
        {
            a=a%b; 
        }
        else{ 
            b=b%a;
        }
    }
    return a+b; // when one of them is zero, the other is the GCD
}

int lcm(int a, int b)
{
    int gcd_value = gcd(a, b);
    int lcm= (a*b)/gcd_value; // LCM can be calculated using the formula: LCM(a, b) = (a * b) / GCD(a, b)
    return lcm;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;      
    int result = lcm(a, b);
    cout << "The LCM of " << a << " and " << b << " is: " << result << endl;
    
    return 0;
}

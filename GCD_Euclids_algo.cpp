// this algorithm works by 
// repeatedly replacing the larger number by the remainder of the division of the larger 
//number by the smaller number
// until one of the numbers becomes zero. The other number at that point is the GCD
  
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
    return (a==0? b:a); // return the non-zero value, which is the GCD
    // Alternatively, you can use:
    //return a+b; // when one of them is zero, the other is the GCD
}
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int result = gcd(a, b);
    cout << "The GCD of " << a << " and " << b << " is: " << result << endl;

    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int a[5]={55,65,-22,31,43000};
    int i;
    // int smallest = a[0], largest=a[0];

    // for(i=1; i<5; i++)
    // {
    //     if(a[i]<smallest )
    //     {
    //         smallest =a[i];
    //     }
    //     else if(a[i]>largest)
    //     {
    //         largest=a[i];
    //     }
    // }

    // int smallest = INT_MAX , largest=INT_MIN ;

    // for(i=0; i<5; i++)
    // {
    //     if(a[i]<smallest )
    //     {
    //         smallest =a[i];
    //     }
    //     else if(a[i]>largest)
    //     {
    //         largest=a[i];
    //     }
    // }

    // cout<<"smallest  value is: "<<smallest ;
    // cout<<"\nlargest value is: "<<largest;

    /*** method 3: using inbiuilt function ***/
    //int smallest = min(a, b);   int largest = max(a, b);

    int smallest=0, largest=0;
    for(i=0; i<5; i++)
    {
        smallest  = min(smallest, a[i]);
        largest = max(largest, a[i]);
    }

    cout<<"smallest  value is: "<<smallest ;
    cout<<"\nlargest value is: "<<largest;

    return 0;
}

//If you know the array is non-empty and contains valid values, 
//use Method 1 for simplicity and efficiency. 
//If you want a more generalized solution, use Method 2.
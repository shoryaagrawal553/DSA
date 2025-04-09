#include <iostream>
using namespace std;

int main()
{
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    int sum=0, prod=1;
    
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
        prod*=arr[i];
    }

    cout<<"sum of the elements of array is "<<sum<<"\nand product is "<<prod;
    return 0;
}